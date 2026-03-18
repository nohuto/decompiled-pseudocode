/*
 * XREFs of SmInitSystem @ 0x1407DEB40
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     SmQueryRegistry @ 0x1407DEBA0 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x1407DEC20 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140353088) >= 0 )
    {
      dword_140353090 |= 1u;
      dword_140353094 = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(SmGlobals);
    SmQueryRegistry(SmGlobals);
  }
  return 0LL;
}
