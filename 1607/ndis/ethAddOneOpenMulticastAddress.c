/*
 * XREFs of ethAddOneOpenMulticastAddress @ 0x1C00D38CC
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C678C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // esi
  __int64 v10; // rdx
  unsigned int v11; // r9d
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  size_t v17; // r12

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xDu, &WPP_3ec07efc603d354df33ef43e9ecbaab2_Traceguids, a1);
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  v9 = 1;
  if ( (_DWORD)v6 )
  {
    v10 = *(_QWORD *)(a1 + 448);
    while ( *(_DWORD *)(v10 + 12LL * v8 + 6) != *(_DWORD *)(a2 + 2) || *(_WORD *)(v10 + 12LL * v8 + 4) != *(_WORD *)a2 )
    {
      if ( ++v8 >= (unsigned int)v6 )
        goto LABEL_8;
    }
    ++*(_DWORD *)(v10 + 12LL * v8);
  }
  else
  {
LABEL_8:
    if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 440) )
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v11 = *(_DWORD *)(a1 + 456);
      v12 = 0;
      *(_DWORD *)(a1 + 472) = v11;
      *(_DWORD *)(a1 + 456) = v11 + 1;
      if ( v11 )
      {
        v13 = *(_QWORD *)(a1 + 464);
        v14 = *(_DWORD *)(a2 + 2);
        while ( 1 )
        {
          v15 = *(_DWORD *)(v13 + 12LL * v12 + 6);
          if ( v15 > v14 )
            break;
          if ( v15 >= v14 )
          {
            v16 = *(_WORD *)(v13 + 12LL * v12 + 4);
            if ( v16 > *(_WORD *)a2 )
              break;
            v9 = -(v16 < *(_WORD *)a2);
          }
          else
          {
            v9 = -1;
          }
          if ( ++v12 >= v11 )
            goto LABEL_21;
        }
        v9 = 1;
      }
LABEL_21:
      v17 = 12LL * v12;
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), v17);
      memmove((void *)(v17 + *(_QWORD *)(a1 + 448) + 4LL), a2, 6uLL);
      *(_DWORD *)(v17 + *(_QWORD *)(a1 + 448)) = 1;
      if ( v9 > 0 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 448) + 12LL * (v12 + 1)),
          (const void *)(v17 + *(_QWORD *)(a1 + 464)),
          12LL * (*(_DWORD *)(a1 + 472) - v12));
      *a3 = 0;
    }
    else
    {
      v7 = -1073676279;
    }
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_dd(0xEu, &WPP_3ec07efc603d354df33ef43e9ecbaab2_Traceguids, (unsigned __int8)*a3, v7);
  return v7;
}
