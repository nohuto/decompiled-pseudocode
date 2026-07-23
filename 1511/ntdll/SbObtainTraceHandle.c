/*
 * XREFs of SbObtainTraceHandle @ 0x18007E850
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 *     SbpTraceContextUpdate @ 0x1800F5AA0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(_QWORD *a1)
{
  unsigned int v1; // ebx
  char *pShimData; // rsi
  char *v4; // rsi
  __int64 v5; // rax
  signed __int64 v6; // rbp
  ULONGLONG RegHandle; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  RegHandle = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = pShimData + 2016;
    if ( !v4 || !*((_DWORD *)v4 + 12) )
      v4 = 0LL;
    if ( v4 )
    {
      if ( a1 )
        *a1 = 0LL;
      if ( *((_DWORD *)v4 + 3) )
      {
        v5 = *((_QWORD *)v4 + 2);
        if ( v5 )
        {
          if ( a1 )
            *a1 = v5;
          return 1;
        }
        if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
        {
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, RegHandle, 0LL);
          if ( v6 )
          {
            EtwNotificationUnregister(RegHandle, 0LL);
            if ( a1 )
              *a1 = v6;
          }
          else
          {
            if ( a1 )
              *a1 = RegHandle;
            SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
          }
          return 1;
        }
      }
    }
  }
  return v1;
}
