/*
 * XREFs of PopSystemRequiredCallback @ 0x140503728
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredPowerRequest @ 0x140009728 (PopSystemRequiredPowerRequest.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 *     PopExecutionRequiredPowerRequest @ 0x1405039D8 (PopExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopSystemRequiredCallback(char a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]

  PopSystemRequiredPowerRequest(a1, 1);
  LOBYTE(v4) = 1;
  PopAcquirePowerRequestPushLock(v4);
  if ( byte_140303EB4 )
  {
    if ( PopPowerRequestConvertSystemToExecution )
    {
      v9 = a2;
      v5 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
      if ( v5 )
      {
        v6 = *v5;
        if ( **(_DWORD **)(*v5 + 80) )
        {
          if ( !a1 )
          {
            --*(_DWORD *)(v6 + 108);
LABEL_9:
            LOBYTE(v6) = a1;
            PopExecutionRequiredPowerRequest(v6, a2);
            goto LABEL_10;
          }
          ++*(_DWORD *)(v6 + 108);
          if ( !PopPowerRequestSyncedPowerSource )
            goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  PopReleaseRwLock(&PopPowerRequestLock);
  return 0LL;
}
