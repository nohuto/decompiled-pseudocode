/*
 * XREFs of SmInitSystem @ 0x1407B62B8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     SmQueryRegistry @ 0x1407B6318 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x1407B6398 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_1403BF4B8) >= 0 )
    {
      dword_1403BF4C0 |= 1u;
      dword_1403BF4C4 = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
