/*
 * XREFs of HvpViewMapAddressForFileOffset @ 0x140581D34
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapAddressForFileOffset(__int64 a1, unsigned int a2)
{
  return (a2 & 0x3FFFF)
       + (*(_QWORD *)(32 * (((unsigned __int64)a2 >> 18) & 0x3F)
                    + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F))) & 0xFFFFFFFFFFFFFFFEuLL);
}
