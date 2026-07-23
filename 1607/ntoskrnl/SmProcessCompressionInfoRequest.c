/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x1403E5964
 * Callers:
 *     SmQueryStoreInformation @ 0x1403E4980 (SmQueryStoreInformation.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14000342C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  _DWORD *v4; // rbp
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  int StoreStats; // ebx
  __int64 v18; // r8
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+40h] [rbp+0h] BYREF

  v4 = (_DWORD *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = a3;
  memset((void *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8), 0, 0x28uLL);
  if ( a2 == 40 )
  {
    v8 = 0;
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = a1;
      if ( a1 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 39) = *(_BYTE *)(v9 + 39);
    }
    *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_OWORD *)a1;
    *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8) != 3
      || (*(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8) & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v10 = qword_1403BF120;
      if ( qword_1403BF120 )
      {
        *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = *(_DWORD *)(qword_1403BF120 + 744);
        *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *(_QWORD *)(v10 + 1416) << 12;
        v11 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
        v12 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
        v13 = 0;
        v14 = *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        do
        {
          v15 = SmKmStoreReferenceEx((__int64)&SmGlobals, v13);
          *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v15;
          if ( v15 )
          {
            *v4 = 1536;
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v15);
            SmKmStoreDereference(
              (__int64)&SmGlobals,
              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) + 5856LL));
            if ( StoreStats >= 0 )
            {
              v18 = *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
              v19 = v4 + 27;
              v20 = 8LL;
              do
              {
                v11 += v18 * *v19;
                *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v11;
                v19 += 2;
                --v20;
              }
              while ( v20 );
              v12 += (unsigned __int64)*(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) << 12;
              *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v12;
              v14 += (unsigned __int64)*(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) << 12;
              *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v14;
            }
          }
          ++v13;
        }
        while ( v13 < 0x400 );
        *(_OWORD *)a1 = *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        **(_DWORD **)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 40;
      }
      else
      {
        return (unsigned int)-1073741399;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v8;
}
