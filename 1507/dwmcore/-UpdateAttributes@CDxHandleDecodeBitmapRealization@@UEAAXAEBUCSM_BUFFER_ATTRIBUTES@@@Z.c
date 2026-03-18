/*
 * XREFs of ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180152A00
 * Callers:
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180150180 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180046928 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180046A90 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x18005DA74 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x1801528A4 (-InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::UpdateAttributes(
        CDxHandleDecodeBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char updated; // si
  int v4; // edx

  updated = 0;
  v4 = *((_DWORD *)a2 + 4);
  if ( (v4 == *((_DWORD *)this + 36) && *((_QWORD *)a2 + 1) == *((_QWORD *)this + 17)
     || (updated = CBitmapRealization::UpdateDisplayRestriction(this, v4, *((HMONITOR *)a2 + 1))) == 0)
    && (*((_DWORD *)a2 + 14) != *((_DWORD *)this + 46)
     || operator!=((_DWORD *)a2 + 17, (_DWORD *)this + 49)
     || *((_DWORD *)a2 + 21) != *((_DWORD *)this + 53)
     || *((_DWORD *)a2 + 22) != *((_DWORD *)this + 54)
     || operator!=((_DWORD *)a2 + 23, (_DWORD *)this + 55)) )
  {
    updated = 1;
  }
  CBitmapRealization::UpdateAttributes(this, a2);
  if ( updated )
    CDxHandleDecodeBitmapRealization::InvalidateDecodeBitmap(this, 0);
}
