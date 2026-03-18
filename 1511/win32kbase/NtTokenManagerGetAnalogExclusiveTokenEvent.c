/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00E1CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C00E225C (-GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  CTokenManager *v4; // rcx
  int AnalogExclusiveTokenEventInternal; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v3, v2) )
  {
    AnalogExclusiveTokenEventInternal = -1073741823;
    if ( g_pTokenManager )
      AnalogExclusiveTokenEventInternal = CTokenManager::GetAnalogExclusiveTokenEventInternal(v4, &Handle);
  }
  else
  {
    AnalogExclusiveTokenEventInternal = -1073741790;
  }
  if ( AnalogExclusiveTokenEventInternal < 0 )
    goto LABEL_13;
  if ( Handle == (HANDLE)-1LL )
  {
    AnalogExclusiveTokenEventInternal = -1073741811;
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = Handle;
  }
  if ( AnalogExclusiveTokenEventInternal < 0 )
  {
LABEL_13:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)AnalogExclusiveTokenEventInternal;
}
