/*
 * XREFs of ?InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E5BC
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0052224 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::InsertAllocationInMigrationTable(DXGFASTMUTEX **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // r11d
  unsigned __int64 v9; // r10

  if ( this[889] )
  {
    DXGFASTMUTEX::Acquire(this[887]);
    if ( !*((_BYTE *)a2 + 92) )
    {
      v7 = *((unsigned int *)this + 1780);
      if ( (unsigned int)v7 >= dword_1C0027224 )
      {
        v8 = 0;
        v4 = 0LL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (_DWORD)v7 )
        {
          v6 = (__int64)this[889];
          do
          {
            v9 = *(unsigned int *)(*(_QWORD *)v6 + 376LL);
            if ( v9 < v5 )
            {
              v8 = v4;
              v5 = (unsigned int)v9;
            }
            v4 = (unsigned int)(v4 + 1);
            v6 += 8LL;
          }
          while ( (unsigned int)v4 < (unsigned int)v7 );
        }
        if ( *((unsigned int *)a2 + 94) > v5 )
        {
          v4 = v8;
          *(_BYTE *)(*((_QWORD *)this[889] + v8) + 92LL) = 0;
          *((_QWORD *)this[889] + v8) = a2;
          *((_BYTE *)a2 + 92) = 1;
        }
        this[888] = (DXGFASTMUTEX *)v5;
      }
      else
      {
        *((_QWORD *)this[889] + v7) = a2;
        ++*((_DWORD *)this + 1780);
        *((_BYTE *)a2 + 92) = 1;
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this[887], v4, v5, v6);
  }
}
