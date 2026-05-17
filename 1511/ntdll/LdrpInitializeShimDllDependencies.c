/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x180080E70
 * Callers:
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 *result; // rax
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  char v8; // al
  _QWORD v9[19]; // [rsp+40h] [rbp-69h] BYREF
  char v10; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v11; // [rsp+118h] [rbp+6Fh] BYREF

  memset(v9, 0, sizeof(v9));
  v0 = (__int64 *)qword_180145210;
  v9[4] = &v11;
  LODWORD(v9[3]) = 0x80000;
  while ( v0 != &qword_180145210 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v9;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_180145210;
  v2 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_180145210 )
      goto LABEL_9;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_8:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v10 = 0;
        v11 = LdrpInitializeGraphRecurse(v7, (__int64)&v11, &v10);
        v2 = v11;
        if ( (v11 & 0x80000000) != 0 )
          goto LABEL_9;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_23:
    if ( v6 == v5 )
      goto LABEL_8;
  }
  v2 = 3221225794LL;
  v11 = -1073741502;
LABEL_9:
  result = (__int64 *)qword_180145210;
  if ( (__int64 *)qword_180145210 != &qword_180145210 )
  {
    do
    {
      if ( (_QWORD *)result[22] == v9 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_180145210 );
    v2 = v11;
  }
  if ( (int)v2 < 0 )
  {
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2307,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        (__int64)"Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n");
      v2 = v11;
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    return (__int64 *)ZwTerminateProcess(-1LL, v11);
  }
  return result;
}
