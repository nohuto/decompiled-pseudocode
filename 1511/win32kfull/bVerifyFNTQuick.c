/*
 * XREFs of bVerifyFNTQuick @ 0x1C0122F94
 * Callers:
 *     bBmfdLoadFont @ 0x1C011F62C (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C01509F8 (bLoadNtFon.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bVerifyFNTQuick(__int64 *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = *((_DWORD *)a1 + 3);
  v2 = *a1;
  return v1 >= 0x76 && (*(_BYTE *)(v2 + 66) & 1) == 0 && (*(_WORD *)v2 == 512 || *(_WORD *)v2 == 768 && v1 >= 0x94);
}
