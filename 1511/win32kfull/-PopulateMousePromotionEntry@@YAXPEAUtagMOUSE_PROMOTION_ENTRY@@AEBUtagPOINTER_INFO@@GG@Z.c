/*
 * XREFs of ?PopulateMousePromotionEntry@@YAXPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C023A4AC
 * Callers:
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C0239F7C (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopulateMousePromotionEntry(
        struct tagMOUSE_PROMOTION_ENTRY *a1,
        const struct tagPOINTER_INFO *a2,
        char a3,
        char a4)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax

  v4 = *((_QWORD *)a2 + 6);
  *((_DWORD *)a1 + 10) |= 1u;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = v4;
  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  *((_DWORD *)a1 + 5) = *((_DWORD *)a2 + 3);
  LODWORD(v4) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 7) = v4;
  *((_DWORD *)a1 + 8) = v4;
  v5 = *((_DWORD *)a1 + 10);
  *((_WORD *)a1 + 18) = a3 & 0x7F;
  if ( (a4 & 1) != 0 )
  {
    v6 = v5 | 2;
    *((_DWORD *)a1 + 10) = v6;
    if ( (a4 & 2) != 0 )
      *((_DWORD *)a1 + 10) = v6 | 4;
  }
  if ( (a4 & 4) != 0 )
    *((_DWORD *)a1 + 10) |= 8u;
  if ( (a4 & 8) != 0 )
    *((_DWORD *)a1 + 10) |= 0x10u;
  *((_DWORD *)a1 + 6) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
