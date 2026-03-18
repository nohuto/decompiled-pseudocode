/*
 * XREFs of ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005EA30
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C003B7A8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  CVirtualAddressAllocator *v6; // rax
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  CVirtualAddressAllocator *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40552) & 1) == 0 )
    return 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)a2 + 1604) )
    return 0LL;
  while ( 1 )
  {
    v5 = 456LL * (unsigned int)v4;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 4999) + v5 + 420) & 1) == 0 )
      goto LABEL_9;
    v6 = (CVirtualAddressAllocator *)operator new(0x80uLL, 0x4B677844u, PagedPool);
    v11 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      v8 = (char *)v6 + 104;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      *((_DWORD *)v6 + 14) = 64;
      *((_QWORD *)v6 + 9) = 0LL;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 11) = 0LL;
      *((_QWORD *)v6 + 14) = (char *)v6 + 104;
      *((_QWORD *)v6 + 13) = (char *)v6 + 104;
      *((_DWORD *)v6 + 30) = 0;
    }
    else
    {
      v11 = 0LL;
    }
    *((_QWORD *)this + v4 + 4) = v11;
    if ( !v11 )
      break;
    v14 = CVirtualAddressAllocator::InitializeVaAllocator(
            v11,
            1LL << *((_DWORD *)a2 + 10136),
            1 << *(_DWORD *)(*((_QWORD *)a2 + 4999) + v5 + 52) << 12,
            a2,
            g_pVidMmSystemProcess);
    if ( v14 < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v18 + 24) = 6046LL;
      WdLogEvent5_WdAssertion(v18);
      return (unsigned int)v14;
    }
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a2 + 1604) )
      return 0LL;
  }
  v19 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
  *(_QWORD *)(v19 + 24) = 6037LL;
  WdLogEvent5_WdAssertion(v19);
  return 3221225495LL;
}
