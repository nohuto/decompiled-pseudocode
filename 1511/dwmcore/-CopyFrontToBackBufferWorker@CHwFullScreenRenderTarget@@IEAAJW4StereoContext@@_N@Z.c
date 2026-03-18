/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18014F3D8
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x180074520 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z @ 0x18014EA70 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180022F4C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180070ED0 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(__int64 a1, unsigned int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // r15d
  struct _RGNDATA *v5; // rsi
  struct _RGNDATA *v6; // r14
  __int64 v9; // rcx
  unsigned int *v10; // r8
  HRGN v11; // rcx
  int v12; // r12d
  int v13; // r13d
  int v14; // eax
  unsigned int x; // r14d
  char *Buffer; // r15
  struct CD3DSurface *v17; // r9
  CD3DDeviceLevel1 *v18; // rcx
  struct tagPOINT *v19; // rbx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // esi
  char *v24; // r15
  struct CD3DSurface *v25; // r9
  CD3DDeviceLevel1 *v26; // rcx
  struct tagPOINT *v27; // rbx
  struct _RTL_GENERIC_TABLE *v28; // rcx
  int v30; // [rsp+30h] [rbp-20h]
  int v31; // [rsp+34h] [rbp-1Ch]
  CMILPoolResource *v32; // [rsp+38h] [rbp-18h] BYREF
  struct _RGNDATA *v33; // [rsp+40h] [rbp-10h] BYREF
  struct _RGNDATA *v34; // [rsp+48h] [rbp-8h] BYREF
  int v35; // [rsp+90h] [rbp+40h]
  int v36; // [rsp+90h] [rbp+40h]
  char v37; // [rsp+A0h] [rbp+50h]
  struct tagPOINT v38; // [rsp+A8h] [rbp+58h] BYREF

  v37 = a3;
  v3 = *(_DWORD *)(a1 + 312);
  v4 = 0;
  v32 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (v3 & 0x408) == 0x408 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1)
      || *(_DWORD *)(a1 + 256) <= 1u
      || !*(_QWORD *)(a1 + 336) && !*(_QWORD *)(a1 + 344) )
    {
      goto LABEL_30;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, CMILPoolResource **))(*(_QWORD *)a1 + 216LL))(a1, a2, 0LL, &v32);
    if ( g_LockAndReadCopyOfSwapChainBuffers )
      CD3DDeviceLevel1::ReadTexture(*(CD3DDeviceLevel1 **)(a1 + 160), *((struct ID3D11Texture2D **)v32 + 17));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      TemplateEventDescriptor(v9, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
    v11 = *(HRGN *)(a1 + 336);
    v12 = 0;
    v13 = 0;
    if ( v11 )
    {
      v14 = HrgnToRgnData(v11, &v34, v10);
      v35 = v14;
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x37Du);
        v5 = v34;
LABEL_30:
        a3 = v37;
        goto LABEL_31;
      }
      v5 = v34;
      v38.x = 0;
      if ( v34->rdh.nCount )
      {
        x = v38.x;
        Buffer = v34->Buffer;
        do
        {
          v17 = *(struct CD3DSurface **)(a1 + 168);
          v18 = *(CD3DDeviceLevel1 **)(a1 + 160);
          v19 = (struct tagPOINT *)&Buffer[16 * x];
          v38 = *v19;
          CD3DDeviceLevel1::CopySurfaceRect(v18, v32, (const struct tagRECT *)v19, v17, &v38);
          ++v12;
          ++x;
          v13 += (v19[1].x - v19->x) * (v19[1].y - v19->y);
        }
        while ( x < v5->rdh.nCount );
        v6 = v33;
        v4 = v35;
      }
    }
    v20 = *(_QWORD *)(a1 + 344);
    if ( v20 )
    {
      v21 = v12;
      v31 = v13;
      v30 = v12;
      v22 = HrgnToRgnData((HRGN)v20, &v33, v10);
      v36 = v22;
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x39Fu);
        v6 = v33;
        goto LABEL_30;
      }
      v6 = v33;
      v38.x = 0;
      if ( v33->rdh.nCount )
      {
        v23 = v38.x;
        v24 = v33->Buffer;
        do
        {
          v25 = *(struct CD3DSurface **)(a1 + 168);
          v26 = *(CD3DDeviceLevel1 **)(a1 + 160);
          v27 = (struct tagPOINT *)&v24[16 * v23];
          v38 = *v27;
          CD3DDeviceLevel1::CopySurfaceRect(v26, v32, (const struct tagRECT *)v27, v25, &v38);
          ++v12;
          ++v23;
          v20 = (unsigned int)((v27[1].x - v27->x) * (v27[1].y - v27->y));
          v13 += v20;
        }
        while ( v23 < v6->rdh.nCount );
        v5 = v34;
        v4 = v36;
        v21 = v30;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v20, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT, v12 - v21, v13 - v31);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v20, &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop, v12, v13);
    if ( g_LockAndReadCopyOfSwapChainBuffers )
      CD3DDeviceLevel1::ReadTexture(
        *(CD3DDeviceLevel1 **)(a1 + 160),
        *(struct ID3D11Texture2D **)(*(_QWORD *)(a1 + 168) + 136LL));
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_BYTE *)(a1 + 329) )
  {
    v28 = *(struct _RTL_GENERIC_TABLE **)(a1 + 344);
    if ( v28 && a3 )
    {
      DeleteObject(v28);
      *(_QWORD *)(a1 + 344) = 0LL;
    }
  }
  else
  {
    v28 = *(struct _RTL_GENERIC_TABLE **)(a1 + 336);
    if ( v28 && a3 )
    {
      DeleteObject(v28);
      *(_QWORD *)(a1 + 336) = 0LL;
    }
  }
  if ( v5 )
    WPF::Free(v28, v5);
  if ( v6 )
    WPF::Free(v28, v6);
  if ( v32 )
    CMILPoolResource::Release(v32);
  return v4;
}
