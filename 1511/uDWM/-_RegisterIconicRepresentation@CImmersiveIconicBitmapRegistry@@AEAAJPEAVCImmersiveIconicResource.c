/*
 * XREFs of ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18007927C
 * Callers:
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180078AC4 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 * Callees:
 *     Template_qp @ 0x180074068 (Template_qp.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800788F4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800788F4.c)
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18007891C (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800789D0 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a2,
        HWND a3,
        int a4,
        int nDenominator,
        bool a6,
        enum IconicRepresentationType *a7,
        enum IconicRepresentationType *a8)
{
  unsigned int v11; // ebx
  int v13; // eax
  unsigned int IconicRepresentationTypeClosestToSize; // eax
  unsigned __int16 ImmersiveIconContainerSize; // ax
  HWND v16; // rcx
  enum IconicRepresentationType *v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d

  v11 = 2;
  v13 = MulDiv(a4, 100, nDenominator);
  if ( v13 >= 320 )
  {
    if ( v13 >= 800 )
      v11 = 4;
    else
      v11 = 3;
  }
  if ( a6 && !CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, v11, nDenominator) )
  {
    IconicRepresentationTypeClosestToSize = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
                                              a2,
                                              a4,
                                              nDenominator);
    if ( IconicRepresentationTypeClosestToSize != 5 )
      v11 = IconicRepresentationTypeClosestToSize;
  }
  if ( a8 )
    *(_DWORD *)a8 = v11;
  if ( *((_BYTE *)a2 + 40)
    || CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, v11, nDenominator) )
  {
    v17 = a7;
    if ( *((_BYTE *)a2 + 40) )
      v11 = 1;
    *(_DWORD *)a7 = v11;
  }
  else
  {
    *((_BYTE *)a2 + 40) = 1;
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11);
    v16 = (HWND)*((_QWORD *)this + 10);
    if ( v16 )
      PostMessageW(
        v16,
        0x323u,
        *(_QWORD *)a2,
        ImmersiveIconContainerSize | (unsigned __int64)(ImmersiveIconContainerSize << 16));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp((__int64)v16, (__int64)&UdwmManageIconicThumbnail_Info, 3, *(_QWORD *)a2);
    v17 = a7;
    *(_DWORD *)a7 = 1;
  }
  ++*((_DWORD *)a2 + 11);
  v18 = (unsigned int)(*(_DWORD *)v17 - 2);
  if ( (_DWORD)v18 )
  {
    v18 = (unsigned int)(v18 - 1);
    if ( (_DWORD)v18 )
    {
      if ( (_DWORD)v18 == 1 )
        v19 = 8;
      else
        v19 = 9;
    }
    else
    {
      v19 = 7;
    }
  }
  else
  {
    v19 = 6;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v18, (__int64)&UdwmSelectIconicRepresentation_Info, v19, a3);
  return 0LL;
}
