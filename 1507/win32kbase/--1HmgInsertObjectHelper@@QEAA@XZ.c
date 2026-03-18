/*
 * XREFs of ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C000C720 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00402CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C007BC6C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgInsertObjectHelper::~HmgInsertObjectHelper(_QWORD *this)
{
  __int64 v1; // rax

  v1 = this[4];
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
  PopThreadGuardedObject(this);
}
