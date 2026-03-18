/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002B85C
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002DEF0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801124E4 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18002B674 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x18002B7D0 (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  int v6; // eax
  int v7; // ebx
  char v8; // si
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  struct CCompositionSurfaceInfo *v10; // rdi
  int v11; // eax
  _LUID v13; // [rsp+70h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v14; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = ValidateCompositionSurfaceHandle(a2, &v13);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x19u);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x43u);
    return (unsigned int)v7;
  }
  v8 = 1;
  CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(this, v13);
  v14 = CompositionSurfaceInfoByLuid;
  v10 = CompositionSurfaceInfoByLuid;
  if ( CompositionSurfaceInfoByLuid )
  {
    CBitmapOfDeviceBitmaps::AddRef(CompositionSurfaceInfoByLuid);
  }
  else
  {
    v11 = CCompositionSurfaceInfo::Create(a2, v13, this, &v14);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x57u);
      goto LABEL_10;
    }
    v10 = v14;
    v8 = 0;
  }
  *a3 = v10;
  if ( v8 )
LABEL_10:
    CloseHandle(a2);
  return (unsigned int)v7;
}
