/*
 * XREFs of ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0009824
 * Callers:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0009A9C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckRect2(struct tagSPB *a1, struct tagWND *a2, struct tagRECT *a3, unsigned int a4)
{
  bool v4; // zf
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 1) == 0LL;
  v7 = *a3;
  if ( !v4
    && (!(unsigned int)FBitsTouch(a2, &v7, a1, a4)
     || (*((_QWORD *)a1 + 5) || (unsigned int)SetOrCreateRectRgnIndirectPublic((char *)a1 + 40, (char *)a1 + 24))
     && (unsigned int)SetRectRgnIndirect(ghrgnSCR, &v7)
     && (unsigned int)GreCombineRgn(
                        *((_QWORD *)a1 + 5),
                        *((_QWORD *)a1 + 5),
                        ghrgnSCR,
                        4LL,
                        *(_QWORD *)&v7.left,
                        *(_QWORD *)&v7.right) > 1) )
  {
    return 1LL;
  }
  FreeSpb(a1);
  return 0LL;
}
