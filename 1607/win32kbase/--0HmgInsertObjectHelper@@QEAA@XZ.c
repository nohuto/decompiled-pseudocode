/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98
 * Callers:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002E7B8 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005BB90 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005CFA8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  memset(this, 0, 0x20uLL);
  PushThreadGuardedObject(
    this,
    (__int64)this,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
