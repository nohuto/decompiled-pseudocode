/*
 * XREFs of ?CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z @ 0x1C011E5F4
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000E1A4 (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::CheckHardwareProtectionVisibility(DXGADAPTER *this, struct DXGADAPTER *a2)
{
  __int64 v2; // r8
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 247);
  if ( *(_BYTE *)(v2 + 256) )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 80); ++i )
    {
      v6 = 1008LL * i;
      v7 = *(_QWORD *)(v2 + 112);
      if ( *(_BYTE *)(v6 + v7 + 992) && *(_BYTE *)(v6 + v7 + 993) )
      {
        v8 = *(_QWORD *)(v6 + v7 + 1000);
        v9 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v8);
        if ( (__int64)(v9 / PerformanceFrequency.QuadPart) > 1250 )
        {
          ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*((ADAPTER_DISPLAY **)this + 247), i, 0);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 248) + 376LL) + 8LL) + 776LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 248) + 384LL),
            i);
        }
      }
      v2 = *((_QWORD *)this + 247);
    }
  }
}
