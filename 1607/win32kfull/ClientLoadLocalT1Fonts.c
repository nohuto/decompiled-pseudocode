/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x1C00EB344
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EADD0 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientLoadLocalT1Fonts(__int64 a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(77LL);
  KeUserModeCallback(77LL, 0LL, 0LL, &v3, &v2);
  EtwTraceEndCallback(77LL);
  return EnterCrit(0LL, 1LL);
}
