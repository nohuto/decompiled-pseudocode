/*
 * XREFs of ?vFixedToEf@@YAXPEAVEFLOAT@@AEAU_FIXED@@@Z @ 0x1C02B3688
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C014F794 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFixedToEf(struct EFLOAT *a1, struct _FIXED *a2)
{
  *(float *)a1 = (float)*(_DWORD *)a2;
  if ( *(_DWORD *)a1 )
    *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (*(_DWORD *)a1 - 0x8000000)) & 0x7F800000;
}
