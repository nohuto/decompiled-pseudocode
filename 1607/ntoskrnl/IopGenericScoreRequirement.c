/*
 * XREFs of IopGenericScoreRequirement @ 0x14055976C
 * Callers:
 *     <none>
 * Callees:
 *     RtlIoDecodeMemIoResource @ 0x14013DA78 (RtlIoDecodeMemIoResource.c)
 */

signed __int64 __fastcall IopGenericScoreRequirement(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  ULONGLONG v1; // rax
  unsigned __int64 v2; // r9
  signed __int64 result; // rax
  unsigned __int64 Alignment; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+48h] [rbp+20h] BYREF

  v1 = RtlIoDecodeMemIoResource(a1, &Alignment, &MinimumAddress, &MaximumAddress);
  v2 = Alignment;
  if ( !Alignment )
    v2 = 1LL;
  result = (MaximumAddress - (~(v2 - 1) & (v2 + MinimumAddress - 1)) - v1 + 1) / v2 + 1;
  if ( result < 0 )
    return 0xFFFFFFFFLL;
  if ( result > 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
