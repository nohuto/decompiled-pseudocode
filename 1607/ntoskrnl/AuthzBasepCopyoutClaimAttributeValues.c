/*
 * XREFs of AuthzBasepCopyoutClaimAttributeValues @ 0x1406C9E50
 * Callers:
 *     AuthzBasepCopyoutClaimAttributes @ 0x1406CA0A4 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1401239E0 (RtlStringCbCopyNW.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 *v12; // r15
  __int64 *v13; // r14
  unsigned __int64 v14; // r13
  wchar_t *v15; // r10
  unsigned int v16; // r12d
  size_t v17; // r8
  wchar_t *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int64 *v22; // r15
  __int64 *v23; // r14
  unsigned __int64 v24; // r13
  unsigned int v25; // r12d
  size_t v26; // rdx
  wchar_t *v27; // rbp
  size_t v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 *v32; // r15
  __int64 *v33; // r14
  unsigned __int64 v34; // r13
  unsigned int v35; // r12d
  size_t v36; // rdx
  wchar_t *v37; // rbp
  size_t v38; // r9
  __int64 v39; // r8
  unsigned __int64 v40; // r10
  _QWORD *v41; // r11
  _QWORD *v42; // rdx
  unsigned int v43; // r9d
  __int64 v44; // rcx

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  *a5 = 0LL;
  v9 = *(unsigned __int16 *)(a1 + 48);
  if ( !*(_WORD *)(a1 + 48) )
    return (unsigned int)-1073741811;
  if ( *(unsigned __int16 *)(a1 + 48) > 2u )
  {
    switch ( v9 )
    {
      case 3:
        v30 = 8LL * *(unsigned int *)(a1 + 60);
        v31 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v31 + v30 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v31;
          v32 = (__int64 *)(a1 + 72);
          v33 = *(__int64 **)(a1 + 72);
          v34 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (wchar_t *)(v30 + v31);
          v35 = 0;
          while ( v33 != v32 )
          {
            v36 = *((unsigned __int16 *)v33 + 20) + 2LL;
            v37 = (wchar_t *)((char *)v15 + v36);
            if ( (unsigned __int64)v15 + v36 > v6 )
              return (unsigned int)-2147483643;
            v38 = *((unsigned __int16 *)v33 + 20);
            *(_QWORD *)(v34 + 8LL * v35) = v15;
            RtlStringCbCopyNW(v15, v36, (STRSAFE_PCNZWCH)v33[6], v38);
            v33 = (__int64 *)*v33;
            v15 = v37;
            ++v35;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 4:
        v20 = 16LL * *(unsigned int *)(a1 + 60);
        v21 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 + v20 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v21;
          v22 = (__int64 *)(a1 + 72);
          v23 = *(__int64 **)(a1 + 72);
          v24 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (wchar_t *)(v20 + v21);
          v25 = 0;
          while ( v23 != v22 )
          {
            v26 = *((unsigned __int16 *)v23 + 24) + 2LL;
            v27 = (wchar_t *)((char *)v15 + v26);
            if ( (unsigned __int64)v15 + v26 > v6 )
              return (unsigned int)-2147483643;
            v28 = *((unsigned __int16 *)v23 + 24);
            v29 = 2LL * v25;
            *(_QWORD *)(v24 + 8 * v29) = v23[5];
            *(_QWORD *)(v24 + 8 * v29 + 8) = v15;
            RtlStringCbCopyNW(v15, v26, (STRSAFE_PCNZWCH)v23[7], v28);
            v23 = (__int64 *)*v23;
            v15 = v27;
            ++v25;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      case 5:
        goto LABEL_10;
    }
    if ( v9 != 6 )
    {
      if ( v9 == 16 )
      {
LABEL_10:
        v10 = 16LL * *(unsigned int *)(a1 + 60);
        v11 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v11 + v10 <= v6 )
        {
          *(_QWORD *)(a2 + 24) = v11;
          v12 = (__int64 *)(a1 + 72);
          v13 = *(__int64 **)(a1 + 72);
          v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (wchar_t *)(v10 + v11);
          v16 = 0;
          while ( v13 != v12 )
          {
            v17 = *((unsigned int *)v13 + 12);
            v18 = (wchar_t *)((char *)v15 + v17);
            if ( (unsigned __int64)v15 + v17 > v6 )
              return (unsigned int)-2147483643;
            v19 = 2LL * v16;
            *(_QWORD *)(v14 + 8 * v19) = v15;
            *(_DWORD *)(v14 + 8 * v19 + 8) = v17;
            memmove(v15, (const void *)v13[5], v17);
            v13 = (__int64 *)*v13;
            v15 = v18;
            ++v16;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
      return (unsigned int)-1073741811;
    }
  }
  v39 = 8LL * *(unsigned int *)(a1 + 60);
  v40 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v40 + v39 <= v6 )
  {
    v41 = (_QWORD *)(a1 + 72);
    *(_QWORD *)(a2 + 24) = v40;
    v42 = *(_QWORD **)(a1 + 72);
    v43 = 0;
    while ( v42 != v41 )
    {
      v44 = v43++;
      *(_QWORD *)(v40 + 8 * v44) = v42[5];
      v42 = (_QWORD *)*v42;
    }
    v15 = (wchar_t *)(v39 + v40);
LABEL_33:
    *a5 = (char *)v15 - a3;
    return v5;
  }
  return (unsigned int)-2147483643;
}
