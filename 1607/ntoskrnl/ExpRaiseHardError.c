/*
 * XREFs of ExpRaiseHardError @ 0x1406B6484
 * Callers:
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x1406B67E4 (NtRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x1401688A0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x14049C3B4 (LpcRequestWaitReplyPortEx.c)
 *     PsCaptureExceptionPort @ 0x1404EC620 (PsCaptureExceptionPort.c)
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
  __int64 v9; // r8
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v12; // edx
  char v14; // dl
  _KPROCESS *Process; // r10
  int v16; // r11d
  _KPROCESS *v17; // rdi
  char v18; // si
  _BYTE *Teb; // rcx
  int v20; // eax
  unsigned int v21; // r13d
  int v22; // r14d
  unsigned int v23; // ecx
  _DWORD v26[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-2C8h]
  int v28; // [rsp+B8h] [rbp-2C0h]
  unsigned int v29; // [rsp+BCh] [rbp-2BCh]
  unsigned int v30; // [rsp+C0h] [rbp-2B8h]
  unsigned int v31; // [rsp+C4h] [rbp-2B4h]
  char v32[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( v12 > 0x4D )
    return 3221225485LL;
  v14 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 220) = 2;
    v14 = 1;
    v9 = a3;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v16 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 220) || v14) )
  {
    ExpSystemErrorHandler(a1, a2, v9, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[108] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, v9, a5, PreviousMode != 0);
LABEL_18:
    *a7 = 0;
    return 0LL;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !v16 && ((Process[1].ThreadSeed[2] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v17 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v17 )
      v18 = 1;
    else
      v17 = CurrentServerSiloGlobals[109];
  }
  if ( v17
    && ((KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
      ? (Teb = 0LL)
      : (Teb = KeGetCurrentThread()->Teb),
        Teb) )
  {
    v20 = 0;
    if ( (Teb[5808] & 0x10) != 0 )
      v20 = -1073741823;
    v21 = a3;
    if ( v20 < 0 )
    {
      if ( v18 == 1 )
        ObfDereferenceObject(v17);
      v17 = 0LL;
    }
  }
  else
  {
    v21 = a3;
  }
  if ( !v17 )
    goto LABEL_18;
  v26[0] = 7340104;
  v26[1] = 9;
  v26[10] = a1 & 0xEFFFFFFF;
  v28 = a6;
  v31 = v21;
  v30 = a2;
  if ( a4 )
    memmove(v32, a4, 8LL * a2);
  v27 = MEMORY[0xFFFFF78000000014];
  v22 = LpcRequestWaitReplyPortEx((int)v17, (int)v26, (__int64)v26);
  if ( v18 == 1 )
    ObfDereferenceObject(v17);
  if ( v22 >= 0 )
  {
    v23 = v29;
    if ( v29 > 0xA )
      v23 = 0;
    *a7 = v23;
  }
  return (unsigned int)v22;
}
