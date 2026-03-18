/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180046A90
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18001ED20 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18014DE50 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180152A00 (-UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::UpdateAttributes(CBitmapRealization *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  bool v2; // r9
  int v3; // edx

  v2 = *((_DWORD *)this + 65) != 0;
  *((_OWORD *)this + 8) = *(_OWORD *)a2;
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 11) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 12) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 13) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 14) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 15) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 16) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 17) = *((_OWORD *)a2 + 9);
  *((_QWORD *)this + 36) = *((_QWORD *)a2 + 20);
  v3 = *((_DWORD *)this + 65);
  if ( v2 != (v3 != 0) )
    CComposition::AdjustHwProtectedEntityCount(v3 != 0);
}
