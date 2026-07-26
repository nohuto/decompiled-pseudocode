/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0002E60
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C0062E18 (ndisReturnNetBufferListsInternal.c)
 */

__int64 __fastcall ndisSortNetBufferLists(__int64 *a1)
{
  __int64 v1; // r14
  unsigned int v2; // edi
  __int64 *v3; // rdx
  int v5; // r8d
  char v6; // si
  unsigned int v7; // ebp
  unsigned int v8; // r11d
  __int64 v9; // rax
  _QWORD *v10; // r10
  __int64 *v11; // r15
  unsigned __int16 v12; // r13
  __int64 *v13; // r9
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ebp
  char *v19; // r8
  char *v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r10d
  _WORD *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 result; // rax
  char *v30; // rax
  unsigned int v31; // [rsp+20h] [rbp-78h]
  unsigned int v32; // [rsp+24h] [rbp-74h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  __int64 *v34; // [rsp+30h] [rbp-68h]
  _QWORD *v35; // [rsp+38h] [rbp-60h]
  __int64 *v36; // [rsp+40h] [rbp-58h]
  char v37; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v38; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v1 = *a1;
  v2 = 0;
  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a1[1];
  v10 = 0LL;
  v11 = (__int64 *)a1[3];
  *((_DWORD *)a1 + 172) = 0;
  v40 = 0;
  v37 = 0;
  v31 = 0;
  v32 = 0;
  v33 = v1;
  v35 = 0LL;
  v34 = 0LL;
  if ( *(_QWORD *)(v9 + 328) || (a1[2] & 2) != 0 )
  {
    a1[8] = (__int64)v11;
    a1[9] = a1[4];
    a1[7] = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
  }
  else
  {
    a1[7] = 0LL;
    v12 = 0;
    a1[8] = 0LL;
    a1[9] = 0LL;
    *((_WORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 20) = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = (__int64 *)*v11;
        v14 = 0;
        *v11 = 0LL;
        v36 = v13;
        if ( !*(_DWORD *)(*a1 + 464) )
          break;
        v12 = *((_WORD *)v11 + 100);
        v14 = 1;
LABEL_15:
        v21 = a1[1];
        if ( !v14 )
          goto LABEL_39;
        if ( v5 != v12 )
        {
          v22 = *(_DWORD *)(v21 + 24);
          v23 = 0;
          v40 = v12;
          if ( v22 )
          {
            v24 = (_WORD *)(v21 + 32);
            while ( v12 != *v24 )
            {
              ++v23;
              v24 += 8;
              if ( v23 >= v22 )
                goto LABEL_38;
            }
            v6 = 1;
            v31 = v23;
            v37 = 1;
            v7 = v23;
LABEL_21:
            if ( LOWORD(a1[5 * v8 + 6]) == v12 )
            {
              LODWORD(v26) = v8;
            }
            else
            {
              v25 = *((_DWORD *)a1 + 172);
              LODWORD(v26) = 1;
              if ( v25 )
              {
                while ( LOWORD(a1[5 * (unsigned int)v26 + 6]) != v12 )
                {
                  LODWORD(v26) = v26 + 1;
                  if ( (unsigned int)v26 > v25 )
                    goto LABEL_23;
                }
                v13 = v36;
                v8 = v26;
                v32 = v26;
              }
              else
              {
LABEL_23:
                v26 = v25 + 1;
                v13 = v36;
                v27 = 5 * v26;
                *((_DWORD *)a1 + 172) = v26;
                LOWORD(a1[v27 + 6]) = v12;
                v8 = v26;
                v32 = v26;
                a1[v27 + 7] = *(_QWORD *)(v21 + 16 * (v23 + 1LL) + 24);
                a1[v27 + 8] = 0LL;
              }
            }
            goto LABEL_24;
          }
LABEL_38:
          v6 = 0;
          v31 = 0;
          v37 = 0;
          v7 = 0;
LABEL_39:
          LODWORD(v26) = 0;
          goto LABEL_24;
        }
        v23 = v7;
        if ( v6 == 1 )
          goto LABEL_21;
        LODWORD(v26) = 0;
LABEL_24:
        v28 = &a1[5 * (unsigned int)v26];
        if ( v28[8] )
        {
          *(_QWORD *)v28[9] = v11;
          ++LODWORD(a1[5 * (unsigned int)v26 + 10]);
        }
        else
        {
          v28[8] = (__int64)v11;
          if ( (a1[2] & 0x100) != 0 )
          {
            v3 = v34;
            a1[5 * (unsigned int)v26 + 9] = 0LL;
            *v11 = (__int64)v13;
            LODWORD(a1[5 * (unsigned int)v26 + 10]) = *((_DWORD *)a1 + 11);
            goto LABEL_29;
          }
          LODWORD(a1[5 * (unsigned int)v26 + 10]) = 1;
        }
        v5 = v40;
        v28[9] = (__int64)v11;
        v3 = v34;
LABEL_28:
        v11 = v13;
        if ( !v13 )
          goto LABEL_29;
        v10 = v35;
      }
      v15 = v11[1];
      v16 = *(_QWORD *)(v15 + 8);
      v17 = *(unsigned int *)(v15 + 16);
      v18 = *(_DWORD *)(v16 + 40);
      if ( v18 < 0xE || v18 <= (unsigned int)v17 )
        goto LABEL_56;
      if ( v18 - (unsigned int)v17 < 0xE )
        goto LABEL_55;
      if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
      {
        v19 = *(char **)(v16 + 24);
      }
      else
      {
        v30 = (char *)MmMapLockedPages((PMDL)v16, 0);
        v13 = v36;
        v19 = v30;
        v8 = v32;
        v10 = v35;
      }
      v20 = &v19[v17];
      HIBYTE(v38) = v20[13];
      HIBYTE(v39) = v20[12];
      LOBYTE(v39) = HIBYTE(v38);
      LOBYTE(v38) = HIBYTE(v39);
      if ( v39 <= 0x600u )
      {
        if ( v20[14] == -86 && v20[15] == -86 )
        {
          v6 = v37;
          v7 = v31;
          v1 = v33;
          if ( v20[16] == 3 )
          {
            v12 = *((_WORD *)v20 + 10);
            v14 = 1;
          }
          goto LABEL_14;
        }
      }
      else
      {
        if ( v39 == 0x8100 )
        {
          if ( v18 < 0x12 || v18 - (unsigned int)v17 < 0x12 )
          {
            v3 = v34;
            v5 = v40;
LABEL_55:
            v1 = v33;
LABEL_56:
            v35 = v11;
            if ( v10 )
            {
              *v10 = v11;
            }
            else
            {
              v3 = v11;
              v34 = v11;
            }
            ++*(_QWORD *)(v1 + 3496);
            v6 = v37;
            v7 = v31;
            goto LABEL_28;
          }
          v38 = *((_WORD *)v20 + 8);
        }
        v12 = v38;
        v14 = 1;
      }
      v6 = v37;
      v7 = v31;
      v1 = v33;
LABEL_14:
      v5 = v40;
      goto LABEL_15;
    }
  }
LABEL_29:
  result = *((unsigned int *)a1 + 4);
  if ( (result & 2) == 0 && v3 )
  {
    if ( (result & 1) != 0 )
      v2 = 1;
    return ndisReturnNetBufferListsInternal(v1, v3, v2, 0LL);
  }
  return result;
}
