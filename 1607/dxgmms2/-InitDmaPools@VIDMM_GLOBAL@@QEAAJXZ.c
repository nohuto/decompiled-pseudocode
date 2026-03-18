/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D96C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006F040 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0001DC4 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0012B58 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C006956C (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0069650 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r15
  __int64 v2; // r14
  unsigned int v4; // ebx
  VIDMM_DMA_POOL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbp
  VIDMM_DMA_POOL **v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 i; // rsi
  VIDMM_DMA_POOL *v19; // rcx
  struct _VIDMM_DMA_BUFFER *v20; // rdx
  VIDMM_DMA_POOL *v21; // rcx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5041);
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
      v10 = VIDMM_DMA_POOL::Init(v5, v6, v8, v9);
      v13 = v10;
      if ( v10 < 0 )
      {
        _InterlockedAdd(&dword_1C00355F0, 1u);
        v16 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v16 + 24) = v13;
        WdLogEvent5_WdLowResource(v16);
        goto LABEL_11;
      }
      v14 = (VIDMM_DMA_POOL **)((char *)this + 8 * v2);
      LOBYTE(v12) = 1;
      VIDMM_DMA_POOL::AcquireBuffer(v14[79], v14 + 143, 0LL, v12);
      v2 = (unsigned int)(v2 + 1);
      *((_DWORD *)v14[143] + 8) = 1;
      if ( (unsigned int)v2 >= *((_DWORD *)this + 1604) )
        goto LABEL_7;
    }
    _InterlockedAdd(&dword_1C00355EC, 1u);
    v17 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v17 + 24) = 1702LL;
    WdLogEvent5_WdLowResource(v17);
    LODWORD(v13) = -1073741801;
LABEL_11:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
    {
      v19 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v19 )
      {
        v20 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v20 )
        {
          VIDMM_DMA_POOL::ReleaseBuffer(v19, v20, 1);
          *((_QWORD *)this + i + 143) = 0LL;
        }
      }
      v21 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v21 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v21);
      *((_QWORD *)this + i + 79) = 0LL;
    }
    return (unsigned int)v13;
  }
  else
  {
LABEL_7:
    *((_DWORD *)this + 10022) = 1;
    return 0LL;
  }
}
