/*
 * XREFs of SmInitSystem @ 0x14076A984
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     SmQueryRegistry @ 0x14076A9E4 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x14076AA64 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140305328) >= 0 )
    {
      dword_140305330 |= 1u;
      dword_140305334 = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
