/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00C8FA4
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DB48 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B0AC (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C014C5C8 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00854C4 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v30; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 80LL));
  v8 = 3;
  if ( *((_DWORD *)this + 16) > 3u )
    v8 = *((_DWORD *)this + 16);
  LODWORD(v11) = DXGCONTEXT::EnsurePriviledgedDmaPool(this, v8, *((_DWORD *)this + 24));
  if ( (int)v11 >= 0 )
  {
    v15 = *((_QWORD *)this + 26);
    LOBYTE(v9) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                                                                           + 472LL))(
            v15,
            v9,
            0LL,
            a2);
    v11 = v16;
    if ( v16 == -1071775486 )
    {
      if ( a3 )
      {
        COREDEVICEACCESS::Release(a3);
        LOBYTE(v21) = a4;
        LODWORD(v11) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 472LL))(
                         v15,
                         0LL,
                         v21,
                         a2);
        v22 = COREDEVICEACCESS::AcquireShared(a3);
        v27 = v22;
        if ( v22 < 0 )
        {
          v28 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
          *(_QWORD *)(v28 + 24) = this;
          *(_QWORD *)(v28 + 32) = v27;
          WdLogEvent5_WdEvent(v28);
          return (unsigned int)v27;
        }
      }
    }
    else if ( v16 < 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
      *(_QWORD *)(v30 + 24) = this;
      *(_QWORD *)(v30 + 32) = v11;
      WdLogEvent5_WdEvent(v30);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v12, v13);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdWarning(v14);
  }
  return (unsigned int)v11;
}
