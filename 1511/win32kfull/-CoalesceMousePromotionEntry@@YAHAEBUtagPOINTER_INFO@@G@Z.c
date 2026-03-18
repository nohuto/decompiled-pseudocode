/*
 * XREFs of ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C0239EEC
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023AD48 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceMousePromotionEntry(const struct tagPOINTER_INFO *a1, char a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *v2; // r8
  unsigned int v3; // r9d
  int v4; // eax
  int v5; // eax

  v2 = qword_1C0323528;
  if ( !qword_1C0323528 )
    return 0LL;
  if ( *((_DWORD *)qword_1C0323528 + 5) != *((_DWORD *)a1 + 3) )
    return 0LL;
  v3 = *((_DWORD *)a1 + 2);
  if ( v3 <= *((_DWORD *)qword_1C0323528 + 8) || qword_1C0323608 != *((_QWORD *)a1 + 3) )
    return 0LL;
  *((_QWORD *)qword_1C0323528 + 1) = *((_QWORD *)a1 + 6);
  *((_DWORD *)v2 + 8) = v3;
  v4 = *((_DWORD *)v2 + 10);
  *((_DWORD *)v2 + 6) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v4 & 8) == 0 && (a2 & 4) != 0 )
    *((_DWORD *)v2 + 10) = v4 | 8;
  v5 = *((_DWORD *)v2 + 10);
  if ( (v5 & 0x10) == 0 && (a2 & 8) != 0 )
    *((_DWORD *)v2 + 10) = v5 | 0x10;
  return 1LL;
}
