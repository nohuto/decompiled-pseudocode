/*
 * XREFs of sub_1406BF234 @ 0x1406BF234
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ClipSpInitialize_0 @ 0x140001268 (ClipSpInitialize_0.c)
 *     ClipSpUninitialize_0 @ 0x140001338 (ClipSpUninitialize_0.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BF234(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // r9
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  _DWORD *v20; // rcx
  unsigned int k; // ecx
  __int64 v22; // rax
  _DWORD *v23; // rdx
  int v24; // eax
  int v25; // esi
  int v26; // edx
  unsigned int v27; // ecx
  PVOID PoolWithTag; // rax
  int v29; // esi
  __int64 v30; // r8
  unsigned int v31; // eax
  _DWORD *v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // xmm0_8
  _BYTE v42[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]

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
      v44 = *v14;
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
      v15 = v4;
      for ( j = 0; j < 4; ++j )
      {
        v17 = *v15;
        v18 = v15 + 1;
        if ( v15 + 1 < v15 )
          goto LABEL_28;
        v15 = (unsigned int *)((char *)v18 + v17);
        if ( (unsigned int *)((char *)v18 + v17) < v18 )
          goto LABEL_28;
      }
      v19 = *v15;
      v20 = v15 + 1;
      if ( v15 + 1 < v15 )
      {
LABEL_28:
        v8 = -1073741675;
        goto LABEL_29;
      }
      v8 = 0;
      if ( !v19 )
        v20 = 0LL;
      if ( v19 == 4 )
      {
        LODWORD(v43) = *v20;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v8 = -1073741811;
LABEL_29:
    if ( v8 >= 0 )
    {
      if ( v4 && *(_DWORD *)a1 > 5u )
      {
        for ( k = 0; k < 5; ++k )
        {
          v22 = *v4;
          v23 = v4 + 1;
          if ( v4 + 1 < v4 )
            goto LABEL_40;
          v4 = (_DWORD *)((char *)v23 + v22);
          if ( (_DWORD *)((char *)v23 + v22) < v23 )
            goto LABEL_40;
        }
        if ( v4 + 1 < v4 )
        {
LABEL_40:
          v8 = -1073741675;
          goto LABEL_41;
        }
        v8 = 0;
        if ( *v4 != 4 )
          return (unsigned int)-1073741789;
      }
      else
      {
        v8 = -1073741811;
      }
LABEL_41:
      if ( v8 >= 0 )
      {
        v24 = (_DWORD)v43 ? ClipSpInitialize_0() : ClipSpUninitialize_0();
        v25 = v24;
        v8 = v24;
        if ( v24 >= 0 )
        {
          v26 = *(_DWORD *)(a2 + 32);
          if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
            return (unsigned int)-1073741675;
          v27 = *(_DWORD *)(a2 + 16) + 52;
          if ( v27 < *(_DWORD *)(a2 + 16) + 48 )
            return (unsigned int)-1073741675;
          v8 = v27 + v26 < v27 ? 0xC0000095 : 0;
          if ( v27 + v26 < v27 )
            return (unsigned int)v8;
          if ( !a4 )
            return (unsigned int)-1073741811;
          *(_DWORD *)(a4 + 4) = 20;
          v8 = 0;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          if ( PoolWithTag )
          {
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v8 = -1073741801;
          }
          if ( v8 >= 0 )
          {
            v29 = v25 | 0x10000000;
            if ( v42 == (_BYTE *)-112LL )
            {
              v8 = -1073741811;
            }
            else
            {
              v30 = *(_QWORD *)(a4 + 8);
              if ( !v30 )
              {
                v31 = *(_DWORD *)(a4 + 4);
                if ( v31 + 8 < v31 )
                  goto LABEL_59;
                *(_DWORD *)(a4 + 4) = v31 + 8;
                ++*(_DWORD *)a4;
LABEL_72:
                v43 = v44;
                if ( v42 == (_BYTE *)-32LL )
                  return (unsigned int)-1073741811;
                v36 = *(_QWORD *)(a4 + 8);
                if ( v36 )
                {
                  v38 = *(_QWORD *)(a4 + 8);
                  v39 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v40 = *(_DWORD *)v38 + 4;
                      if ( *(_DWORD *)v38 >= 0xFFFFFFFC || v38 + v40 < v38 )
                        break;
                      ++v39;
                      v38 += v40;
                      if ( v39 >= *(_DWORD *)a4 )
                        goto LABEL_80;
                    }
                  }
                  else
                  {
LABEL_80:
                    if ( v38 + 4 >= v38 )
                    {
                      v8 = 0;
                      if ( v38 + 12 <= v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        v41 = v43;
                        *(_DWORD *)v38 = 8;
                        *(_QWORD *)(v38 + 4) = v41;
                        ++*(_DWORD *)a4;
                        return (unsigned int)v8;
                      }
                      return (unsigned int)-1073741789;
                    }
                  }
                  return (unsigned int)-1073741675;
                }
                v37 = *(_DWORD *)(a4 + 4);
                if ( v37 + 12 >= v37 )
                {
                  *(_DWORD *)(a4 + 4) = v37 + 12;
                  v8 = 0;
                  ++*(_DWORD *)a4;
                  return (unsigned int)v8;
                }
LABEL_59:
                *(_DWORD *)(a4 + 4) = -1;
                return (unsigned int)-1073741675;
              }
              v33 = *(_DWORD **)(a4 + 8);
              v34 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v35 = *v33 + 4;
                  if ( *v33 >= 0xFFFFFFFC )
                    break;
                  if ( (_DWORD *)((char *)v33 + v35) < v33 )
                    return (unsigned int)-1073741675;
                  ++v34;
                  v33 = (_DWORD *)((char *)v33 + v35);
                  if ( v34 >= *(_DWORD *)a4 )
                    goto LABEL_66;
                }
                v8 = -1073741675;
              }
              else
              {
LABEL_66:
                if ( v33 + 1 < v33 )
                  return (unsigned int)-1073741675;
                v8 = 0;
                if ( (unsigned __int64)(v33 + 2) > v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *v33 = 4;
                v33[1] = v29;
                ++*(_DWORD *)a4;
              }
            }
            if ( v8 < 0 )
              return (unsigned int)v8;
            goto LABEL_72;
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
