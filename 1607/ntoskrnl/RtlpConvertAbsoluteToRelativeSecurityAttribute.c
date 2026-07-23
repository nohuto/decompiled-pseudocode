/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140684C88
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  NTSTATUS v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ebp
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // ebp
  int v22; // ebp
  unsigned int v23; // ebp
  int v24; // eax
  unsigned int v25; // ebp
  _DWORD *v26; // r15
  unsigned int i; // r12d
  __int64 v28; // rbx
  unsigned int v29; // ebp
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int j; // r12d
  int v33; // ebx
  __int64 v34; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  pcbLength = 0LL;
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
  v9 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, &pcbLength);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
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
      v17 = 0;
      if ( *(_DWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v9 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v17), 0xFFFFuLL, &pcbLength);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v18 = pcbLength + 2;
          if ( (int)pcbLength + 2 < (unsigned int)pcbLength || v18 + v12 < v12 )
            return (unsigned int)-1073741675;
          ++v17;
          v12 += v18;
          if ( v17 >= *(_DWORD *)(a1 + 16) )
            goto LABEL_30;
        }
      }
      goto LABEL_30;
    }
    if ( v13 == 5 )
    {
LABEL_16:
      v14 = *(_DWORD *)(a1 + 16);
      v15 = 0;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v15 + 8);
          if ( v16 < v12 )
            return (unsigned int)-1073741675;
          v12 = v16 + 4;
          if ( v16 + 4 < v16 )
            return (unsigned int)-1073741675;
          if ( ++v15 >= v14 )
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
  v19 = 8LL * *(unsigned int *)(a1 + 16);
  if ( v19 > 0xFFFFFFFF || (unsigned int)v19 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v19;
LABEL_30:
  if ( v12 + 3 < v12 )
    return (unsigned int)-1073741675;
  v20 = (v12 + 3) & 0xFFFFFFFC;
  v9 = 0;
  if ( *a3 < v20 )
  {
    *a3 = v20;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v20;
  memset(a2, 0, v20);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v21 = *(_DWORD *)(a1 + 16);
  v22 = v21 ? v21 - 1 : 0;
  v23 = 4 * v22 + 20;
  *a2 = v23;
  memmove((char *)a2 + v23, *(const void **)a1, v11);
  v24 = *(unsigned __int16 *)(a1 + 8);
  v25 = v11 + v23;
  v26 = (unsigned int *)((char *)a2 + v25);
  if ( !*(_WORD *)(a1 + 8) )
    return (unsigned int)-1073741811;
  if ( *(unsigned __int16 *)(a1 + 8) <= 2u )
    goto LABEL_52;
  if ( v24 != 3 )
  {
    if ( v24 == 5 )
      goto LABEL_43;
    if ( v24 != 6 )
    {
      if ( v24 == 16 )
      {
LABEL_43:
        for ( i = 0; i < *(_DWORD *)(a1 + 16); v26 = (unsigned int *)((char *)a2 + v25) )
        {
          a2[i + 4] = v25;
          v28 = 2LL * i;
          v29 = v25 + 4;
          *v26 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * i + 8);
          v30 = *(_QWORD *)(a1 + 24);
          v31 = *(_DWORD *)(v30 + 16LL * i + 8);
          if ( v31 )
            memmove((char *)a2 + v29, *(const void **)(v30 + 16LL * i), v31);
          ++i;
          v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v28 + 8) + v29;
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
        v34 = v3++;
        a2[v34 + 4] = v25;
        v25 += 8;
        *(_QWORD *)v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v34);
        v26 = (unsigned int *)((char *)a2 + v25);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return (unsigned int)v9;
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 16); v26 = (unsigned int *)((char *)a2 + v25) )
  {
    a2[j + 4] = v25;
    v9 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * j), 0xFFFFuLL, &pcbLength);
    if ( v9 < 0 )
      break;
    v33 = pcbLength + 2;
    memmove(v26, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * j), (unsigned int)(pcbLength + 2));
    v25 += v33;
    ++j;
  }
  return (unsigned int)v9;
}
