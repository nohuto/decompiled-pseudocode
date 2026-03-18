/*
 * XREFs of ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x18018F8F0
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F6C8 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F7C4 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18001D254 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180173520 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180178D20 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CRegion *a2,
        char a3)
{
  CMILPoolResource *v3; // rdi
  struct _LUID v5; // r8
  int D3DDevice; // eax
  _QWORD **v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CD3DTexture *v14; // r14
  struct CD3DTexture *v15; // r12
  LONG v16; // r9d
  FastRegion::Internal::CRgnData *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-60h]
  struct IDXGIResource *v20; // [rsp+30h] [rbp-50h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-28h]
  LONG *v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  struct tagPOINT v28; // [rsp+C0h] [rbp+40h] BYREF
  struct CD3DTexture *v29; // [rsp+D8h] [rbp+58h] BYREF

  *(_QWORD *)&v22.left = 0LL;
  v3 = 0LL;
  v5 = (struct _LUID)*((_QWORD *)this + 33);
  v29 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                v5,
                (struct CD3DDeviceLevel1 **)&v22);
  v9 = *(_QWORD ***)&v22.left;
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 453;
    goto LABEL_20;
  }
  D3DDevice = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 52), &v20);
  v10 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v19 = 456;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, v19);
    goto LABEL_21;
  }
  v11 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Texture2D **))v20->lpVtbl->QueryInterface)(
          v20,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v21);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1C9u);
    goto LABEL_21;
  }
  v12 = CD3DVidMemOnlyTexture::CreateFromTexture(
          v21,
          0,
          0,
          0,
          (struct CD3DDeviceLevel1 *)v9,
          (struct CD3DVidMemOnlyTexture **)&v28);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1D0u);
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 55) + 192LL))(
          *((_QWORD *)this + 55),
          &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1D2u);
LABEL_16:
    v3 = (CMILPoolResource *)v28;
    goto LABEL_21;
  }
  v3 = (CMILPoolResource *)v28;
  if ( a3 )
  {
    v14 = v29;
    v15 = (struct CD3DTexture *)v28;
  }
  else
  {
    v15 = v29;
    v14 = (struct CD3DTexture *)v28;
  }
  FastRegion::CRegion::BeginIterator((_DWORD **)a2, (__int64)v23);
  while ( (unsigned __int64)v25 < v24 )
  {
    v16 = *v25;
    v22.bottom = v25[2];
    v22.top = v16;
    v28.y = v16;
    v22.left = *(_DWORD *)(v26 + 8LL * v27);
    v28.x = v22.left;
    v22.right = *(_DWORD *)(v26 + 4LL * (2 * v27 + 1));
    CD3DDeviceLevel1::CopyTextureRect((CD3DDeviceLevel1 *)v9, v14, &v22, v15, &v28);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v23);
  }
  if ( a3 )
    (*(void (__fastcall **)(_QWORD *))(*v9[72] + 888LL))(v9[72]);
LABEL_21:
  if ( v9 )
    CMILPoolResource::Release((CMILPoolResource *)(v9 + 51));
  if ( v3 )
    CMILPoolResource::Release(v3);
  if ( v29 )
    (*(void (__fastcall **)(struct CD3DTexture *))(*(_QWORD *)v29 + 8LL))(v29);
  if ( v20 )
    ((void (__fastcall *)(struct IDXGIResource *))v20->lpVtbl->Release)(v20);
  if ( v21 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v21->lpVtbl->Release)(v21);
  return v10;
}
