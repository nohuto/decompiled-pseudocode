/*
 * XREFs of PopWnfAudioCallback @ 0x14052979C
 * Callers:
 *     <none>
 * Callees:
 *     PopGetCurrentHiberActionSource @ 0x14010EDF0 (PopGetCurrentHiberActionSource.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1404C4924 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140529878 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140675104 (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  int v6; // ebx
  BOOL v7; // ecx
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h] BYREF

  v9 = 8;
  v6 = ExQueryWnfStateData(a1, &v10, &v11, &v9);
  if ( v6 >= 0 )
  {
    if ( v9 < 8 )
      return 0;
    PopAcquirePolicyLock();
    if ( *a6 )
    {
      v7 = (v11 & 2) != 0;
      if ( (v11 & 2) == 0 )
      {
LABEL_5:
        *a6 = v7;
        if ( v7 )
        {
          if ( ++PopAudioPlaybackCount == 1 )
          {
            qword_1403288D8 = MEMORY[0xFFFFF78000000008];
            if ( (unsigned int)PopGetCurrentHiberActionSource() == 2 )
              PopUpdateSmartUserPresencePredictions(0LL, 5LL);
          }
        }
        else if ( !--PopAudioPlaybackCount )
        {
          PopAudioAccountingCallback(0LL);
        }
      }
    }
    else
    {
      v7 = (v11 & 2) != 0;
      if ( (v11 & 2) != 0 )
        goto LABEL_5;
    }
    PopReleasePolicyLock();
  }
  return (unsigned int)v6;
}
