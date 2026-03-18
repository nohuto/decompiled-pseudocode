/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067D00
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00697A4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001182C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0014CF8 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0052B30 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C0060010 (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00600F4 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r15
  __int64 v2; // r14
  unsigned int v4; // ebx
  VIDMM_DMA_POOL *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  VIDMM_DMA_POOL **v10; // rbx
  __int64 v12; // rax
  VIDMM_DMA_POOL *v13; // rcx
  __int64 v14; // rax
  __int64 i; // rsi
  struct _VIDMM_DMA_BUFFER *v16; // rdx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5008);
  v2 = 0LL;
  if ( *((_DWORD *)this + 1604) )
  {
    while ( 1 )
    {
      v4 = 1 << (*((_BYTE *)this + v2 + 52) - 1);
      v5 = (VIDMM_DMA_POOL *)operator new(0x90uLL, 0x39326956u, (POOL_TYPE)512);
      if ( v5 )
        v5 = VIDMM_DMA_POOL::VIDMM_DMA_POOL(
               v5,
               this,
               v2,
               v1,
               0LL,
               *((_DWORD *)this + v2 + 29),
               0,
               0,
               v4,
               *((_DWORD *)this + v2 + 93),
               1);
      *((_QWORD *)this + v2 + 79) = v5;
      if ( !v5 )
        break;
      v7 = VIDMM_DMA_POOL::Init(v5);
      v9 = v7;
      if ( v7 < 0 )
      {
        _InterlockedAdd(&dword_1C002F570, 1u);
        v12 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v12 + 24) = v9;
        WdLogEvent5_WdLowResource(v12);
        goto LABEL_11;
      }
      v10 = (VIDMM_DMA_POOL **)((char *)this + 8 * v2);
      VIDMM_DMA_POOL::AcquireBuffer(v10[79], v10 + 143, 0, 1);
      v2 = (unsigned int)(v2 + 1);
      *((_DWORD *)v10[143] + 8) = 1;
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1604) )
        goto LABEL_7;
    }
    _InterlockedAdd(&dword_1C002F56C, 1u);
    v14 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v14 + 24) = 1691LL;
    WdLogEvent5_WdLowResource(v14);
    LODWORD(v9) = -1073741801;
LABEL_11:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
    {
      if ( *((_QWORD *)this + i + 79) )
      {
        v16 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v16 )
        {
          VIDMM_DMA_POOL::ReleaseBuffer(v13, v16, 1);
          *((_QWORD *)this + i + 143) = 0LL;
        }
      }
      v13 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v13 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v13);
      *((_QWORD *)this + i + 79) = 0LL;
    }
    return (unsigned int)v9;
  }
  else
  {
LABEL_7:
    *((_DWORD *)this + 10000) = 1;
    return 0LL;
  }
}
