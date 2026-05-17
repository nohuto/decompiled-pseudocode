/*
 * XREFs of SbObtainTraceHandle @ 0x180043F78
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180039340 (EtwEventRegister.c)
 *     SbpTraceContextUpdate @ 0x1800F61C0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(signed __int64 *a1)
{
  unsigned int v1; // ebx
  char *pShimData; // rsi
  char *v4; // rsi
  signed __int64 v6; // rax
  signed __int64 v7; // rbp
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v9 = 0LL;
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
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 )
        {
          if ( a1 )
            *a1 = v6;
        }
        else
        {
          if ( (unsigned int)EtwEventRegister((__int64)&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v9) )
            return v1;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, v9, 0LL);
          if ( v7 )
          {
            EtwNotificationUnregister(v9, 0LL);
            if ( a1 )
              *a1 = v7;
          }
          else
          {
            if ( a1 )
              *a1 = v9;
            ProcessParameters = NtCurrentPeb()->ProcessParameters;
            SbpTraceContextUpdate(
              v9,
              (_DWORD)v4 + 48,
              0,
              ProcessParameters->ImagePathName.Length,
              (__int64)ProcessParameters->ImagePathName.Buffer);
          }
        }
        return 1;
      }
    }
  }
  return v1;
}
