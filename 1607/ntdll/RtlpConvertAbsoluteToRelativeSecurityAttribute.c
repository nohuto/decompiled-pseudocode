/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E1BD0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E15D0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18007053C (RtlStringCbLengthW.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ebp
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // ebp
  int v21; // ebp
  unsigned int v22; // ebp
  int v23; // eax
  unsigned int v24; // ebp
  _DWORD *v25; // r15
  unsigned int i; // r12d
  __int64 v27; // rbx
  unsigned int v28; // ebp
  __int64 v29; // rdx
  unsigned int j; // r12d
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v34; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v34 = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v10 = v7 + 20;
  if ( (unsigned int)v7 >= 0xFFFFFFEC )
    return (unsigned int)-1073741675;
  v9 = RtlStringCbLengthW(*(_WORD **)a1, 0xFFFFuLL, &v34);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v34 + 2;
  if ( (int)v34 + 2 < (unsigned int)v34 )
    return (unsigned int)-1073741675;
  v12 = v11 + v10;
  if ( v11 + v10 < v10 )
    return (unsigned int)-1073741675;
  v13 = *(unsigned __int16 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 8) )
    goto LABEL_30;
  if ( *(unsigned __int16 *)(a1 + 8) > 2u )
  {
    if ( v13 == 3 )
    {
      v16 = 0;
      if ( *(_DWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v9 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v16), 0xFFFFuLL, &v34);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v17 = v34 + 2;
          if ( (int)v34 + 2 < (unsigned int)v34 || v17 + v12 < v12 )
            return (unsigned int)-1073741675;
          ++v16;
          v12 += v17;
          if ( v16 >= *(_DWORD *)(a1 + 16) )
            goto LABEL_30;
        }
      }
      goto LABEL_30;
    }
    if ( v13 == 5 )
    {
LABEL_16:
      v14 = 0;
      if ( *(_DWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v15 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v14 + 8);
          if ( v15 < v12 )
            return (unsigned int)-1073741675;
          v12 = v15 + 4;
          if ( v15 + 4 < v15 )
            return (unsigned int)-1073741675;
          if ( ++v14 >= *(_DWORD *)(a1 + 16) )
            goto LABEL_30;
        }
      }
      goto LABEL_30;
    }
    if ( v13 != 6 )
    {
      if ( v13 != 16 )
        goto LABEL_30;
      goto LABEL_16;
    }
  }
  v18 = 8LL * *(unsigned int *)(a1 + 16);
  if ( v18 > 0xFFFFFFFF || (unsigned int)v18 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v18;
LABEL_30:
  if ( v12 + 3 < v12 )
    return (unsigned int)-1073741675;
  v19 = (v12 + 3) & 0xFFFFFFFC;
  v9 = 0;
  if ( *a3 < v19 )
  {
    *a3 = v19;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v19;
  memset(a2, 0, v19);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v20 = *(_DWORD *)(a1 + 16);
  v21 = v20 ? v20 - 1 : 0;
  v22 = 4 * v21 + 20;
  *a2 = v22;
  memmove((char *)a2 + v22, *(const void **)a1, v11);
  v23 = *(unsigned __int16 *)(a1 + 8);
  v24 = v11 + v22;
  v25 = (unsigned int *)((char *)a2 + v24);
  if ( !*(_WORD *)(a1 + 8) )
    return (unsigned int)-1073741811;
  if ( *(unsigned __int16 *)(a1 + 8) <= 2u )
    goto LABEL_52;
  if ( v23 != 3 )
  {
    if ( v23 == 5 )
      goto LABEL_43;
    if ( v23 != 6 )
    {
      if ( v23 == 16 )
      {
LABEL_43:
        for ( i = 0; i < *(_DWORD *)(a1 + 16); v25 = (unsigned int *)((char *)a2 + v24) )
        {
          a2[i + 4] = v24;
          v27 = 2LL * i;
          v28 = v24 + 4;
          *v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * i + 8);
          v29 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)(v29 + 16LL * i + 8) )
            memmove((char *)a2 + v28, *(const void **)(v29 + 16LL * i), *(unsigned int *)(v29 + 16LL * i + 8));
          ++i;
          v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v27 + 8) + v28;
        }
        return (unsigned int)v9;
      }
      return (unsigned int)-1073741811;
    }
LABEL_52:
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v32 = v3++;
        a2[v32 + 4] = v24;
        v24 += 8;
        *(_QWORD *)v25 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v32);
        v25 = (unsigned int *)((char *)a2 + v24);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return (unsigned int)v9;
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 16); v25 = (unsigned int *)((char *)a2 + v24) )
  {
    a2[j + 4] = v24;
    v9 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * j), 0xFFFFuLL, &v34);
    if ( v9 < 0 )
      break;
    v31 = v34 + 2;
    memmove(v25, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * j), (unsigned int)(v34 + 2));
    v24 += v31;
    ++j;
  }
  return (unsigned int)v9;
}
