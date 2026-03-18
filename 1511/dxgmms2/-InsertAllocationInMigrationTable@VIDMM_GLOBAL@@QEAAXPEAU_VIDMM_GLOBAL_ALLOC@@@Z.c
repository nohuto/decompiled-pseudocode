/*
 * XREFs of ?InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007B07C
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00509D0 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::InsertAllocationInMigrationTable(
        union _LARGE_INTEGER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
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
      if ( (unsigned int)v7 >= dword_1C002F244 )
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
          *(_BYTE *)(this[889][v8].QuadPart + 92) = 0;
          this[889][v8].QuadPart = (LONGLONG)a2;
          *((_BYTE *)a2 + 92) = 1;
        }
        this[888] = (union _LARGE_INTEGER *)v5;
      }
      else
      {
        this[889][v7].QuadPart = (LONGLONG)a2;
        ++*((_DWORD *)this + 1780);
        *((_BYTE *)a2 + 92) = 1;
      }
    }
    DXGFASTMUTEX::Release((DXGFASTMUTEX *)this[887], v4, v5, v6);
  }
}
