/*
 * XREFs of ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18015FF30
 * Callers:
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18015EC50 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x18005DCD8 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18008322C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180083800 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x18015FDD4 (-InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z.c)
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
