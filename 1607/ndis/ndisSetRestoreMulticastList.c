/*
 * XREFs of ndisSetRestoreMulticastList @ 0x1C00C6C08
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00AE5B0 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

void __fastcall ndisSetRestoreMulticastList(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 i; // r15
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r10
  unsigned int v14; // r9d
  unsigned int v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r8

  v2 = *(__int64 **)(a1 + 400);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x78u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
  v5 = v2;
  v6 = *v2;
  memmove((void *)v2[45], (const void *)v2[44], (unsigned int)(6 * *((_DWORD *)v2 + 86)));
  v7 = *((_DWORD *)v2 + 92);
  *((_DWORD *)v2 + 92) = 0;
  *((_DWORD *)v2 + 93) = v7;
  do
  {
    while ( 1 )
    {
      if ( !v6 )
      {
        if ( v5 == v2 )
        {
          v5 = v2 + 1;
          v6 = v2[1];
        }
        if ( !v6 )
        {
          if ( v5 != v2 + 1 )
            break;
          v5 = v2 + 2;
          v6 = v2[2];
          if ( !v6 )
            break;
        }
      }
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 456); i = (unsigned int)(i + 1) )
      {
        v9 = *((_DWORD *)v2 + 92);
        v10 = -1;
        v11 = 0LL;
        if ( v9 )
        {
          v12 = *(_QWORD *)(v6 + 448);
          v13 = v2[44];
          v10 = -1;
          v14 = *(_DWORD *)(v12 + 12 * i + 6);
          while ( 1 )
          {
            v15 = *(_DWORD *)(v13 + 6 * v11 + 2);
            if ( v15 > v14 )
              break;
            if ( v15 >= v14 )
            {
              v16 = *(_WORD *)(v13 + 6 * v11);
              v17 = *(_WORD *)(v12 + 12 * i + 4);
              if ( v16 > v17 )
                break;
              if ( v16 >= v17 )
                goto LABEL_18;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v9 )
              goto LABEL_14;
          }
          v10 = 1;
        }
LABEL_14:
        *((_DWORD *)v2 + 92) = v9 + 1;
        if ( v9 + 1 > *((_DWORD *)v2 + 86) )
          break;
        if ( v10 > 0 )
          memmove(
            (void *)(v2[44] + 6LL * (unsigned int)(v11 + 1)),
            (const void *)(v2[44] + 6 * v11),
            6 * (v9 - (unsigned int)v11));
        memmove((void *)(v2[44] + 6 * v11), (const void *)(*(_QWORD *)(v6 + 448) + 4 * (i + 2 * i + 1)), 6uLL);
LABEL_18:
        ;
      }
      v6 = *(_QWORD *)(v6 + 424);
    }
  }
  while ( v5 != v2 + 2 );
  *(_QWORD *)(a2 + 40) = v2[44];
  *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v2 + 92);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x79u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
}
