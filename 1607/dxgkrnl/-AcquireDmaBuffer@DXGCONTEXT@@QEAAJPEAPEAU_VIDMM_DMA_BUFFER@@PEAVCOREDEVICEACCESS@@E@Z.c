/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A80F0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE3E0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170448 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0174A10 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00B0B3C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  unsigned int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 80LL));
  v8 = 3;
  if ( *((_DWORD *)this + 16) > 3u )
    v8 = *((_DWORD *)this + 16);
  LODWORD(v11) = DXGCONTEXT::EnsurePriviledgedDmaPool(this, v8, *((_DWORD *)this + 24));
  if ( (int)v11 >= 0 )
  {
    v15 = *((_QWORD *)this + 26);
    LOBYTE(v9) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                           + 488LL))(
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
        LOBYTE(v18) = a4;
        LODWORD(v11) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 488LL))(
                         v15,
                         0LL,
                         v18,
                         a2);
        v19 = COREDEVICEACCESS::AcquireShared(a3);
        v21 = v19;
        if ( v19 < 0 )
        {
          v22 = WdLogNewEntry5_WdEvent(v20);
          *(_QWORD *)(v22 + 24) = this;
          *(_QWORD *)(v22 + 32) = v21;
          WdLogEvent5_WdEvent(v22);
          return (unsigned int)v21;
        }
      }
    }
    else if ( v16 < 0 )
    {
      v24 = WdLogNewEntry5_WdEvent(v17);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = v11;
      WdLogEvent5_WdEvent(v24);
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
