/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C005155C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C000ECEC (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C003A60C (-FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v5; // al
  _QWORD *i; // rsi
  CVirtualAddressAllocator *v7; // rcx
  CVirtualAddressAllocator *v8; // rsi
  char v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  if ( (*(_BYTE *)(a1 + 40552) & 1) != 0 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 6416) )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(a1 + 39992) + 456LL * (unsigned int)v3;
        v5 = *(_BYTE *)(v4 + 420);
        if ( (v5 & 1) != 0 && ((a2 & 1) == 0 || v5 < 0) )
        {
          for ( i = *(_QWORD **)(a1 + 40688); i != (_QWORD *)(a1 + 40688); i = (_QWORD *)*i )
          {
            v7 = (CVirtualAddressAllocator *)i[51];
            if ( v7 && i[2] != *(_QWORD *)(a1 + 40000) )
            {
              CVirtualAddressAllocator::EvictRootPageTable(v7, v3, a2 & 1);
              a2 = v9;
            }
          }
          *(_BYTE *)(v4 + 420) |= 0x10u;
          a2 = v9;
        }
        v8 = *(CVirtualAddressAllocator **)(a1 + 8 * v3 + 40032);
        if ( v8 && ((a2 & 1) == 0 || (*(_BYTE *)(v4 + 421) & 1) != 0) )
        {
          VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1, 0LL, 0LL);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF);
          *(_BYTE *)(a1 + 40552) |= 8u;
          CVirtualAddressAllocator::EvictRootPageTable(v8, v3, v9 & 1);
          *(_BYTE *)(a1 + 40552) &= ~8u;
          *(_BYTE *)(v4 + 420) |= 0x20u;
        }
        *(_BYTE *)(v4 + 420) &= ~0x80u;
        v3 = (unsigned int)(v3 + 1);
        *(_BYTE *)(v4 + 421) &= ~1u;
        if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 6416) )
          break;
        a2 = v9;
      }
    }
  }
}
