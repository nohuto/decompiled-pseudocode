/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x180051798
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x18005172C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 */

unsigned __int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  if ( (*(_BYTE *)(result + 24) & 0x21) != 0 )
  {
    v4 = (result & 0xFFFFFFFFFFF00000uLL)
       + ((unsigned int)((__int64)(result - (result & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( (*(_BYTE *)(result + 24) & 1) != 0 )
    {
      result = (unsigned __int16)RtlpLFHKey;
      v5 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v4 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v4 >> 12);
    }
    else
    {
      result = WORD1(RtlpLFHKey);
      v5 = 16 * (WORD1(RtlpLFHKey) ^ ((unsigned int)(a2 - 16) >> 16) ^ *(unsigned __int16 *)(a2 - 16 + 2)) - 16;
    }
    *(_WORD *)(v5 + a2 - 2) |= 0x4000u;
  }
  else
  {
    *(_WORD *)(result + 4) |= 1u;
  }
  return result;
}
