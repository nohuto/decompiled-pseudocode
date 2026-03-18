/*
 * XREFs of sub_140701190 @ 0x140701190
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406ECA08 (ExUpdateOsPfnInRegistry.c)
 */

__int64 __fastcall sub_140701190(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // ebx
  const wchar_t *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // r8
  unsigned int v12; // r8d
  size_t *v13; // rdx
  unsigned int j; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  size_t v17; // rdx
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  size_t v22; // rbx
  PVOID PoolWithTag; // rax
  void *v24; // r12
  unsigned int k; // ecx
  __int64 v26; // r8
  unsigned int *v27; // rdx
  size_t v28; // rcx
  const wchar_t *v29; // rsi
  int updated; // esi
  __int64 v31; // r15
  unsigned int v32; // eax
  size_t v33; // rsi
  PVOID v34; // rax
  void *v35; // rbx
  _DWORD *v36; // rax
  int v37; // esi
  __int64 v38; // r8
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  size_t v43; // xmm0_8
  size_t v45; // [rsp+20h] [rbp-10h] BYREF
  size_t v46; // [rsp+28h] [rbp-8h]
  size_t pcbLength; // [rsp+70h] [rbp+40h] BYREF
  int v48; // [rsp+80h] [rbp+50h] BYREF

  v48 = a3;
  if ( a1 && a2 && a4 )
  {
    v7 = *(const wchar_t **)(a1 + 8);
    if ( v7 && *(_DWORD *)a1 > 3u )
    {
      v8 = (unsigned int *)v7;
      for ( i = 0; i < 3; ++i )
      {
        v10 = *v8;
        v11 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_17;
        v8 = (unsigned int *)((char *)v11 + v10);
        if ( (unsigned int *)((char *)v11 + v10) < v11 )
          goto LABEL_17;
      }
      v12 = *v8;
      v13 = (size_t *)(v8 + 1);
      if ( v8 + 1 < v8 )
      {
LABEL_17:
        v6 = -1073741675;
        goto LABEL_18;
      }
      v6 = 0;
      if ( !v12 )
        v13 = 0LL;
      if ( v12 == 8 )
      {
        v46 = *v13;
        goto LABEL_18;
      }
      return (unsigned int)-1073741789;
    }
    v6 = -1073741811;
LABEL_18:
    if ( v6 >= 0 )
    {
      if ( v7 && *(_DWORD *)a1 > 4u )
      {
        for ( j = 0; j < 4; ++j )
        {
          v15 = *(unsigned int *)v7;
          v16 = (unsigned int *)(v7 + 2);
          if ( v7 + 2 < v7 )
            goto LABEL_38;
          v7 = (const wchar_t *)((char *)v16 + v15);
          if ( (unsigned int *)((char *)v16 + v15) < v16 )
            goto LABEL_38;
        }
        v17 = *(unsigned int *)v7;
        v18 = (size_t)(v7 + 2);
        if ( v7 + 2 < v7 )
        {
LABEL_38:
          v6 = -1073741675;
          goto LABEL_39;
        }
        v6 = 0;
        if ( !(_DWORD)v17 || (v17 & 1) != 0 )
          return (unsigned int)-1073741762;
        v20 = *(unsigned int *)v7;
        if ( *(_WORD *)(v18 + 2 * (v17 >> 1) - 2) )
          return (unsigned int)-1073741762;
        if ( StringCbLengthW(v7 + 2, v17, &pcbLength) < 0 || pcbLength + 2 != v20 )
          return (unsigned int)-1073741762;
        v48 = pcbLength >> 1;
        pcbLength = v18;
      }
      else
      {
        v6 = -1073741811;
      }
LABEL_39:
      if ( v6 < 0 )
        return (unsigned int)v6;
      v21 = 2 * v48 + 2;
      if ( 2 * v48 != -2 )
      {
        v22 = v21;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x20534C53u);
        v24 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memmove(PoolWithTag, (const void *)pcbLength, v22);
        LODWORD(pcbLength) = v48;
        v19 = *(unsigned int **)(a1 + 8);
        if ( v19 && *(_DWORD *)a1 > 5u )
        {
          for ( k = 0; k < 5; ++k )
          {
            v26 = *v19;
            v27 = v19 + 1;
            if ( v19 + 1 < v19 )
              goto LABEL_61;
            v19 = (unsigned int *)((char *)v27 + v26);
            if ( (unsigned int *)((char *)v27 + v26) < v27 )
              goto LABEL_61;
          }
          v28 = *v19;
          v29 = (const wchar_t *)(v19 + 1);
          if ( v19 + 1 < v19 )
          {
LABEL_61:
            v6 = -1073741675;
            goto LABEL_62;
          }
          v6 = 0;
          if ( !(_DWORD)v28 || (v28 & 1) != 0 )
            return (unsigned int)-1073741762;
          v31 = *v19;
          if ( v29[(v28 >> 1) - 1] || StringCbLengthW(v29, v28, &v45) < 0 || v45 + 2 != v31 )
            return (unsigned int)-1073741762;
          v48 = v45 >> 1;
          v45 = (size_t)v29;
        }
        else
        {
          v6 = -1073741811;
        }
LABEL_62:
        if ( v6 < 0 )
          return (unsigned int)v6;
        v32 = 2 * v48 + 2;
        if ( 2 * v48 != -2 )
        {
          v33 = v32;
          v34 = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
          v35 = v34;
          if ( !v34 )
            return (unsigned int)-1073741801;
          memmove(v34, (const void *)v45, v33);
          updated = ExUpdateOsPfnInRegistry(2 * (int)pcbLength + 2, v24, 2 * v48 + 2, v35);
          if ( updated >= 0 )
          {
            if ( qword_14077E408 )
              updated = qword_14077E408(v24);
            else
              updated = -1073741637;
            if ( updated == -1073741198 )
              updated = 0;
          }
          *(_DWORD *)(a4 + 4) = 20;
          v36 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          if ( !v36 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = v36;
          *(_DWORD *)a4 = 0;
          v37 = updated | 0x10000000;
          if ( &v48 )
          {
            if ( v36 + 1 < v36 )
              return (unsigned int)-1073741675;
            v6 = 0;
            if ( v36 + 2 > (_DWORD *)((char *)v36 + *(unsigned int *)(a4 + 4)) )
              return (unsigned int)-1073741789;
            *v36 = 4;
            v36[1] = v37;
            ++*(_DWORD *)a4;
          }
          else
          {
            v6 = -1073741811;
          }
          if ( v6 < 0 )
            return (unsigned int)v6;
          pcbLength = v46;
          if ( !&pcbLength )
            return (unsigned int)-1073741811;
          v38 = *(_QWORD *)(a4 + 8);
          if ( v38 )
          {
            v40 = *(_QWORD *)(a4 + 8);
            v41 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v42 = *(_DWORD *)v40 + 4;
                if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v42 < v40 )
                  break;
                ++v41;
                v40 += v42;
                if ( v41 >= *(_DWORD *)a4 )
                  goto LABEL_88;
              }
            }
            else
            {
LABEL_88:
              if ( v40 + 4 >= v40 )
              {
                v6 = 0;
                if ( v40 + 12 <= v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v43 = pcbLength;
                  *(_DWORD *)v40 = 8;
                  *(_QWORD *)(v40 + 4) = v43;
                  ++*(_DWORD *)a4;
                  return (unsigned int)v6;
                }
                return (unsigned int)-1073741789;
              }
            }
          }
          else
          {
            v39 = *(_DWORD *)(a4 + 4);
            if ( v39 + 12 >= v39 )
            {
              *(_DWORD *)(a4 + 4) = v39 + 12;
              v6 = 0;
              ++*(_DWORD *)a4;
              return (unsigned int)v6;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
          return (unsigned int)-1073741675;
        }
        return (unsigned int)-1073741762;
      }
      return (unsigned int)-1073741762;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
