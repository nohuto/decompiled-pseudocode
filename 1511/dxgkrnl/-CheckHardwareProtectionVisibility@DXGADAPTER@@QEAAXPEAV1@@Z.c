/*
 * XREFs of ?CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z @ 0x1C0123FAC
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000724C (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
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

  v2 = *((_QWORD *)this + 248);
  if ( *(_BYTE *)(v2 + 328) )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 104); ++i )
    {
      v6 = 1016LL * i;
      v7 = *(_QWORD *)(v2 + 136);
      if ( *(_BYTE *)(v6 + v7 + 1000) && *(_BYTE *)(v6 + v7 + 1001) )
      {
        v8 = *(_QWORD *)(v6 + v7 + 1008);
        v9 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v8);
        if ( (__int64)(v9 / PerformanceFrequency.QuadPart) > 1250 )
        {
          ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(*((ADAPTER_DISPLAY **)this + 248), i, 0);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 249) + 400LL) + 8LL) + 776LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 249) + 408LL),
            i);
        }
      }
      v2 = *((_QWORD *)this + 248);
    }
  }
}
