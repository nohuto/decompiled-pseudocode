/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007A89C
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18007A794 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800417A4 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180079A24 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_180079A24.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x180079B00 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180079BF4 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007AAE4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x18007ACF4 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18007AD60 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007AE18 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        unsigned __int32 a4,
        int a5)
{
  char v5; // al
  CDesktopManager *v8; // rdx
  CImmersiveIconicBitmapRegistry *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int ImmersiveIconContainerSize; // eax
  int v17; // edx
  int v18; // eax
  unsigned int v19; // ebp
  struct CBitmapSource *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  bool v22; // r8
  int v23; // eax
  int IconW; // eax
  int inserted; // eax
  int v26; // eax
  int v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+74h] [rbp+Ch]
  unsigned int v30; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  *((_QWORD *)this + 33) = a2;
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  *((_DWORD *)this + 72) = 5;
  *((_BYTE *)this + 304) = v5;
  *((_DWORD *)this + 75) = a4;
  v11 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)v8 + 27);
  v12 = CVisual::Initialize(this, *((struct IDwmChannel **)v8 + 4));
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = CImage::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            (struct CImage **)this + 34);
    v13 = v14;
    if ( v14 >= 0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 33) + 578LL) |= 1u;
      if ( a3 )
      {
        v15 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
                v11,
                this,
                a3,
                (enum DEVICE_SCALE_FACTOR)a4,
                *((_BYTE *)this + 304),
                (enum IconicRepresentationType *)&v30,
                (enum IconicRepresentationType *)&a5);
        v13 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x4Cu);
          return v13;
        }
        ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, a5);
        v17 = a5;
        *((_DWORD *)this + 73) = ImmersiveIconContainerSize - 2;
        v18 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v17);
        v19 = v30;
        *((_DWORD *)this + 74) = v18;
        if ( v19 == 1 )
        {
          v28 = v18;
          v29 = v18;
          (*(void (__fastcall **)(CImmersiveWindowIconic *, int *))(*(_QWORD *)this + 80LL))(this, &v28);
          CImmersiveWindowIconic::_UpdateSolidFill(this);
        }
        else
        {
          BitmapSourceNoRef = 0LL;
          IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v11, a2[5]);
          if ( IconicResourceNoRef )
            BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                  IconicResourceNoRef,
                                  v19,
                                  a4);
          *((_DWORD *)this + 74) = *((_DWORD *)BitmapSourceNoRef + 6);
          (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 80LL))(this);
          CImmersiveWindowIconic::SetBitmap(this, BitmapSourceNoRef, v22);
        }
        v23 = CImmersiveWindowIconic::SetRepresentationType(this, v19, 0LL);
        v13 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x60u);
          return v13;
        }
      }
      IconW = CImmersiveWindowIconic::LoadIconW(this);
      v13 = IconW;
      if ( IconW >= 0 )
      {
        inserted = VisualCollection::InsertRelative(
                     (CImmersiveWindowIconic *)((char *)this + 32),
                     *((struct CVisual **)this + 34),
                     0LL,
                     0,
                     1);
        v13 = inserted;
        if ( inserted >= 0 )
        {
          v26 = CVisual::RenderRecursive(this);
          v13 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x67u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x66u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, IconW, 0x65u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x44u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x42u);
  }
  return v13;
}
