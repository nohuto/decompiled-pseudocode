/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0003470
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B0AC (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0001C78 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // r9
  unsigned int VidSchSibmitDataSize; // eax
  void *v5; // r9
  DXGADAPTER *v6; // rcx
  unsigned __int8 IsDxgmms2; // al
  int v8; // edx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // edx

  v2 = *((_QWORD *)this + 1) + 1024LL;
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
    *(_BYTE *)(v9 + 348) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      *(_DWORD *)(v9 + 364) = v8;
      *(_DWORD *)(v9 + 368) = v10;
      v11 = ((v10 * v8) << 6) + 16;
      *(_DWORD *)(v9 + 372) = v11;
      *(_DWORD *)(v9 + 352) = v11 + 360;
      *(_DWORD *)(v9 + 356) = v11 + 360 + 8 * v10;
    }
  }
}
