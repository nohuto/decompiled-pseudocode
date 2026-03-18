/*
 * XREFs of ExpRaiseHardError @ 0x1406735D8
 * Callers:
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x14067392C (NtRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x14015CEC0 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PsCaptureExceptionPort @ 0x1403F1E5C (PsCaptureExceptionPort.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     LpcRequestWaitReplyPortEx @ 0x1404AAB5C (LpcRequestWaitReplyPortEx.c)
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
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  char v12; // dl
  _KPROCESS *Process; // r10
  int v14; // r11d
  _KPROCESS *v15; // rdi
  char v16; // si
  _BYTE *Teb; // rcx
  char v18; // al
  int v19; // ecx
  unsigned int v20; // r13d
  int v21; // r14d
  unsigned int v22; // ecx
  _DWORD v25[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-2C8h]
  int v27; // [rsp+B8h] [rbp-2C0h]
  unsigned int v28; // [rsp+BCh] [rbp-2BCh]
  unsigned int v29; // [rsp+C0h] [rbp-2B8h]
  unsigned int v30; // [rsp+C4h] [rbp-2B4h]
  char v31[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v12 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 8) = 2;
    v12 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x10;
  if ( !v14 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 8) || v12) )
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
  v15 = 0LL;
  v16 = 0;
  if ( !v14 && ((Process[1].ThreadSeed[2] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v15 = (_KPROCESS *)PsCaptureExceptionPort((__int64)Process);
    if ( v15 )
      v16 = 1;
    else
      v15 = CurrentServerSiloGlobals[6];
  }
  if ( v15
    && ((KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
      ? (Teb = 0LL)
      : (Teb = KeGetCurrentThread()->Teb),
        Teb) )
  {
    v18 = Teb[5808];
    v19 = 0;
    if ( (v18 & 0x10) != 0 )
      v19 = -1073741823;
    v20 = a3;
    if ( v19 < 0 )
    {
      if ( v16 == 1 )
        ObfDereferenceObject(v15);
      v15 = 0LL;
    }
  }
  else
  {
    v20 = a3;
  }
  if ( !v15 )
    goto LABEL_18;
  v25[0] = 7340104;
  v25[1] = 9;
  v25[10] = a1 & 0xEFFFFFFF;
  v27 = a6;
  v30 = v20;
  v29 = a2;
  if ( a4 )
    memmove(v31, a4, 8LL * a2);
  v26 = MEMORY[0xFFFFF78000000014];
  v21 = LpcRequestWaitReplyPortEx((int)v15, (int)v25, (__int64)v25);
  if ( v16 == 1 )
    ObfDereferenceObject(v15);
  if ( v21 >= 0 )
  {
    v22 = v28;
    if ( v28 > 0xA )
      v22 = 0;
    *a7 = v22;
  }
  return (unsigned int)v21;
}
