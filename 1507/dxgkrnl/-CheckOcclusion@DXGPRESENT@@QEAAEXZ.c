/*
 * XREFs of ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0147990
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00B738C (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall DXGPRESENT::CheckOcclusion(DXGPRESENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  v7.left = *((_DWORD *)this + 10) + *((_DWORD *)this + 6);
  v7.right = *((_DWORD *)this + 10) + *((_DWORD *)this + 8);
  v7.top = *((_DWORD *)this + 11) + *((_DWORD *)this + 7);
  v7.bottom = *((_DWORD *)this + 11) + *((_DWORD *)this + 9);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (unsigned int)v7.bottom, a3, a4);
  if ( DXGGLOBAL::IsWindowVisible(Global, &v7) )
    return 0;
  *((_DWORD *)this + 1) |= 3u;
  return 1;
}
