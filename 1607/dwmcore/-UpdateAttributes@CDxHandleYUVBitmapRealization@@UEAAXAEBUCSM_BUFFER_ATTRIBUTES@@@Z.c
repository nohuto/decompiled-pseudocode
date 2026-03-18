/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180191400
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800234A4 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18009016C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180090650 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x18010EEB8 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        struct _LUID *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char updated; // si
  __int64 v4; // rdx

  updated = 0;
  v4 = *((_DWORD *)a2 + 29) & 1;
  if ( ((_DWORD)v4 == (this[30].HighPart & 1) && *((_QWORD *)a2 + 1) == *(_QWORD *)&this[17]
     || (updated = CBitmapRealization::UpdateDisplayRestriction((CBitmapRealization *)this, v4, *((HMONITOR *)a2 + 1))) == 0)
    && (*((_DWORD *)a2 + 16) != this[24].LowPart
     || operator!=((_DWORD *)a2 + 12, &this[22])
     || *((_DWORD *)a2 + 23) != this[27].HighPart
     || *((_DWORD *)a2 + 24) != this[28].LowPart
     || operator!=((_DWORD *)a2 + 25, &this[28].HighPart)) )
  {
    updated = 1;
  }
  CBitmapRealization::UpdateAttributes(this, a2);
  if ( updated )
    CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)this, 0);
}
