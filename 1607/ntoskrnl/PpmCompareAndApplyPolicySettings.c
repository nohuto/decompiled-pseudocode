/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x140672A94
 * Callers:
 *     PpmApplyProfile @ 0x140675B20 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x140675EE8 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x14056A5E8 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x14066B7A4 (PpmReapplyIdlePolicy.c)
 */

LONG __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // rbx
  SIZE_T v14; // r8
  char *v15; // rdx
  unsigned int v16; // ebx
  unsigned __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v20 = a2;
  v3 = *a1;
  v21 = 0LL;
  LOWORD(v19) = 0;
  v5 = 0LL;
  v6 = v3 & 0x3FFD8030FC0LL;
  if ( !v6 )
    goto LABEL_16;
  v7 = !_BitScanForward64((unsigned __int64 *)&v8, v6);
  if ( v7 )
    goto LABEL_16;
  do
  {
    v9 = 5 * v8;
    v18 = v6 & ~(1LL << v8);
    v10 = 0;
    v11 = 1LL << *((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 36);
    v12 = 1;
    if ( (*((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 37) & 4) != 0 )
      v12 = 2;
    v13 = v20;
    do
    {
      v14 = LODWORD((&PpmPolicyConfigTable)[v9 + 4]);
      v15 = &(&PpmPolicyConfigTable)[v9 + 3][v10 * (unsigned int)v14];
      if ( RtlCompareMemory(&v15[v13], &v15[a3], v14) != (unsigned int)v14 )
        v5 |= v11;
      ++v10;
    }
    while ( v10 < v12 );
    v6 = v18;
    v21 = v5;
    v7 = !_BitScanForward64((unsigned __int64 *)&v8, v18);
  }
  while ( !v7 );
  if ( v5 )
  {
    PpmGetPolicyAction(&v21, &v19);
    v16 = v19;
    if ( (v19 & 1) != 0 )
    {
      PpmReapplyIdlePolicy();
      v19 = v16 & 0xFFFFFFFE;
    }
    else
    {
      PopReleaseRwLock(&PpmIdlePolicyLock);
    }
    if ( (_WORD)v19 )
      return PpmReapplyPerfPolicy(&v19);
  }
  else
  {
LABEL_16:
    PopReleaseRwLock(&PpmIdlePolicyLock);
  }
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
