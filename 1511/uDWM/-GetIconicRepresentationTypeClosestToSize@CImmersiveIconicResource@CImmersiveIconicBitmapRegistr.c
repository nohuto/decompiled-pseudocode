/*
 * XREFs of ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18007891C
 * Callers:
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18007927C (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800788F4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800788F4.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a1,
        int a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int *v6; // rbx
  int v8; // ebp
  __int64 v9; // rdi
  struct CBitmapSource *BitmapSourceNoRef; // rax
  signed int v11; // eax
  _DWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 5;
  v13[0] = 2;
  v13[2] = 4;
  v6 = v13;
  v8 = 0x7FFFFFFF;
  v9 = 3LL;
  v13[1] = 3;
  do
  {
    BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a1, *v6, a3);
    if ( BitmapSourceNoRef )
    {
      v11 = abs32(*((_DWORD *)BitmapSourceNoRef + 6) - a2);
      if ( v11 < v8 )
      {
        v3 = *v6;
        v8 = v11;
      }
    }
    ++v6;
    --v9;
  }
  while ( v9 );
  return v3;
}
