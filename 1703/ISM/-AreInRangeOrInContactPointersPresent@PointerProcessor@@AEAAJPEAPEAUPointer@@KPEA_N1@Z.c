/*
 * XREFs of ?AreInRangeOrInContactPointersPresent@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEA_N1@Z @ 0x18005E7FC
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall PointerProcessor::AreInRangeOrInContactPointersPresent(
        PointerProcessor *this,
        struct Pointer **a2,
        unsigned int a3,
        bool *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  bool v7; // r11
  bool v8; // r10
  unsigned int i; // r8d

  v5 = 0;
  v7 = 0;
  v8 = 0;
  if ( a2 && ((this = (PointerProcessor *)a5, a4) || a5) )
  {
    for ( i = 0; i < a3; ++a2 )
    {
      if ( (*((_BYTE *)*a2 + 4) & 2) != 0 )
        v8 = 1;
      if ( (*((_BYTE *)*a2 + 4) & 1) != 0 )
        v7 = 1;
      if ( v7 && v8 )
        break;
      ++i;
    }
    if ( a4 )
      *a4 = v7;
    if ( a5 )
      *a5 = v8;
  }
  else
  {
    v5 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 669, 87);
  }
  return v5;
}
