/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180090650
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180055080 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18018ECE0 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180191400 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::UpdateAttributes(struct _LUID *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  unsigned int v2; // eax
  int v3; // edx
  bool v4; // zf
  struct _LUID v5; // rdx

  v2 = (unsigned int)this[30].HighPart >> 8;
  *(_OWORD *)&this[16].LowPart = *(_OWORD *)a2;
  *(_OWORD *)&this[18].LowPart = *((_OWORD *)a2 + 1);
  *(_OWORD *)&this[20].LowPart = *((_OWORD *)a2 + 2);
  *(_OWORD *)&this[22].LowPart = *((_OWORD *)a2 + 3);
  *(_OWORD *)&this[24].LowPart = *((_OWORD *)a2 + 4);
  *(_OWORD *)&this[26].LowPart = *((_OWORD *)a2 + 5);
  *(_OWORD *)&this[28].LowPart = *((_OWORD *)a2 + 6);
  this[30] = *(struct _LUID *)((char *)a2 + 112);
  v3 = ((unsigned int)this[30].HighPart >> 8) & 1;
  if ( (v2 & 1) != (v3 != 0) )
  {
    v4 = v3 == 0;
    v5 = this[33];
    if ( v4 )
      CD3DDeviceManager::RemoveHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v5);
    else
      CD3DDeviceManager::AddHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v5);
  }
}
