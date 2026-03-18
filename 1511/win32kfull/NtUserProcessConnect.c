/*
 * XREFs of NtUserProcessConnect @ 0x1C00E09D0
 * Callers:
 *     <none>
 * Callees:
 *     IsSysEntryApiExtSupported_0 @ 0x1C0001000 (IsSysEntryApiExtSupported_0.c)
 *     SysEntryGetDispatchTableValues_0 @ 0x1C0001008 (SysEntryGetDispatchTableValues_0.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00E0DE4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2, __int64 a3, __int64 a4)
{
  _OWORD *v5; // rsi
  __int64 ProcessPeb; // r14
  __int64 v7; // r12
  size_t v8; // r15
  _OWORD *v9; // rbx
  int *p_Src; // rax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rdi
  int inited; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  char *v23; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-368h] BYREF
  char v25; // [rsp+30h] [rbp-338h]
  PVOID Object; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-328h]
  __int64 v28; // [rsp+48h] [rbp-320h]
  volatile void *Address; // [rsp+50h] [rbp-318h]
  volatile void *v30[2]; // [rsp+58h] [rbp-310h]
  volatile void *v31; // [rsp+70h] [rbp-2F8h]
  PVOID v32; // [rsp+80h] [rbp-2E8h]
  int Src; // [rsp+C0h] [rbp-2A8h] BYREF
  char v34; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+300h] [rbp-68h] BYREF

  Address = a2;
  v5 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle, a2, a3, a4) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported_0() < 0 )
    return -1073741637;
  v7 = 4LL;
  v8 = 576LL;
  v9 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v11 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v9;
    *((_OWORD *)p_Src + 1) = v9[1];
    *((_OWORD *)p_Src + 2) = v9[2];
    *((_OWORD *)p_Src + 3) = v9[3];
    *((_OWORD *)p_Src + 4) = v9[4];
    *((_OWORD *)p_Src + 5) = v9[5];
    *((_OWORD *)p_Src + 6) = v9[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  *(_OWORD *)p_Src = *v9;
  *((_OWORD *)p_Src + 1) = v9[1];
  *((_OWORD *)p_Src + 2) = v9[2];
  *((_OWORD *)p_Src + 3) = v9[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues_0() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = Object;
  v32 = Object;
  if ( result >= 0 )
  {
    if ( v17 == (PVOID)PsGetCurrentProcess(v14, v13, v15, v16)
      || !(unsigned int)PsIsProtectedProcess(v17)
      || (unsigned int)PsIsProtectedProcessLight(v17) )
    {
      v25 = 0;
    }
    else
    {
      v27 = 0LL;
      LODWORD(v30[0]) = 0;
      v30[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v17);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(v17);
        return inited;
      }
      v25 = 1;
      ProcessPeb = PsGetProcessPeb(v17);
      v28 = ProcessPeb;
      KeStackAttachProcess((PRKPROCESS)v17, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v21 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v27 = v21;
      if ( (v21 & 1) == 0 )
        goto LABEL_34;
      v22 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
      v27 = v22;
      if ( (v22 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v22 + 16 > W32UserProbeAddress || v22 + 16 < v22 )
        *W32UserProbeAddress = 0;
      *(_OWORD *)v30 = *(_OWORD *)v22;
      if ( LODWORD(v30[0]) != 568 )
      {
LABEL_34:
        inited = -1073741823;
        v17 = Object;
LABEL_13:
        if ( v25 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(v17);
        }
        goto LABEL_15;
      }
      v5 = v30[1];
      v31 = v30[1];
      ProbeForWrite(v30[1], 0x238uLL, 4u);
      v17 = Object;
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v17, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v20, v19);
    if ( inited >= 0 )
    {
      if ( v25 )
      {
        v23 = &v34;
        do
        {
          *v5 = *(_OWORD *)v23;
          v5[1] = *((_OWORD *)v23 + 1);
          v5[2] = *((_OWORD *)v23 + 2);
          v5[3] = *((_OWORD *)v23 + 3);
          v5[4] = *((_OWORD *)v23 + 4);
          v5[5] = *((_OWORD *)v23 + 5);
          v5[6] = *((_OWORD *)v23 + 6);
          v5 += 8;
          *(v5 - 1) = *((_OWORD *)v23 + 7);
          v23 += 128;
          --v7;
        }
        while ( v7 );
        *v5 = *(_OWORD *)v23;
        v5[1] = *((_OWORD *)v23 + 1);
        v5[2] = *((_OWORD *)v23 + 2);
        *((_QWORD *)v5 + 6) = *((_QWORD *)v23 + 6);
        _InterlockedOr(v24, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        v17 = Object;
        PsReleaseProcessExitSynchronization(Object);
        v25 = 0;
        v8 = 8LL;
      }
      memmove((void *)Address, &Src, v8);
    }
    goto LABEL_13;
  }
  return result;
}
