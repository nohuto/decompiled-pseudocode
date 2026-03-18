/*
 * XREFs of NtUserProcessConnect @ 0x1C00FEF40
 * Callers:
 *     <none>
 * Callees:
 *     IsSysEntryApiExtSupported_0 @ 0x1C0001000 (IsSysEntryApiExtSupported_0.c)
 *     SysEntryGetDispatchTableValues_0 @ 0x1C0001008 (SysEntryGetDispatchTableValues_0.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00FF354 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2)
{
  _OWORD *v3; // rsi
  __int64 ProcessPeb; // r14
  __int64 v5; // r12
  size_t v6; // r15
  _OWORD *v7; // rbx
  int *p_Src; // rax
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rcx
  PVOID v12; // rdi
  int inited; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  char *v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-368h] BYREF
  char v20; // [rsp+30h] [rbp-338h]
  PVOID Object; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-328h]
  __int64 v23; // [rsp+48h] [rbp-320h]
  volatile void *Address; // [rsp+50h] [rbp-318h]
  volatile void *v25[2]; // [rsp+58h] [rbp-310h]
  volatile void *v26; // [rsp+78h] [rbp-2F0h]
  PVOID v27; // [rsp+80h] [rbp-2E8h]
  int Src; // [rsp+C0h] [rbp-2A8h] BYREF
  char v29; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+300h] [rbp-68h] BYREF

  Address = a2;
  v3 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported_0() < 0 )
    return -1073741637;
  v5 = 4LL;
  v6 = 576LL;
  v7 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v9 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v7;
    *((_OWORD *)p_Src + 1) = v7[1];
    *((_OWORD *)p_Src + 2) = v7[2];
    *((_OWORD *)p_Src + 3) = v7[3];
    *((_OWORD *)p_Src + 4) = v7[4];
    *((_OWORD *)p_Src + 5) = v7[5];
    *((_OWORD *)p_Src + 6) = v7[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v7[7];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)p_Src = *v7;
  *((_OWORD *)p_Src + 1) = v7[1];
  *((_OWORD *)p_Src + 2) = v7[2];
  *((_OWORD *)p_Src + 3) = v7[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues_0() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v12 = Object;
  v27 = Object;
  if ( result >= 0 )
  {
    if ( v12 == (PVOID)PsGetCurrentProcess(v11)
      || !(unsigned int)PsIsProtectedProcess(v12)
      || (unsigned int)PsIsProtectedProcessLight(v12) )
    {
      v20 = 0;
    }
    else
    {
      v22 = 0LL;
      LODWORD(v25[0]) = 0;
      v25[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v12);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(v12);
        return inited;
      }
      v20 = 1;
      ProcessPeb = PsGetProcessPeb(v12);
      v23 = ProcessPeb;
      KeStackAttachProcess((PRKPROCESS)v12, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v16 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v22 = v16;
      if ( (v16 & 1) == 0 )
        goto LABEL_34;
      v17 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
      v22 = v17;
      if ( (v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v17 + 16 > W32UserProbeAddress || v17 + 16 < v17 )
        *W32UserProbeAddress = 0;
      *(_OWORD *)v25 = *(_OWORD *)v17;
      if ( LODWORD(v25[0]) != 568 )
      {
LABEL_34:
        inited = -1073741823;
        v12 = Object;
LABEL_13:
        if ( v20 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(v12);
        }
        goto LABEL_15;
      }
      v3 = v25[1];
      v26 = v25[1];
      ProbeForWrite(v25[1], 0x238uLL, 4u);
      v12 = Object;
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v12, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v15, v14);
    if ( inited >= 0 )
    {
      if ( v20 )
      {
        v18 = &v29;
        do
        {
          *v3 = *(_OWORD *)v18;
          v3[1] = *((_OWORD *)v18 + 1);
          v3[2] = *((_OWORD *)v18 + 2);
          v3[3] = *((_OWORD *)v18 + 3);
          v3[4] = *((_OWORD *)v18 + 4);
          v3[5] = *((_OWORD *)v18 + 5);
          v3[6] = *((_OWORD *)v18 + 6);
          v3 += 8;
          *(v3 - 1) = *((_OWORD *)v18 + 7);
          v18 += 128;
          --v5;
        }
        while ( v5 );
        *v3 = *(_OWORD *)v18;
        v3[1] = *((_OWORD *)v18 + 1);
        v3[2] = *((_OWORD *)v18 + 2);
        *((_QWORD *)v3 + 6) = *((_QWORD *)v18 + 6);
        _InterlockedOr(v19, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        v12 = Object;
        PsReleaseProcessExitSynchronization(Object);
        v20 = 0;
        v6 = 8LL;
      }
      memmove((void *)Address, &Src, v6);
    }
    goto LABEL_13;
  }
  return result;
}
