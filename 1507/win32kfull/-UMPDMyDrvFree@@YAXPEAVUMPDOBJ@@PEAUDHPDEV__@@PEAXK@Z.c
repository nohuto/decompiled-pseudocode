/*
 * XREFs of ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A1F38
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C029F8A0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C029FC50 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall UMPDMyDrvFree(struct UMPDOBJ *this, struct DHPDEV__ *a2, void *a3, int a4)
{
  __int64 v8; // rax
  size_t v9; // [rsp+20h] [rbp-78h]
  _QWORD Src[6]; // [rsp+30h] [rbp-68h] BYREF

  memset(Src, 0, sizeof(Src));
  v8 = *(_QWORD *)this;
  LODWORD(v9) = 0;
  Src[0] = 0x2A00000030LL;
  Src[2] = v8;
  Src[3] = a2;
  Src[4] = a3;
  LODWORD(Src[5]) = a4;
  UMPDOBJ::Thunk(this, Src, 0x30u, 0LL, v9);
}
