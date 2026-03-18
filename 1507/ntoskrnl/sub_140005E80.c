/*
 * XREFs of sub_140005E80 @ 0x140005E80
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140005E80(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  __int64 *v13; // rcx
  signed int v14; // ebx
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  int *v19; // rax
  _OWORD *PoolWithTag; // r14
  int v21; // esi
  int v22; // edx
  unsigned int v23; // ecx
  PVOID v24; // rax
  int v25; // esi
  __int64 v26; // r8
  _DWORD *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // xmm0_8
  __int64 v34; // r9
  _DWORD *v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  _OWORD *v38; // r8
  __int64 v39; // rcx
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  __int64 v42; // r8
  _DWORD *v43; // rdx
  unsigned int k; // ecx
  unsigned int v45; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  _BYTE v52[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+20h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v8 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_80;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_80;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_80:
      v14 = -1073741675;
      goto LABEL_12;
    }
    v14 = 0;
    if ( !v12 )
      v13 = 0LL;
    if ( v12 == 8 )
    {
      v53 = *v13;
      goto LABEL_12;
    }
    return (unsigned int)-1073741789;
  }
  v14 = -1073741811;
LABEL_12:
  if ( v14 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v4;
        v17 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_82;
        v4 = (unsigned int *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_82;
      }
      v18 = *v4;
      v19 = (int *)(v4 + 1);
      if ( v4 + 1 < v4 )
      {
LABEL_82:
        v14 = -1073741675;
        goto LABEL_24;
      }
      v14 = 0;
      if ( !v18 )
        v19 = 0LL;
      if ( v18 == 4 )
      {
        a3 = *v19;
        goto LABEL_24;
      }
      return (unsigned int)-1073741789;
    }
    v14 = -1073741811;
LABEL_24:
    if ( v14 >= 0 )
    {
      if ( a3 != 4104 )
        return (unsigned int)-1073741762;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      if ( qword_14077E358 )
        v21 = qword_14077E358(PoolWithTag);
      else
        v21 = -1073741637;
      v14 = v21;
      if ( v21 < 0 )
        goto LABEL_74;
      v22 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0 )
        goto LABEL_77;
      v23 = *(_DWORD *)(a2 + 16) + 4164;
      if ( v23 < *(_DWORD *)(a2 + 16) + 4160 )
        goto LABEL_77;
      v14 = v23 + v22 < v23 ? 0xC0000095 : 0;
      if ( v23 + v22 < v23 )
        goto LABEL_74;
      if ( !a4 )
        goto LABEL_86;
      *(_DWORD *)(a4 + 4) = 4136;
      v14 = 0;
      v24 = ExAllocatePoolWithTag(PagedPool, 0x1028uLL, 0x20534C53u);
      if ( v24 )
      {
        *(_QWORD *)(a4 + 8) = v24;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v14 = -1073741801;
      }
      if ( v14 < 0 )
        goto LABEL_74;
      v25 = v21 | 0x10000000;
      if ( v52 == (_BYTE *)-112LL )
      {
        v14 = -1073741811;
      }
      else
      {
        v26 = *(_QWORD *)(a4 + 8);
        if ( !v26 )
        {
          v47 = *(_DWORD *)(a4 + 4);
          if ( v47 + 8 < v47 )
            goto LABEL_90;
          *(_DWORD *)(a4 + 4) = v47 + 8;
          ++*(_DWORD *)a4;
          goto LABEL_44;
        }
        v27 = *(_DWORD **)(a4 + 8);
        v28 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v48 = *v27 + 4;
            if ( *v27 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v27 + v48) < v27 )
              goto LABEL_77;
            ++v28;
            v27 = (_DWORD *)((char *)v27 + v48);
            if ( v28 >= *(_DWORD *)a4 )
              goto LABEL_40;
          }
          v14 = -1073741675;
        }
        else
        {
LABEL_40:
          if ( v27 + 1 < v27 )
            goto LABEL_77;
          v14 = 0;
          if ( (unsigned __int64)(v27 + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_76;
          *v27 = 4;
          v27[1] = v25;
          ++*(_DWORD *)a4;
        }
      }
      if ( v14 < 0 )
        goto LABEL_74;
LABEL_44:
      if ( v52 == (_BYTE *)-32LL )
      {
        v14 = -1073741811;
      }
      else
      {
        v29 = *(_QWORD *)(a4 + 8);
        if ( !v29 )
        {
          v49 = *(_DWORD *)(a4 + 4);
          if ( v49 + 12 < v49 )
            goto LABEL_90;
          *(_DWORD *)(a4 + 4) = v49 + 12;
          ++*(_DWORD *)a4;
LABEL_54:
          v34 = *(_QWORD *)(a4 + 8);
          if ( !v34 )
          {
            v50 = *(_DWORD *)(a4 + 4);
            if ( v50 + 4108 < v50 )
              goto LABEL_90;
            *(_DWORD *)(a4 + 4) = v50 + 4108;
            ++*(_DWORD *)a4;
LABEL_65:
            if ( v52 != (_BYTE *)-112LL )
            {
              v42 = *(_QWORD *)(a4 + 8);
              if ( v42 )
              {
                v43 = *(_DWORD **)(a4 + 8);
                for ( k = 0; k < *(_DWORD *)a4; v43 = (_DWORD *)((char *)v43 + v45) )
                {
                  v45 = *v43 + 4;
                  if ( *v43 >= 0xFFFFFFFC || (_DWORD *)((char *)v43 + v45) < v43 )
                    goto LABEL_77;
                  ++k;
                }
                if ( v43 + 1 >= v43 )
                {
                  v14 = 0;
                  if ( (unsigned __int64)(v43 + 2) <= v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *v43 = 4;
                    v43[1] = 4104;
                    ++*(_DWORD *)a4;
                    goto LABEL_74;
                  }
LABEL_76:
                  v14 = -1073741789;
                  goto LABEL_74;
                }
LABEL_77:
                v14 = -1073741675;
                goto LABEL_74;
              }
              v51 = *(_DWORD *)(a4 + 4);
              if ( v51 + 8 >= v51 )
              {
                *(_DWORD *)(a4 + 4) = v51 + 8;
                v14 = 0;
                ++*(_DWORD *)a4;
                goto LABEL_74;
              }
LABEL_90:
              *(_DWORD *)(a4 + 4) = -1;
              goto LABEL_77;
            }
LABEL_86:
            v14 = -1073741811;
            goto LABEL_74;
          }
          v35 = *(_DWORD **)(a4 + 8);
          v36 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v37 = *v35 + 4;
              if ( *v35 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v35 + v37) < v35 )
                goto LABEL_77;
              ++v36;
              v35 = (_DWORD *)((char *)v35 + v37);
              if ( v36 >= *(_DWORD *)a4 )
                goto LABEL_59;
            }
            v14 = -1073741675;
          }
          else
          {
LABEL_59:
            v38 = v35 + 1;
            if ( v35 + 1 < v35 )
              goto LABEL_77;
            v14 = 0;
            if ( (unsigned __int64)(v35 + 1027) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_76;
            v39 = 32LL;
            *v35 = 4104;
            v40 = PoolWithTag;
            do
            {
              *v38 = *v40;
              v38[1] = v40[1];
              v38[2] = v40[2];
              v38[3] = v40[3];
              v38[4] = v40[4];
              v38[5] = v40[5];
              v38[6] = v40[6];
              v38 += 8;
              v41 = v40[7];
              v40 += 8;
              *(v38 - 1) = v41;
              --v39;
            }
            while ( v39 );
            *(_QWORD *)v38 = *(_QWORD *)v40;
            ++*(_DWORD *)a4;
          }
          if ( v14 >= 0 )
            goto LABEL_65;
LABEL_74:
          ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
          return (unsigned int)v14;
        }
        v30 = *(_QWORD *)(a4 + 8);
        v31 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v32 = *(_DWORD *)v30 + 4;
            if ( *(_DWORD *)v30 >= 0xFFFFFFFC )
              break;
            if ( v30 + v32 < v30 )
              goto LABEL_77;
            ++v31;
            v30 += v32;
            if ( v31 >= *(_DWORD *)a4 )
              goto LABEL_50;
          }
          v14 = -1073741675;
        }
        else
        {
LABEL_50:
          if ( v30 + 4 < v30 )
            goto LABEL_77;
          v14 = 0;
          if ( v30 + 12 > v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_76;
          v33 = v53;
          *(_DWORD *)v30 = 8;
          *(_QWORD *)(v30 + 4) = v33;
          ++*(_DWORD *)a4;
        }
      }
      if ( v14 < 0 )
        goto LABEL_74;
      goto LABEL_54;
    }
  }
  return (unsigned int)v14;
}
