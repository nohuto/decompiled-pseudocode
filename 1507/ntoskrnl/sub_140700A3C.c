/*
 * XREFs of sub_140700A3C @ 0x140700A3C
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExReArmFastCache @ 0x1406EBBEC (ExReArmFastCache.c)
 */

__int64 __fastcall sub_140700A3C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int *v6; // rax
  unsigned int i; // ecx
  unsigned int *v8; // rdx
  __int64 *v9; // rcx
  _DWORD *v10; // r9
  unsigned int v11; // eax
  _DWORD *v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // eax
  _DWORD *v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _DWORD *PoolWithTag; // rax
  _BYTE v26[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 && a4 )
  {
    v6 = *(unsigned int **)(a1 + 8);
    if ( v6 && *(_DWORD *)a1 > 3u )
    {
      for ( i = 0; i < 3; ++i )
      {
        a3 = *v6;
        v8 = v6 + 1;
        if ( v6 + 1 < v6 )
          goto LABEL_16;
        v6 = (unsigned int *)((char *)v8 + a3);
        if ( (unsigned int *)((char *)v8 + a3) < v8 )
          goto LABEL_16;
      }
      a3 = *v6;
      v9 = (__int64 *)(v6 + 1);
      if ( v6 + 1 < v6 )
      {
LABEL_16:
        v5 = 3221225621LL;
        goto LABEL_17;
      }
      v5 = 0LL;
      if ( !(_DWORD)a3 )
        v9 = 0LL;
      if ( (_DWORD)a3 == 8 )
      {
        a2 = *v9;
        goto LABEL_17;
      }
      goto LABEL_72;
    }
    v5 = 3221225485LL;
LABEL_17:
    if ( (int)v5 >= 0 )
    {
      if ( !a2 || !qword_14077E158 )
      {
        if ( v26 != (_BYTE *)-80LL )
        {
          v10 = *(_DWORD **)(a4 + 8);
          if ( !v10 )
            goto LABEL_23;
          v12 = v10;
          v22 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v23 = *v12 + 4;
              if ( *v12 >= 0xFFFFFFFC )
                goto LABEL_62;
              if ( (_DWORD *)((char *)v12 + v23) < v12 )
                goto LABEL_25;
              ++v22;
              v12 = (_DWORD *)((char *)v12 + v23);
              if ( v22 >= *(_DWORD *)a4 )
                goto LABEL_30;
            }
          }
          goto LABEL_30;
        }
LABEL_63:
        LODWORD(v5) = -1073741811;
LABEL_64:
        if ( (int)v5 < 0 )
          return (unsigned int)v5;
        goto LABEL_65;
      }
      if ( a2 != qword_14077E158 )
      {
        if ( v26 != (_BYTE *)-80LL )
        {
          v10 = *(_DWORD **)(a4 + 8);
          if ( !v10 )
          {
LABEL_23:
            v11 = *(_DWORD *)(a4 + 4);
            if ( v11 + 8 < v11 )
            {
LABEL_24:
              *(_DWORD *)(a4 + 4) = -1;
LABEL_25:
              LODWORD(v5) = -1073741675;
              return (unsigned int)v5;
            }
            *(_DWORD *)(a4 + 4) = v11 + 8;
            ++*(_DWORD *)a4;
LABEL_65:
            if ( !*(_DWORD *)(a4 + 4) )
              goto LABEL_66;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
            if ( !PoolWithTag )
              goto LABEL_68;
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
            if ( v26 != (_BYTE *)-80LL )
            {
              if ( PoolWithTag + 1 < PoolWithTag )
                goto LABEL_25;
              LODWORD(v5) = 0;
              if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
                goto LABEL_72;
              *PoolWithTag = 4;
              PoolWithTag[1] = -2147467259;
LABEL_74:
              ++*(_DWORD *)a4;
              return (unsigned int)v5;
            }
LABEL_75:
            LODWORD(v5) = -1073741811;
            return (unsigned int)v5;
          }
          v12 = v10;
          v13 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v14 = *v12 + 4;
              if ( *v12 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v12 + v14) < v12 )
                goto LABEL_25;
              ++v13;
              v12 = (_DWORD *)((char *)v12 + v14);
              if ( v13 >= *(_DWORD *)a4 )
                goto LABEL_30;
            }
LABEL_62:
            LODWORD(v5) = -1073741675;
            goto LABEL_64;
          }
LABEL_30:
          if ( v12 + 1 < v12 )
            goto LABEL_25;
          LODWORD(v5) = 0;
          if ( v12 + 2 <= (_DWORD *)((char *)v10 + *(unsigned int *)(a4 + 4)) )
          {
            *v12 = 4;
            v12[1] = -2147467259;
            ++*(_DWORD *)a4;
            goto LABEL_64;
          }
LABEL_72:
          LODWORD(v5) = -1073741789;
          return (unsigned int)v5;
        }
        goto LABEL_63;
      }
      LODWORD(v5) = ExReArmFastCache(qword_14077E158, v5, a3, a4);
      if ( (int)v5 < 0 )
        return (unsigned int)v5;
      if ( v26 == (_BYTE *)-80LL )
      {
        LODWORD(v5) = -1073741811;
      }
      else
      {
        v15 = *(_QWORD *)(a4 + 8);
        if ( !v15 )
        {
          v16 = *(_DWORD *)(a4 + 4);
          if ( v16 + 8 < v16 )
            goto LABEL_24;
          *(_DWORD *)(a4 + 4) = v16 + 8;
          ++*(_DWORD *)a4;
          goto LABEL_48;
        }
        v17 = *(_DWORD **)(a4 + 8);
        v18 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v19 = *v17 + 4;
            if ( *v17 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v17 + v19) < v17 )
              goto LABEL_25;
            ++v18;
            v17 = (_DWORD *)((char *)v17 + v19);
            if ( v18 >= *(_DWORD *)a4 )
              goto LABEL_42;
          }
          LODWORD(v5) = -1073741675;
        }
        else
        {
LABEL_42:
          if ( v17 + 1 < v17 )
            goto LABEL_25;
          LODWORD(v5) = 0;
          if ( (unsigned __int64)(v17 + 2) > v15 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_72;
          *v17 = 4;
          v17[1] = 0;
          ++*(_DWORD *)a4;
        }
      }
      if ( (int)v5 < 0 )
        return (unsigned int)v5;
LABEL_48:
      v20 = *(_DWORD *)(a4 + 4);
      if ( !v20 )
      {
LABEL_66:
        LODWORD(v5) = -1073741762;
        return (unsigned int)v5;
      }
      v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x20534C53u);
      if ( !v21 )
      {
LABEL_68:
        LODWORD(v5) = -1073741801;
        return (unsigned int)v5;
      }
      *(_QWORD *)(a4 + 8) = v21;
      *(_DWORD *)a4 = 0;
      if ( v26 == (_BYTE *)-80LL )
        goto LABEL_75;
      if ( v21 + 1 < v21 )
        goto LABEL_25;
      LODWORD(v5) = 0;
      if ( v21 + 2 <= (_DWORD *)((char *)v21 + *(unsigned int *)(a4 + 4)) )
      {
        *v21 = 4;
        v21[1] = 0;
        goto LABEL_74;
      }
      goto LABEL_72;
    }
  }
  else
  {
    LODWORD(v5) = -1073741811;
  }
  return (unsigned int)v5;
}
