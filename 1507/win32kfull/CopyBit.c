/*
 * XREFs of CopyBit @ 0x1C02D9554
 * Callers:
 *     sbit_GetBitmap @ 0x1C02DB5F4 (sbit_GetBitmap.c)
 * Callees:
 *     <none>
 */

char __fastcall CopyBit(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // r8
  __int64 v4; // rdx

  LOWORD(v1) = *((_WORD *)a1 + 8);
  if ( *((_WORD *)a1 + 14) == 1 )
  {
    v2 = (*((_WORD *)a1 + 10) >> 3) + v1 * *((_WORD *)a1 + 11);
    v1 = *a1;
    if ( (*(_BYTE *)(v2 + *a1) & byte_1C02EE1C0[2 * (*((_WORD *)a1 + 10) & 7)]) != 0 )
    {
      v3 = *((_WORD *)a1 + 12);
      LOBYTE(v1) = byte_1C02EE1C0[2 * (v3 & 7)];
      v4 = (unsigned __int16)((v3 >> 3) + *((_WORD *)a1 + 9) * *((_WORD *)a1 + 13));
      *(_BYTE *)(a1[1] + v4) |= v1;
    }
  }
  else
  {
    LOBYTE(v1) = *(_BYTE *)((unsigned __int16)(*((_WORD *)a1 + 10) + v1 * *((_WORD *)a1 + 11)) + *a1);
    *(_BYTE *)((unsigned __int16)(*((_WORD *)a1 + 12) + *((_WORD *)a1 + 9) * *((_WORD *)a1 + 13)) + a1[1]) = v1;
  }
  return v1;
}
