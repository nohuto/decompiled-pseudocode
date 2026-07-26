/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0009770
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C0064358 (ndisReturnNetBufferListsInternal.c)
 */

__int64 __fastcall ndisSortNetBufferLists(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v2; // r13d
  __int64 v3; // r8
  char v4; // r9
  unsigned int v5; // r11d
  __int64 *v7; // rdi
  _QWORD *v8; // r10
  __int64 *v9; // rsi
  unsigned __int16 v10; // r15
  __int64 *v11; // rdx
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r12
  unsigned int v17; // esi
  char *v18; // r8
  char *v19; // rax
  char *v20; // r8
  __int64 v21; // r10
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  _WORD *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 result; // rax
  unsigned int v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+24h] [rbp-74h]
  __int64 *v33; // [rsp+28h] [rbp-70h]
  __int64 *v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  _QWORD *v36; // [rsp+40h] [rbp-58h]
  char v37; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v38; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v39; // [rsp+B0h] [rbp+18h]
  unsigned int v40; // [rsp+B8h] [rbp+20h]

  v1 = a1[1];
  v2 = 0;
  v3 = *a1;
  v4 = 0;
  v5 = 0;
  v7 = (__int64 *)a1[3];
  v8 = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  v9 = 0LL;
  v32 = 0;
  v37 = 0;
  v31 = 0;
  v40 = 0;
  v35 = v3;
  v36 = 0LL;
  v33 = 0LL;
  if ( *(_QWORD *)(v1 + 328) || (a1[2] & 2) != 0 )
  {
    a1[8] = (__int64)v7;
    a1[9] = a1[4];
    a1[7] = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    goto LABEL_59;
  }
  a1[7] = 0LL;
  v10 = 0;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v11 = (__int64 *)*v7;
      v12 = 0;
      *v7 = 0LL;
      v34 = v11;
      if ( *(_DWORD *)(*a1 + 464) )
        break;
      v13 = v7[1];
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 )
        goto LABEL_50;
      v15 = *(_DWORD *)(v14 + 40);
      v16 = *(unsigned int *)(v13 + 16);
      if ( v15 < 0xE || v15 <= (unsigned int)v16 )
        goto LABEL_50;
      v17 = v15 - v16;
      if ( v15 - (unsigned int)v16 < 0xE )
        goto LABEL_49;
      if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
      {
        v18 = *(char **)(v14 + 24);
      }
      else
      {
        v19 = (char *)MmMapLockedPages((PMDL)v14, 0);
        v4 = v37;
        v18 = v19;
        v5 = v31;
        v8 = v36;
      }
      v20 = &v18[v16];
      HIBYTE(v38) = v20[13];
      HIBYTE(v39) = v20[12];
      LOBYTE(v39) = HIBYTE(v38);
      LOBYTE(v38) = HIBYTE(v39);
      if ( v39 > 0x600u )
      {
        if ( v39 == 0x8100 )
        {
          if ( v15 < 0x12 || v17 < 0x12 )
          {
LABEL_48:
            v3 = v35;
            v11 = v34;
LABEL_49:
            v9 = v33;
LABEL_50:
            v36 = v7;
            if ( v8 )
            {
              *v8 = v7;
            }
            else
            {
              v9 = v7;
              v33 = v7;
            }
            ++*(_QWORD *)(v3 + 3496);
            goto LABEL_54;
          }
          v38 = *((_WORD *)v20 + 8);
        }
        v10 = v38;
        goto LABEL_24;
      }
      if ( v17 < 0x16 )
        goto LABEL_48;
      if ( v20[14] == -86 && v20[15] == -86 && v20[16] == 3 )
      {
        v10 = *((_WORD *)v20 + 10);
        goto LABEL_24;
      }
LABEL_25:
      v21 = a1[1];
      if ( v12 )
      {
        if ( v32 == v10 )
        {
          v22 = v5;
          if ( v4 == 1 )
            goto LABEL_39;
        }
        else
        {
          v23 = *(_DWORD *)(v21 + 24);
          v22 = 0;
          v32 = v10;
          if ( v23 )
          {
            v24 = (_WORD *)(v21 + 32);
            while ( v10 != *v24 )
            {
              ++v22;
              v24 += 8;
              if ( v22 >= v23 )
                goto LABEL_33;
            }
            v5 = v22;
            v31 = v22;
            v37 = 1;
LABEL_39:
            if ( LOWORD(a1[5 * v40 + 6]) == v10 )
            {
              LODWORD(v25) = v40;
            }
            else
            {
              v27 = *((_DWORD *)a1 + 172);
              LODWORD(v25) = 1;
              if ( v27 )
              {
                while ( LOWORD(a1[5 * (unsigned int)v25 + 6]) != v10 )
                {
                  LODWORD(v25) = v25 + 1;
                  if ( (unsigned int)v25 > v27 )
                    goto LABEL_44;
                }
                v40 = v25;
              }
              else
              {
LABEL_44:
                v25 = v27 + 1;
                *((_DWORD *)a1 + 172) = v25;
                v28 = 5 * v25;
                LOWORD(a1[v28 + 6]) = v10;
                v40 = v27 + 1;
                a1[v28 + 7] = *(_QWORD *)(v21 + 16 * (v22 + 1LL) + 24);
                a1[v28 + 8] = 0LL;
              }
            }
            goto LABEL_35;
          }
LABEL_33:
          v31 = 0;
          v37 = 0;
          v5 = 0;
        }
      }
      LODWORD(v25) = 0;
LABEL_35:
      v26 = &a1[5 * (unsigned int)v25];
      if ( v26[8] )
      {
        *(_QWORD *)v26[9] = v7;
        ++LODWORD(a1[5 * (unsigned int)v25 + 10]);
      }
      else
      {
        v26[8] = (__int64)v7;
        if ( (a1[2] & 0x100) != 0 )
        {
          v9 = v33;
          v29 = 5LL * (unsigned int)v25;
          a1[v29 + 9] = 0LL;
          *v7 = (__int64)v34;
          LODWORD(a1[v29 + 10]) = *((_DWORD *)a1 + 11);
          goto LABEL_59;
        }
        LODWORD(a1[5 * (unsigned int)v25 + 10]) = 1;
      }
      v3 = v35;
      v9 = v33;
      v26[9] = (__int64)v7;
      v11 = v34;
LABEL_54:
      v7 = v11;
      if ( !v11 )
        goto LABEL_59;
      v4 = v37;
      v8 = v36;
    }
    v10 = *((_WORD *)v7 + 100);
LABEL_24:
    v12 = 1;
    goto LABEL_25;
  }
LABEL_59:
  result = *((unsigned int *)a1 + 4);
  if ( (result & 2) == 0 && v9 )
  {
    if ( (result & 1) != 0 )
      v2 = 1;
    return ndisReturnNetBufferListsInternal(v35, v9, v2, 0LL);
  }
  return result;
}
