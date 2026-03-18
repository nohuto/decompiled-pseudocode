/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x18011DEA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180073A58 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessUpdateMonitorRotation(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *a3)
{
  __int64 *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  int *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v11) = *((_DWORD *)a3 + 2);
  v3 = (__int64 *)*((_QWORD *)this + 20);
  DWORD1(v11) = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 10);
  v5 = *v3;
  *((_QWORD *)&v11 + 1) = *((_QWORD *)a3 + 2);
  v12 = *(_OWORD *)((char *)a3 + 24);
  CHwndRenderTarget::SetTransformParameters(v5, v4, &v12, &v11);
  v8 = 0LL;
  if ( *(_DWORD *)(v6 + 184) )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 160) + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *(_BYTE *)(v9 + 761) = 1;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 184) );
    *(float *)(v6 + 372) = (float)v7[3];
    *(float *)(v6 + 380) = (float)v7[5];
    *(float *)(v6 + 368) = (float)v7[2];
    *(float *)(v6 + 376) = (float)v7[4];
  }
  return 0LL;
}
