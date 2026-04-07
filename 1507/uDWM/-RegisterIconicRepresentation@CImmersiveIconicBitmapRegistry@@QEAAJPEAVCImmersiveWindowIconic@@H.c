/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180070894
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800715A4 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800719A0 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180007AC8 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x180070FBC (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        bool a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+68h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 33);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v11 = IconicResourceNoRef;
  if ( !IconicResourceNoRef )
  {
    v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            48LL);
    if ( v12 )
    {
      *(_QWORD *)v12 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_DWORD *)(v12 + 24) = 0;
      *(_DWORD *)(v12 + 28) = 0;
      *(_DWORD *)(v12 + 32) = 0;
      *(_BYTE *)(v12 + 40) = 0;
      *(_DWORD *)(v12 + 44) = 1;
    }
    IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v12;
    if ( !v12 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x5Cu);
      return v13;
    }
    v14 = *((_DWORD *)this + 10);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v13 = -2147024362;
LABEL_17:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x5Du);
      return v13;
    }
    v13 = 0;
    if ( v15 > *((_DWORD *)this + 9) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &IconicResourceNoRef);
      v16 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xC0u);
      v13 = v16;
      if ( v16 < 0 )
        goto LABEL_17;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = IconicResourceNoRef;
      *((_DWORD *)this + 10) = v15;
    }
    v11 = IconicResourceNoRef;
    if ( !IconicResourceNoRef )
      return v13;
  }
  v17 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(this, v11, *(HWND *)(v7 + 40), a3, a4, a5, a6, a7);
  v13 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x62u);
  return v13;
}
