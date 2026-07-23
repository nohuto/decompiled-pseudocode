/*
 * XREFs of sub_1406C029C @ 0x1406C029C
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C029C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  unsigned int *v6; // rax
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned int v10; // r8d
  __int64 *v11; // rcx
  _DWORD *v12; // r9
  unsigned int v13; // eax
  _DWORD *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // eax
  _DWORD *v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  _DWORD *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  _DWORD *PoolWithTag; // rax
  _BYTE v28[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 && a4 )
  {
    v6 = *(unsigned int **)(a1 + 8);
    if ( v6 && *(_DWORD *)a1 > 3u )
    {
      for ( i = 0; i < 3; ++i )
      {
        v8 = *v6;
        v9 = v6 + 1;
        if ( v6 + 1 < v6 )
          goto LABEL_16;
        v6 = (unsigned int *)((char *)v9 + v8);
        if ( (unsigned int *)((char *)v9 + v8) < v9 )
          goto LABEL_16;
      }
      v10 = *v6;
      v11 = (__int64 *)(v6 + 1);
      if ( v6 + 1 < v6 )
      {
LABEL_16:
        v5 = -1073741675;
        goto LABEL_17;
      }
      v5 = 0;
      if ( !v10 )
        v11 = 0LL;
      if ( v10 == 8 )
      {
        a2 = *v11;
        goto LABEL_17;
      }
      return (unsigned int)-1073741789;
    }
    v5 = -1073741811;
LABEL_17:
    if ( v5 >= 0 )
    {
      if ( !a2 || !qword_140747160 )
      {
        if ( v28 != (_BYTE *)-80LL )
        {
          v12 = *(_DWORD **)(a4 + 8);
          if ( !v12 )
            goto LABEL_23;
          v14 = v12;
          v24 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v25 = *v14 + 4;
              if ( *v14 >= 0xFFFFFFFC )
                goto LABEL_62;
              if ( (_DWORD *)((char *)v14 + v25) < v14 )
                return (unsigned int)-1073741675;
              ++v24;
              v14 = (_DWORD *)((char *)v14 + v25);
              if ( v24 >= *(_DWORD *)a4 )
                goto LABEL_30;
            }
          }
          goto LABEL_30;
        }
LABEL_63:
        v5 = -1073741811;
LABEL_64:
        if ( v5 < 0 )
          return (unsigned int)v5;
        goto LABEL_65;
      }
      if ( a2 != qword_140747160 )
      {
        if ( v28 != (_BYTE *)-80LL )
        {
          v12 = *(_DWORD **)(a4 + 8);
          if ( !v12 )
          {
LABEL_23:
            v13 = *(_DWORD *)(a4 + 4);
            if ( v13 + 8 < v13 )
            {
LABEL_24:
              *(_DWORD *)(a4 + 4) = -1;
              return (unsigned int)-1073741675;
            }
            *(_DWORD *)(a4 + 4) = v13 + 8;
            ++*(_DWORD *)a4;
LABEL_65:
            if ( !*(_DWORD *)(a4 + 4) )
              return (unsigned int)-1073741762;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741801;
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
            if ( v28 != (_BYTE *)-80LL )
            {
              if ( PoolWithTag + 1 < PoolWithTag )
                return (unsigned int)-1073741675;
              v5 = 0;
              if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
                return (unsigned int)-1073741789;
              *PoolWithTag = 4;
              PoolWithTag[1] = -2147467259;
LABEL_74:
              ++*(_DWORD *)a4;
              return (unsigned int)v5;
            }
            return (unsigned int)-1073741811;
          }
          v14 = v12;
          v15 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v16 = *v14 + 4;
              if ( *v14 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v14 + v16) < v14 )
                return (unsigned int)-1073741675;
              ++v15;
              v14 = (_DWORD *)((char *)v14 + v16);
              if ( v15 >= *(_DWORD *)a4 )
                goto LABEL_30;
            }
LABEL_62:
            v5 = -1073741675;
            goto LABEL_64;
          }
LABEL_30:
          if ( v14 + 1 < v14 )
            return (unsigned int)-1073741675;
          v5 = 0;
          if ( v14 + 2 <= (_DWORD *)((char *)v12 + *(unsigned int *)(a4 + 4)) )
          {
            *v14 = 4;
            v14[1] = -2147467259;
            ++*(_DWORD *)a4;
            goto LABEL_64;
          }
          return (unsigned int)-1073741789;
        }
        goto LABEL_63;
      }
      v5 = qword_140747450();
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( v28 == (_BYTE *)-80LL )
      {
        v5 = -1073741811;
      }
      else
      {
        v17 = *(_QWORD *)(a4 + 8);
        if ( !v17 )
        {
          v18 = *(_DWORD *)(a4 + 4);
          if ( v18 + 8 < v18 )
            goto LABEL_24;
          *(_DWORD *)(a4 + 4) = v18 + 8;
          ++*(_DWORD *)a4;
          goto LABEL_48;
        }
        v19 = *(_DWORD **)(a4 + 8);
        v20 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v21 = *v19 + 4;
            if ( *v19 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v19 + v21) < v19 )
              return (unsigned int)-1073741675;
            ++v20;
            v19 = (_DWORD *)((char *)v19 + v21);
            if ( v20 >= *(_DWORD *)a4 )
              goto LABEL_42;
          }
          v5 = -1073741675;
        }
        else
        {
LABEL_42:
          if ( v19 + 1 < v19 )
            return (unsigned int)-1073741675;
          v5 = 0;
          if ( (unsigned __int64)(v19 + 2) > v17 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *v19 = 4;
          v19[1] = 0;
          ++*(_DWORD *)a4;
        }
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
LABEL_48:
      v22 = *(_DWORD *)(a4 + 4);
      if ( !v22 )
        return (unsigned int)-1073741762;
      v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x20534C53u);
      if ( !v23 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v23;
      *(_DWORD *)a4 = 0;
      if ( v28 == (_BYTE *)-80LL )
        return (unsigned int)-1073741811;
      if ( v23 + 1 < v23 )
        return (unsigned int)-1073741675;
      v5 = 0;
      if ( v23 + 2 <= (_DWORD *)((char *)v23 + *(unsigned int *)(a4 + 4)) )
      {
        *v23 = 4;
        v23[1] = 0;
        goto LABEL_74;
      }
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
