/*
 * XREFs of NtUserProcessConnect @ 0x1C00DD820
 * Callers:
 *     <none>
 * Callees:
 *     IsSysEntryApiExtSupported_0 @ 0x1C0001000 (IsSysEntryApiExtSupported_0.c)
 *     SysEntryGetDispatchTableValues_0 @ 0x1C0001008 (SysEntryGetDispatchTableValues_0.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00DDC30 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rdi
  int inited; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  char *v19; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-368h] BYREF
  char v21; // [rsp+30h] [rbp-338h]
  PVOID Object; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-328h]
  __int64 v24; // [rsp+48h] [rbp-320h]
  volatile void *Address; // [rsp+50h] [rbp-318h]
  volatile void *v26[2]; // [rsp+58h] [rbp-310h]
  volatile void *v27; // [rsp+70h] [rbp-2F8h]
  PVOID v28; // [rsp+80h] [rbp-2E8h]
  int Src; // [rsp+C0h] [rbp-2A8h] BYREF
  char v30; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+300h] [rbp-68h] BYREF

  Address = a2;
  v3 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle, a2) )
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
  v13 = Object;
  v28 = Object;
  if ( result >= 0 )
  {
    if ( v13 == (PVOID)PsGetCurrentProcess(v12, v11)
      || !(unsigned int)PsIsProtectedProcess(v13)
      || (unsigned int)PsIsProtectedProcessLight(v13) )
    {
      v21 = 0;
    }
    else
    {
      v23 = 0LL;
      LODWORD(v26[0]) = 0;
      v26[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v13);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(v13);
        return inited;
      }
      v21 = 1;
      ProcessPeb = PsGetProcessPeb(v13);
      v24 = ProcessPeb;
      KeStackAttachProcess((PRKPROCESS)v13, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v17 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v23 = v17;
      if ( (v17 & 1) == 0 )
        goto LABEL_34;
      v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      v23 = v18;
      if ( (v18 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + 16 > W32UserProbeAddress || v18 + 16 < v18 )
        *W32UserProbeAddress = 0;
      *(_OWORD *)v26 = *(_OWORD *)v18;
      if ( LODWORD(v26[0]) != 568 )
      {
LABEL_34:
        inited = -1073741823;
        v13 = Object;
LABEL_13:
        if ( v21 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(v13);
        }
        goto LABEL_15;
      }
      v3 = v26[1];
      v27 = v26[1];
      ProbeForWrite(v26[1], 0x238uLL, 4u);
      v13 = Object;
    }
    EnterCrit(1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v13, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v16, v15);
    if ( inited >= 0 )
    {
      if ( v21 )
      {
        v19 = &v30;
        do
        {
          *v3 = *(_OWORD *)v19;
          v3[1] = *((_OWORD *)v19 + 1);
          v3[2] = *((_OWORD *)v19 + 2);
          v3[3] = *((_OWORD *)v19 + 3);
          v3[4] = *((_OWORD *)v19 + 4);
          v3[5] = *((_OWORD *)v19 + 5);
          v3[6] = *((_OWORD *)v19 + 6);
          v3 += 8;
          *(v3 - 1) = *((_OWORD *)v19 + 7);
          v19 += 128;
          --v5;
        }
        while ( v5 );
        *v3 = *(_OWORD *)v19;
        v3[1] = *((_OWORD *)v19 + 1);
        v3[2] = *((_OWORD *)v19 + 2);
        *((_QWORD *)v3 + 6) = *((_QWORD *)v19 + 6);
        _InterlockedOr(v20, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        v13 = Object;
        PsReleaseProcessExitSynchronization(Object);
        v21 = 0;
        v6 = 8LL;
      }
      memmove((void *)Address, &Src, v6);
    }
    goto LABEL_13;
  }
  return result;
}
