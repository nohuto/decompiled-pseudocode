/*
 * XREFs of HvpViewMapIsRangePinned @ 0x1401B6708
 * Callers:
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpViewMapIsRangePinned(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  char v4; // r10
  unsigned int v5; // r11d
  unsigned __int64 v6; // rdx

  v2 = a2 & 0xFFFFF000;
  v3 = (a2 - (a2 & 0xFFFFF000) + 4099) & 0xFFFFF000;
  if ( !v3 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = 0x40000 - (v2 & 0x3FFFF);
    if ( v5 > v3 )
      v5 = v3;
    v6 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v5 >> 12)) << ((v2 >> 12) & 0x3F);
    if ( (v6 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * (((unsigned __int64)(v2 & 0xFFFC0000) >> 24) & 0x7F))
                         + 32LL * (((v2 & 0xFFFC0000) >> 18) & 0x3F)
                         + 16)) != v6 )
      break;
    v2 += v5;
    v3 -= v5;
    if ( !v3 )
      return 1;
  }
  return v4;
}
