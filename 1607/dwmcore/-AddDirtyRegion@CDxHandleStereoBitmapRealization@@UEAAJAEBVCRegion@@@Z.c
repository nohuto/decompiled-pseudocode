/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180190090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800902E0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct CRegion *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CBitmapRealization::AddDirtyRegion(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x77u);
  }
  else if ( *((_QWORD *)this + 54) )
  {
    (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this + 57) + 40LL))((char *)this + 456, a2);
  }
  return v5;
}
