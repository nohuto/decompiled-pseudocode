/*
 * XREFs of ExpRaiseHardError @ 0x1406F7B94
 * Callers:
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x1406F7EF4 (NtRaiseHardError.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140154878 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x14018C9A0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PsCaptureExceptionPort @ 0x140420D34 (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x1405325E0 (LpcRequestWaitReplyPortEx.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  char v15; // dl
  _KPROCESS *Process; // r10
  int v17; // r11d
  _KPROCESS *v18; // rdi
  char v19; // si
  _BYTE *Teb; // rcx
  char v21; // al
  int v22; // ecx
  unsigned int v23; // r13d
  int v24; // r14d
  unsigned int v25; // ecx
  _DWORD v28[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-2C8h]
  int v30; // [rsp+B8h] [rbp-2C0h]
  unsigned int v31; // [rsp+BCh] [rbp-2BCh]
  unsigned int v32; // [rsp+C0h] [rbp-2B8h]
  unsigned int v33; // [rsp+C4h] [rbp-2B4h]
  char v34[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v15 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 8) = 2;
    v15 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v17 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x10;
  if ( !v17 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 8) || v15) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[5] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
LABEL_18:
    *a7 = 0;
    return 0LL;
  }
  v18 = 0LL;
  v19 = 0;
  if ( !v17 )
  {
    LOBYTE(v9) = (Process[1].ThreadSeed[0] & 1) == 0;
    if ( ((unsigned __int8)v9 & ((a1 & 0x10000000) == 0)) == 0 )
    {
      v18 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process, v9, v10, v11);
      if ( v18 )
        v19 = 1;
      else
        v18 = CurrentServerSiloGlobals[6];
    }
  }
  if ( v18
    && ((KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = KeGetCurrentThread()->Teb),
        Teb) )
  {
    v21 = Teb[5808];
    v22 = 0;
    if ( (v21 & 0x10) != 0 )
      v22 = -1073741823;
    v23 = a3;
    if ( v22 < 0 )
    {
      if ( v19 == 1 )
        ObfDereferenceObject(v18);
      v18 = 0LL;
    }
  }
  else
  {
    v23 = a3;
  }
  if ( !v18 )
    goto LABEL_18;
  v28[0] = 7340104;
  v28[1] = 9;
  v28[10] = a1 & 0xEFFFFFFF;
  v30 = a6;
  v33 = v23;
  v32 = a2;
  if ( a4 )
    memmove(v34, a4, 8LL * a2);
  v29 = MEMORY[0xFFFFF78000000014];
  v24 = LpcRequestWaitReplyPortEx((int)v18, (int)v28, (__int64)v28);
  if ( v19 == 1 )
    ObfDereferenceObject(v18);
  if ( v24 >= 0 )
  {
    v25 = v31;
    if ( v31 > 0xA )
      v25 = 0;
    *a7 = v25;
  }
  return (unsigned int)v24;
}
