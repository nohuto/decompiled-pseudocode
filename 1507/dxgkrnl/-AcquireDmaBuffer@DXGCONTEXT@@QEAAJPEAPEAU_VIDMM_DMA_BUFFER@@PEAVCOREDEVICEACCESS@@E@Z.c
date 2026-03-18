/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7E90 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0147318 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01488F0 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014A904 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  __int64 v8; // rdx
  int v9; // r14d
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v36; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 80LL));
  v9 = *((_DWORD *)this + 24);
  v10 = 3;
  if ( *((_DWORD *)this + 16) > 3u )
    v10 = *((_DWORD *)this + 16);
  if ( !*((_QWORD *)this + 26) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 416LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
            *((unsigned int *)this + 82),
            *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
            this,
            1,
            *((_DWORD *)this + 44),
            v10,
            v9,
            *((_DWORD *)this + 45),
            *((_DWORD *)this + 46));
    *((_QWORD *)this + 26) = v11;
    if ( !v11 )
    {
      v15 = WdLogNewEntry5_WdWarning(0LL, v12, v13, v14);
      LODWORD(v16) = -1073741801;
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v15);
LABEL_6:
      v20 = WdLogNewEntry5_WdWarning(v17, v8, v18, v19);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v16;
    }
    LODWORD(v16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 424LL))(v11);
    if ( (int)v16 < 0 )
      goto LABEL_6;
    *((_DWORD *)this + 47) = v10;
    *((_DWORD *)this + 48) = v9;
  }
  v21 = *((_QWORD *)this + 26);
  LOBYTE(v8) = 1;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                         + 472LL))(
          v21,
          v8,
          0LL,
          a2);
  v16 = v22;
  if ( v22 == -1071775486 )
  {
    if ( a3 )
    {
      COREDEVICEACCESS::Release(a3);
      LOBYTE(v27) = a4;
      LODWORD(v16) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 472LL))(
                       v21,
                       0LL,
                       v27,
                       a2);
      v28 = COREDEVICEACCESS::AcquireShared(a3);
      v33 = v28;
      if ( v28 < 0 )
      {
        v34 = WdLogNewEntry5_WdEvent(v30, v29, v31, v32);
        *(_QWORD *)(v34 + 24) = this;
        *(_QWORD *)(v34 + 32) = v33;
        WdLogEvent5_WdEvent(v34);
        return (unsigned int)v33;
      }
    }
  }
  else if ( v22 < 0 )
  {
    v36 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = v16;
    WdLogEvent5_WdEvent(v36);
  }
  return (unsigned int)v16;
}
