/*
 * XREFs of ethDeleteOneOpenMulticastAddress @ 0x1C00D3AB4
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  unsigned int v13; // eax

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xBu, &WPP_3ec07efc603d354df33ef43e9ecbaab2_Traceguids, a1);
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0LL;
  *a3 = 1;
  v8 = 1;
  if ( !(_DWORD)v6 )
    goto LABEL_8;
  v9 = *(_QWORD *)(a1 + 448);
  while ( *(_DWORD *)(v9 + 12 * v7 + 6) != *(_DWORD *)(a2 + 2) || *(_WORD *)(v9 + 12 * v7 + 4) != *(_WORD *)a2 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= (unsigned int)v6 )
      goto LABEL_8;
  }
  v8 = 0;
  v13 = *(_DWORD *)(v9 + 12 * v7);
  if ( v13 > 1 )
  {
    *(_DWORD *)(v9 + 12 * v7) = v13 - 1;
  }
  else
  {
LABEL_8:
    if ( (_DWORD)v7 != (_DWORD)v6 || !v8 )
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v10 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 472) = v10--;
      *(_DWORD *)(a1 + 456) = v10;
      if ( v10 )
      {
        memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12 * v7);
        v11 = *(_DWORD *)(a1 + 472);
        if ( (unsigned int)v7 < v11 - 1 )
          memmove(
            (void *)(12 * v7 + *(_QWORD *)(a1 + 448)),
            (const void *)(*(_QWORD *)(a1 + 464) + 12LL * (unsigned int)(v7 + 1)),
            12LL * (unsigned int)(v11 - v7 - 1));
      }
      *a3 = 0;
    }
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_dd(0xCu, &WPP_3ec07efc603d354df33ef43e9ecbaab2_Traceguids, (unsigned __int8)*a3, 0);
  return 0LL;
}
