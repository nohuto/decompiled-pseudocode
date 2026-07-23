/*
 * XREFs of RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DAC8C
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007BEA0 (RtlpLocateActivationContextSectionForQuery.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpQueryAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int a2,
        char *a3,
        size_t a4,
        size_t *a5)
{
  size_t *v5; // r14
  unsigned int v6; // ebx
  __int64 v10; // rax
  char *v11; // r9
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbp
  char *v14; // rdi
  char *v15; // rsi
  char *v16; // rsi
  char *v17; // rsi
  char *v18; // rsi
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+98h] [rbp+10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v21 = -1073741595;
  v22 = 0;
  if ( a5 )
    *a5 = 0LL;
  v10 = (unsigned int)a1[6];
  v11 = (char *)a1 + *(unsigned int *)((char *)a1 + v10 + 12);
  v12 = *(_DWORD *)((char *)a1 + v10 + 8);
  if ( a2 < v12 )
  {
    _mm_lfence();
    v13 = 104LL;
    v14 = (char *)a1 + *(unsigned int *)&v11[24 * a2 + 16];
    RtlpLocateActivationContextSectionForQuery(&v22, (int *)&v21, a3, a4, v5, 0x68uLL, a1, v20, 1u, &v23, &a5);
    if ( v22 == 2 )
    {
      return v21;
    }
    else
    {
      if ( *((_DWORD *)v14 + 2) )
        v13 = *((unsigned int *)v14 + 2) + 106LL;
      if ( *((_DWORD *)v14 + 5) )
        v13 += *((unsigned int *)v14 + 5) + 2LL;
      if ( *((_DWORD *)v14 + 10) )
        v13 += *((unsigned int *)v14 + 10) + 2LL;
      if ( *((_DWORD *)v14 + 20) )
        v13 += *((unsigned int *)v14 + 20) + 2LL;
      if ( v13 <= a4 )
      {
        v15 = a3 + 104;
        *(_DWORD *)a3 = *((_DWORD *)v14 + 1);
        *((_DWORD *)a3 + 1) = *((_DWORD *)v14 + 2);
        *((_DWORD *)a3 + 2) = *((_DWORD *)v14 + 4);
        *((_DWORD *)a3 + 3) = *((_DWORD *)v14 + 5);
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v14 + 28);
        *((_DWORD *)a3 + 6) = *((_DWORD *)v14 + 9);
        *((_DWORD *)a3 + 7) = *((_DWORD *)v14 + 10);
        *((_QWORD *)a3 + 4) = *((_QWORD *)v14 + 6);
        *((_DWORD *)a3 + 10) = *((_DWORD *)v14 + 14);
        *((_DWORD *)a3 + 11) = *((_DWORD *)v14 + 16);
        *((_DWORD *)a3 + 12) = *((_DWORD *)v14 + 17);
        *((_DWORD *)a3 + 13) = *((_DWORD *)v14 + 18);
        *((_DWORD *)a3 + 14) = *((_DWORD *)v14 + 19);
        *((_DWORD *)a3 + 15) = *((_DWORD *)v14 + 20);
        *((_QWORD *)a3 + 8) = 0LL;
        *((_QWORD *)a3 + 9) = 0LL;
        *((_QWORD *)a3 + 10) = 0LL;
        *((_QWORD *)a3 + 11) = 0LL;
        *((_DWORD *)a3 + 24) = *((_DWORD *)v14 + 22);
        if ( *((_DWORD *)v14 + 2) )
        {
          memmove(a3 + 104, (const void *)(v23 + *((unsigned int *)v14 + 3)), *((unsigned int *)v14 + 2));
          *((_QWORD *)a3 + 8) = v15;
          v16 = &v15[*((unsigned int *)v14 + 2)];
          *(_WORD *)v16 = 0;
          v15 = v16 + 2;
        }
        if ( *((_DWORD *)v14 + 5) )
        {
          memmove(v15, (const void *)(v23 + *((unsigned int *)v14 + 6)), *((unsigned int *)v14 + 5));
          *((_QWORD *)a3 + 9) = v15;
          v17 = &v15[*((unsigned int *)v14 + 5)];
          *(_WORD *)v17 = 0;
          v15 = v17 + 2;
        }
        if ( *((_DWORD *)v14 + 10) )
        {
          memmove(v15, (const void *)(v23 + *((unsigned int *)v14 + 11)), *((unsigned int *)v14 + 10));
          *((_QWORD *)a3 + 10) = v15;
          v18 = &v15[*((unsigned int *)v14 + 10)];
          *(_WORD *)v18 = 0;
          v15 = v18 + 2;
        }
        if ( *((_DWORD *)v14 + 20) )
        {
          memmove(v15, (const void *)(v23 + *((unsigned int *)v14 + 21)), *((unsigned int *)v14 + 20));
          *((_QWORD *)a3 + 11) = v15;
          *(_WORD *)&v15[*((unsigned int *)v14 + 20)] = 0;
        }
        if ( v5 )
          *v5 = v13;
      }
      else
      {
        if ( v5 )
          *v5 = v13;
        return (unsigned int)-1073741789;
      }
    }
  }
  else
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryAssemblyInformationActivationContextDetailedInformation",
      a2,
      v12);
    return (unsigned int)-1073741811;
  }
  return v6;
}
