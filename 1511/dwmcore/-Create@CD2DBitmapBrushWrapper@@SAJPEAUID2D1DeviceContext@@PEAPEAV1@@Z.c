/*
 * XREFs of ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800AC608
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180022270 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z @ 0x1800AC958 (--0CD2DBitmapBrushWrapper@@AEAA@PEAUID2D1BitmapBrush1@@PEAUID2D1Bitmap1@@@Z.c)
 */

__int64 __fastcall CD2DBitmapBrushWrapper::Create(struct ID2D1DeviceContext *a1, struct CD2DBitmapBrushWrapper **a2)
{
  __int64 (__fastcall *v4)(struct ID2D1DeviceContext *, _QWORD, _QWORD, _QWORD, _OWORD *, struct ID2D1Bitmap1 **, __int64, __int64, _DWORD, _QWORD); // rbx
  int v5; // eax
  unsigned int v6; // esi
  CD2DBitmapBrushWrapper *v7; // rax
  struct CD2DBitmapBrushWrapper *v8; // rdi
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-50h]
  __int128 v12; // [rsp+30h] [rbp-40h]
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]
  _OWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  struct ID2D1Bitmap1 *v15; // [rsp+A0h] [rbp+30h] BYREF
  struct ID2D1BitmapBrush1 *v16; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+40h]

  *a2 = 0LL;
  LODWORD(v13) = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)&v12 = 0x100000057LL;
  *((_QWORD *)&v12 + 1) = 0x42C0000042C00000LL;
  v4 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD, _QWORD, _QWORD, _OWORD *, struct ID2D1Bitmap1 **, __int64, __int64, _DWORD, _QWORD))(*(_QWORD *)a1 + 456LL);
  v14[0] = v12;
  v14[1] = v13;
  v5 = v4(a1, 0LL, 0LL, 0LL, v14, &v15, 0x100000057LL, 0x42C0000042C00000LL, 0, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 38;
LABEL_15:
    v10 = v5;
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, struct ID2D1Bitmap1 *, _QWORD, _QWORD, struct ID2D1BitmapBrush1 **))(*(_QWORD *)a1 + 528LL))(
         a1,
         v15,
         0LL,
         0LL,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 41;
    goto LABEL_15;
  }
  v7 = (CD2DBitmapBrushWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   32LL);
  if ( v7 )
    v8 = CD2DBitmapBrushWrapper::CD2DBitmapBrushWrapper(v7, v16, v15);
  else
    v8 = 0LL;
  *a2 = v8;
  if ( v8 )
  {
    (**(void (__fastcall ***)(struct CD2DBitmapBrushWrapper *))v8)(v8);
    goto LABEL_7;
  }
  v6 = -2147024882;
  v11 = 45;
  v10 = -2147024882;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
LABEL_7:
  if ( v16 )
    (*(void (__fastcall **)(struct ID2D1BitmapBrush1 *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v15 + 16LL))(v15);
  return v6;
}
