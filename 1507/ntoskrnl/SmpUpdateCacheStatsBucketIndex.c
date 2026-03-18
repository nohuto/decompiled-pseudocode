/*
 * XREFs of SmpUpdateCacheStatsBucketIndex @ 0x1404F9788
 * Callers:
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x1406D9384 (SmProcessDeleteRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401231B8 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

unsigned int *SmpUpdateCacheStatsBucketIndex()
{
  unsigned int v0; // ebx
  _WORD *v1; // r14
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  char v4; // r12
  unsigned int *result; // rax
  unsigned int v6; // edi
  struct _EX_RUNDOWN_REF *v7; // r15
  struct _EX_RUNDOWN_REF *v8; // rsi
  unsigned __int64 v9; // rtt
  struct _EX_RUNDOWN_REF v10; // rdi
  unsigned __int64 v11; // rtt
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v0 = 0;
  v1 = &unk_140350558;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( (*v1 & 0x800) == 0 )
      goto LABEL_3;
    v6 = v3 | (32 * (*v1 & 0x7FF));
    v7 = (struct _EX_RUNDOWN_REF *)&SmGlobals[22 * (v3 & 0x1F)];
    v8 = v7 + 1;
    _m_prefetchw(&v7[1]);
    v9 = v7[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[1], v9 + 2, v9)
      && !ExfAcquireRundownProtection(v7 + 1) )
    {
      goto LABEL_13;
    }
    if ( (v7[3].Count & 0x7FF) != v6 >> 5 )
    {
      _m_prefetchw(v8);
      v11 = v8->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v11 - 2, v11) )
        ExfReleaseRundownProtection(v7 + 1);
LABEL_13:
      v10.Count = 0LL;
      goto LABEL_14;
    }
    v10.Count = v7->Count;
LABEL_14:
    if ( v10.Count )
    {
      ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v10.Count + 80, &v15, &v14);
      v2 += *(_DWORD *)(v10.Count + 288) << (*(_DWORD *)(v10.Count + 36) - 6) >> 10;
      v12 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (v4 & 0x1F));
      _m_prefetchw(v12);
      v13 = v12->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 2, v13) )
        ExfReleaseRundownProtection(v12);
    }
LABEL_3:
    ++v3;
    ++v4;
    v1 += 88;
  }
  while ( v3 < 0x20 );
  result = (unsigned int *)&unk_1403530A8;
  do
  {
    if ( v2 <= *result )
      break;
    ++v0;
    ++result;
  }
  while ( v0 < 8 );
  dword_140353290 = v0;
  return result;
}
