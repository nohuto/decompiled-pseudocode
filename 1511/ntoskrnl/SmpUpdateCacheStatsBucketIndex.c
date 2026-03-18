/*
 * XREFs of SmpUpdateCacheStatsBucketIndex @ 0x1404D1B8C
 * Callers:
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x1406570F8 (SmProcessDeleteRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400E4014 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

unsigned int *SmpUpdateCacheStatsBucketIndex()
{
  unsigned int v0; // ebx
  _WORD *v1; // r14
  unsigned int v2; // r12d
  unsigned int v3; // esi
  char v4; // bp
  unsigned int *result; // rax
  unsigned int v6; // edi
  char *v7; // r15
  __int64 v8; // rdi
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v0 = 0;
  v1 = &unk_1403027D8;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( (*v1 & 0x800) == 0 )
      goto LABEL_3;
    v6 = v3 | (32 * (*v1 & 0x7FF));
    v7 = (char *)&SmGlobals + 176 * (v3 & 0x1F);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v7 + 1) )
    {
      if ( (*((_WORD *)v7 + 12) & 0x7FF) == v6 >> 5 )
      {
        v8 = *(_QWORD *)v7;
        goto LABEL_12;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v7 + 1);
    }
    v8 = 0LL;
LABEL_12:
    if ( v8 )
    {
      ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v8 + 80, &v10, &v9);
      v2 += *(_DWORD *)(v8 + 288) << (*(_DWORD *)(v8 + 36) - 6) >> 10;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (v4 & 0x1F));
    }
LABEL_3:
    ++v3;
    ++v4;
    v1 += 88;
  }
  while ( v3 < 0x20 );
  result = (unsigned int *)&unk_140305348;
  do
  {
    if ( v2 <= *result )
      break;
    ++v0;
    ++result;
  }
  while ( v0 < 8 );
  dword_140305530 = v0;
  return result;
}
