/*
 * XREFs of PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8
 * Callers:
 *     PopExecutionRequiredPowerRequest @ 0x1404CFC94 (PopExecutionRequiredPowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopDisablePowerExecutionRequest @ 0x140455D84 (PopDisablePowerExecutionRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopEnablePowerExecutionRequest @ 0x1404CFD58 (PopEnablePowerExecutionRequest.c)
 */

__int64 __fastcall PopAoacExecutionRequiredPowerRequest(char a1, int a2)
{
  int v4; // edi
  int v5; // ebp
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v4 = 0;
  PopAcquirePowerRequestPushLock(1);
  v5 = dword_1402C7300;
  v11 = a2;
  v6 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v6 )
  {
    v7 = *v6;
    if ( a1 )
      PopEnablePowerExecutionRequest(v7);
    else
      PopDisablePowerExecutionRequest(v7, 1);
  }
  v8 = 259;
  if ( !a1 )
  {
    if ( !v5 )
      v4 = 259;
    v8 = v4;
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
  return v8;
}
