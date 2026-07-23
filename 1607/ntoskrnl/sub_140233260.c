/*
 * XREFs of sub_140233260 @ 0x140233260
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140233260(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  int *v19; // rax
  PVOID PoolWithTag; // r14
  int v21; // esi
  int v22; // edx
  unsigned int v23; // ecx
  PVOID v24; // rax
  int v25; // esi
  __int64 v26; // r8
  unsigned int v27; // eax
  _DWORD *v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // eax
  unsigned __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // xmm0_8
  __int64 v38; // r9
  unsigned int v39; // eax
  _DWORD *v40; // rdx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  _OWORD *v43; // r8
  __int64 v44; // rcx
  _OWORD *v45; // rax
  __int128 v46; // xmm1
  __int64 v47; // r8
  unsigned int v48; // eax
  _DWORD *v49; // rdx
  unsigned int k; // ecx
  unsigned int v51; // eax
  _BYTE v52[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+20h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_14;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_14;
    }
    v13 = *v9;
    v14 = (__int64 *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_14:
      v8 = -1073741675;
      goto LABEL_15;
    }
    v8 = 0;
    if ( !v13 )
      v14 = 0LL;
    if ( v13 == 8 )
    {
      v53 = *v14;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_15:
  if ( v8 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v4;
        v17 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_28;
        v4 = (unsigned int *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_28;
      }
      v18 = *v4;
      v19 = (int *)(v4 + 1);
      if ( v4 + 1 < v4 )
      {
LABEL_28:
        v8 = -1073741675;
        goto LABEL_29;
      }
      v8 = 0;
      if ( !v18 )
        v19 = 0LL;
      if ( v18 == 4 )
      {
        a3 = *v19;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v8 = -1073741811;
LABEL_29:
    if ( v8 >= 0 )
    {
      if ( a3 != 4104 )
        return (unsigned int)-1073741762;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      if ( qword_140747358 )
        v21 = qword_140747358(PoolWithTag);
      else
        v21 = -1073741637;
      v8 = v21;
      if ( v21 < 0 )
        goto LABEL_53;
      v22 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0 )
        goto LABEL_52;
      v23 = *(_DWORD *)(a2 + 16) + 4164;
      if ( v23 < *(_DWORD *)(a2 + 16) + 4160 )
        goto LABEL_52;
      v8 = v23 + v22 < v23 ? 0xC0000095 : 0;
      if ( v23 + v22 < v23 )
      {
LABEL_53:
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
        return (unsigned int)v8;
      }
      if ( !a4 )
      {
LABEL_42:
        v8 = -1073741811;
        goto LABEL_53;
      }
      *(_DWORD *)(a4 + 4) = 4136;
      v8 = 0;
      v24 = ExAllocatePoolWithTag(PagedPool, 0x1028uLL, 0x20534C53u);
      if ( v24 )
      {
        *(_QWORD *)(a4 + 8) = v24;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v8 = -1073741801;
      }
      if ( v8 < 0 )
        goto LABEL_53;
      v25 = v21 | 0x10000000;
      if ( v52 == (_BYTE *)-112LL )
      {
        v8 = -1073741811;
      }
      else
      {
        v26 = *(_QWORD *)(a4 + 8);
        if ( !v26 )
        {
          v27 = *(_DWORD *)(a4 + 4);
          if ( v27 + 8 < v27 )
            goto LABEL_51;
          *(_DWORD *)(a4 + 4) = v27 + 8;
          ++*(_DWORD *)a4;
LABEL_66:
          if ( v52 == (_BYTE *)-32LL )
          {
            v8 = -1073741811;
          }
          else
          {
            v32 = *(_QWORD *)(a4 + 8);
            if ( !v32 )
            {
              v33 = *(_DWORD *)(a4 + 4);
              if ( v33 + 12 < v33 )
                goto LABEL_51;
              *(_DWORD *)(a4 + 4) = v33 + 12;
              ++*(_DWORD *)a4;
              goto LABEL_80;
            }
            v34 = *(_QWORD *)(a4 + 8);
            v35 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v36 = *(_DWORD *)v34 + 4;
                if ( *(_DWORD *)v34 >= 0xFFFFFFFC )
                  break;
                if ( v34 + v36 < v34 )
                  goto LABEL_52;
                ++v35;
                v34 += v36;
                if ( v35 >= *(_DWORD *)a4 )
                  goto LABEL_74;
              }
              v8 = -1073741675;
            }
            else
            {
LABEL_74:
              if ( v34 + 4 < v34 )
                goto LABEL_52;
              v8 = 0;
              if ( v34 + 12 > v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_61;
              v37 = v53;
              *(_DWORD *)v34 = 8;
              *(_QWORD *)(v34 + 4) = v37;
              ++*(_DWORD *)a4;
            }
          }
          if ( v8 < 0 )
            goto LABEL_53;
LABEL_80:
          v38 = *(_QWORD *)(a4 + 8);
          if ( v38 )
          {
            v40 = *(_DWORD **)(a4 + 8);
            v41 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v42 = *v40 + 4;
                if ( *v40 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v40 + v42) < v40 )
                  goto LABEL_52;
                ++v41;
                v40 = (_DWORD *)((char *)v40 + v42);
                if ( v41 >= *(_DWORD *)a4 )
                  goto LABEL_87;
              }
              v8 = -1073741675;
            }
            else
            {
LABEL_87:
              v43 = v40 + 1;
              if ( v40 + 1 < v40 )
                goto LABEL_52;
              v8 = 0;
              if ( (unsigned __int64)(v40 + 1027) > v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_61;
              v44 = 32LL;
              *v40 = 4104;
              v45 = PoolWithTag;
              do
              {
                *v43 = *v45;
                v43[1] = v45[1];
                v43[2] = v45[2];
                v43[3] = v45[3];
                v43[4] = v45[4];
                v43[5] = v45[5];
                v43[6] = v45[6];
                v43 += 8;
                v46 = v45[7];
                v45 += 8;
                *(v43 - 1) = v46;
                --v44;
              }
              while ( v44 );
              *(_QWORD *)v43 = *(_QWORD *)v45;
              ++*(_DWORD *)a4;
            }
            if ( v8 < 0 )
              goto LABEL_53;
            goto LABEL_93;
          }
          v39 = *(_DWORD *)(a4 + 4);
          if ( v39 + 4108 >= v39 )
          {
            *(_DWORD *)(a4 + 4) = v39 + 4108;
            ++*(_DWORD *)a4;
LABEL_93:
            if ( v52 == (_BYTE *)-112LL )
              goto LABEL_42;
            v47 = *(_QWORD *)(a4 + 8);
            if ( !v47 )
            {
              v48 = *(_DWORD *)(a4 + 4);
              if ( v48 + 8 >= v48 )
              {
                *(_DWORD *)(a4 + 4) = v48 + 8;
                v8 = 0;
                ++*(_DWORD *)a4;
                goto LABEL_53;
              }
              goto LABEL_51;
            }
            v49 = *(_DWORD **)(a4 + 8);
            for ( k = 0; k < *(_DWORD *)a4; v49 = (_DWORD *)((char *)v49 + v51) )
            {
              v51 = *v49 + 4;
              if ( *v49 >= 0xFFFFFFFC || (_DWORD *)((char *)v49 + v51) < v49 )
                goto LABEL_52;
              ++k;
            }
            if ( v49 + 1 < v49 )
            {
LABEL_52:
              v8 = -1073741675;
              goto LABEL_53;
            }
            v8 = 0;
            if ( (unsigned __int64)(v49 + 2) <= v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v49 = 4;
              v49[1] = 4104;
              ++*(_DWORD *)a4;
              goto LABEL_53;
            }
LABEL_61:
            v8 = -1073741789;
            goto LABEL_53;
          }
LABEL_51:
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_52;
        }
        v29 = *(_DWORD **)(a4 + 8);
        v30 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v31 = *v29 + 4;
            if ( *v29 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v29 + v31) < v29 )
              goto LABEL_52;
            ++v30;
            v29 = (_DWORD *)((char *)v29 + v31);
            if ( v30 >= *(_DWORD *)a4 )
              goto LABEL_59;
          }
          v8 = -1073741675;
        }
        else
        {
LABEL_59:
          if ( v29 + 1 < v29 )
            goto LABEL_52;
          v8 = 0;
          if ( (unsigned __int64)(v29 + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_61;
          *v29 = 4;
          v29[1] = v25;
          ++*(_DWORD *)a4;
        }
      }
      if ( v8 < 0 )
        goto LABEL_53;
      goto LABEL_66;
    }
  }
  return (unsigned int)v8;
}
