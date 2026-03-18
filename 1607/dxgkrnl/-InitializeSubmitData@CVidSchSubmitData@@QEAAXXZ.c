/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170448 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0174A10 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0007928 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // r10
  unsigned int VidSchSibmitDataSize; // eax
  void *v5; // r10
  DXGADAPTER *v6; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v8; // r8
  int v9; // r9d
  int v10; // r10d
  unsigned int v11; // eax

  v2 = *((_QWORD *)this + 1) + 944LL;
  ++*(_DWORD *)(v2 + 20);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v3 )
  {
    ++*(_DWORD *)(v2 + 24);
    v3 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((DXGADAPTER ***)this + 1));
    memset(v5, 0, VidSchSibmitDataSize);
    DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v6);
    *(_BYTE *)(v8 + 348) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      *(_DWORD *)(v8 + 428) = v10;
      *(_DWORD *)(v8 + 432) = v9;
      *(_DWORD *)(v8 + 436) = v10 * (48 * v9 + ((8 * v9 + 167) & 0xFFFFFFF8)) + 16;
      v11 = v10 * (48 * v9 + ((8 * v9 + 167) & 0xFFFFFFF8)) + 440;
      *(_DWORD *)(v8 + 416) = v11;
      *(_DWORD *)(v8 + 420) = 8 * v9 + v11;
    }
  }
}
