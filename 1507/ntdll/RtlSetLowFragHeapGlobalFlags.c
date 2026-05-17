/*
 * XREFs of RtlSetLowFragHeapGlobalFlags @ 0x1800EA378
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800EA410 (RtlpHpApplySegmentHeapConfigurations.c)
 */

unsigned __int8 __fastcall RtlSetLowFragHeapGlobalFlags(__int16 a1, int a2)
{
  int v4; // r8d
  unsigned __int8 result; // al

  RtlpHpApplySegmentHeapConfigurations();
  v4 = RtlpLowFragHeapGlobalFlags;
  if ( (a1 & 8) != 0 )
  {
    v4 = RtlpLowFragHeapGlobalFlags | 0x10;
    RtlpLowFragHeapGlobalFlags |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v4 |= 8u;
    RtlpLowFragHeapGlobalFlags = v4;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v4 |= 2u;
    RtlpLowFragHeapGlobalFlags = v4;
  }
  result = (a1 & 1) == 0;
  if ( (((v4 & 2) == 0) & result) == 0 )
    RtlpLowFragHeapGlobalFlags = v4 | 4;
  if ( (a1 & 0xFF00) != 0 )
  {
    result = HIBYTE(a1);
    RtlpHpLfhContentionLimit = HIBYTE(a1);
  }
  return result;
}
