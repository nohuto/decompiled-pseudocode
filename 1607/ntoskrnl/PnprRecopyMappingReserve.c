/*
 * XREFs of PnprRecopyMappingReserve @ 0x1401D04F0
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401D05CC (PnprRecopyMirrorPages.c)
 * Callees:
 *     PnprRecopyAddress @ 0x1401D04A0 (PnprRecopyAddress.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     PnprMarkOrMirrorPages @ 0x1403DC0C4 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  SIZE_T v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE((((a1[1] + (unsigned __int64)v3) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v4 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    v3 += 4096;
    if ( v3 >= 0x10000 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 10744);
  if ( !v9 )
    v9 = 5704;
  *(_DWORD *)(PnprContext + 10744) = v9;
  v10 = *(_DWORD *)(v8 + 10748);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 10748) = v10;
  return (unsigned int)v6;
}
