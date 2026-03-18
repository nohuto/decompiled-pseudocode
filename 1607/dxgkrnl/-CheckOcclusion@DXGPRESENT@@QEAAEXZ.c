/*
 * XREFs of ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0170AB0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00A3AC4 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXGPRESENT::CheckOcclusion(DXGPRESENT *this)
{
  DXGGLOBAL *Global; // rax
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v4.left = *((_DWORD *)this + 10) + *((_DWORD *)this + 6);
  v4.right = *((_DWORD *)this + 10) + *((_DWORD *)this + 8);
  v4.top = *((_DWORD *)this + 11) + *((_DWORD *)this + 7);
  v4.bottom = *((_DWORD *)this + 11) + *((_DWORD *)this + 9);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  if ( DXGGLOBAL::IsWindowVisible(Global, &v4) )
    return 0;
  *((_DWORD *)this + 1) |= 3u;
  return 1;
}
