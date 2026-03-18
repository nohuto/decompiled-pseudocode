/*
 * XREFs of ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18015DF58
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015D608 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DD38 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DE28 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18000D620 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x1800194EC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006E840 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x1801451F0 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CRegion *a2,
        char a3)
{
  CMILPoolResource *v3; // r14
  struct _LUID v5; // r8
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r15
  unsigned int v9; // esi
  int DXGIResource; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CD3DTexture *v14; // rbx
  struct CD3DTexture *v15; // rdi
  LONG v16; // r8d
  LONG v17; // edx
  FastRegion::Internal::CRgnData *v18; // rcx
  struct CD3DTexture *v20; // [rsp+30h] [rbp-39h] BYREF
  struct IDXGIResource *v21; // [rsp+38h] [rbp-31h] BYREF
  struct ID3D11Texture2D *v22; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v23; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-9h]
  LONG *v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+78h] [rbp+Fh]
  struct tagPOINT v29; // [rsp+D0h] [rbp+67h] BYREF
  _DWORD **v30; // [rsp+D8h] [rbp+6Fh]
  struct CD3DDeviceLevel1 *v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v30 = (_DWORD **)a2;
  v31 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v5 = (struct _LUID)*((_QWORD *)this + 39);
  v21 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                v5,
                &v31);
  v8 = v31;
  v9 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x1B8u);
    goto LABEL_22;
  }
  ++*((_DWORD *)v31 + 126);
  v31 = v8;
  *((_DWORD *)v8 + 127) = GetCurrentThreadId();
  DXGIResource = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 57), &v21);
  v9 = DXGIResource;
  if ( DXGIResource >= 0 )
  {
    v11 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Texture2D **))v21->lpVtbl->QueryInterface)(
            v21,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v22);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = CD3DVidMemOnlyTexture::CreateFromTexture(v22, 0, 0, v8, (struct CD3DVidMemOnlyTexture **)&v29);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 60) + 184LL))(
                *((_QWORD *)this + 60),
                &v20);
        v9 = v13;
        if ( v13 >= 0 )
        {
          v3 = (CMILPoolResource *)v29;
          if ( a3 )
          {
            v14 = v20;
            v15 = (struct CD3DTexture *)v29;
          }
          else
          {
            v15 = v20;
            v14 = (struct CD3DTexture *)v29;
          }
          FastRegion::CRegion::BeginIterator(v30, (__int64)v24);
          while ( (unsigned __int64)v26 < v25 )
          {
            v16 = *v26;
            v23.bottom = v26[2];
            v23.top = v16;
            v29.y = v16;
            v17 = *(_DWORD *)(v27 + 8LL * v28);
            v23.right = *(_DWORD *)(v27 + 8LL * v28 + 4);
            v23.left = v17;
            v29.x = v17;
            CD3DDeviceLevel1::CopyTextureRect(v8, v14, &v23, v15, &v29);
            FastRegion::Internal::CRgnData::StepIterator(v18, (struct FastRegion::CRegion::Iterator *)v24);
          }
          if ( a3 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 70) + 888LL))(*((_QWORD *)v8 + 70));
          goto LABEL_21;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1C6u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C4u);
      }
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v31);
      v3 = (CMILPoolResource *)v29;
      goto LABEL_22;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1BEu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x1BDu);
  }
LABEL_21:
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v31);
LABEL_22:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 384));
  if ( v3 )
    CMILPoolResource::Release(v3);
  if ( v20 )
    (*(void (__fastcall **)(struct CD3DTexture *))(*(_QWORD *)v20 + 8LL))(v20);
  if ( v21 )
    ((void (__fastcall *)(struct IDXGIResource *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v22->lpVtbl->Release)(v22);
  return v9;
}
