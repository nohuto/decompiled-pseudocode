/*
 * XREFs of CalcManipulationInputInfoSize @ 0x1C01FB798
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     BuildManipulationInputInfo @ 0x1C01FB6A8 (BuildManipulationInputInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcManipulationInputInfoSize(int a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  v1 = 144LL * (unsigned int)(a1 - 1);
  if ( v1 > 0xFFFFFFFF )
    return 0LL;
  result = (unsigned int)(v1 + 152);
  if ( (unsigned int)result < 0x98 )
    return 0LL;
  return result;
}
