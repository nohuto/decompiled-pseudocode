/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14063C808
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x14063A668 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp-30h] BYREF
  int v2; // [rsp+38h] [rbp-28h]
  _QWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  PopAcquirePolicyLock();
  PopTraceSystemIdleS0LowPowerDoze();
  memset(v3, 0, 24);
  if ( dword_1402DEB08 == 2 )
  {
    LODWORD(v3[0]) = 11;
    if ( qword_1402DE0D8
      && MEMORY[0xFFFFF78000000008] - qword_1402DE0D8 > 10000000
                                                      * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
    {
      LODWORD(v3[0]) = 12;
    }
  }
  else
  {
    LODWORD(v3[0]) = 6;
  }
  HIDWORD(v3[0]) = 128;
  v2 = 0;
  v1 = 0x8000000400000003uLL;
  PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
  result = PopReleasePolicyLock();
  _InterlockedAnd(&dword_1402DEB0C, 0);
  return result;
}
