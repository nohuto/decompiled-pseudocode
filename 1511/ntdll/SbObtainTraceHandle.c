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
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rbp
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0LL;
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
        if ( !(unsigned int)EtwEventRegister((int)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (__int64)&v11) )
        {
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, v11, 0LL);
          if ( v8 )
          {
            EtwNotificationUnregister(v11, 0LL, v6, v7);
            if ( a1 )
              *a1 = v8;
          }
          else
          {
            if ( a1 )
              *a1 = v11;
            ProcessParameters = NtCurrentPeb()->ProcessParameters;
            SbpTraceContextUpdate(
              v11,
              (_DWORD)v4 + 48,
              0,
              ProcessParameters->ImagePathName.Length,
              (__int64)ProcessParameters->ImagePathName.Buffer);
          }
          return 1;
        }
      }
    }
  }
  return v1;
}
