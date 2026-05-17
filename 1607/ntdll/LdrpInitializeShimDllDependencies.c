/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x18007DF78
 * Callers:
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800722B8 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 *result; // rax
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  char v9; // al
  int v10; // [rsp+30h] [rbp-79h]
  _QWORD v11[19]; // [rsp+40h] [rbp-69h] BYREF
  char v12; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v13; // [rsp+118h] [rbp+6Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v0 = (__int64 *)qword_1801523D0;
  v11[4] = &v13;
  LODWORD(v11[3]) = 0x80000;
  while ( v0 != &qword_1801523D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v11;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801523D0;
  v2 = 0LL;
  v13 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801523D0 )
      goto LABEL_9;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v5 = *(_QWORD *)(v1 + 152);
      v6 = *(__int64 **)(v5 + 40);
      if ( v6 )
        break;
    }
LABEL_8:
    v1 = *(_QWORD *)v1;
  }
  v7 = *(__int64 **)(v5 + 40);
  while ( 1 )
  {
    v7 = (__int64 *)*v7;
    if ( (v7[3] & 1) == 0 )
    {
      v8 = v7[1];
      if ( *(_DWORD *)(v8 + 56) == 7 )
      {
        v12 = 0;
        v13 = LdrpInitializeGraphRecurse(v8, (__int64)&v13, &v12);
        v2 = v13;
        if ( (v13 & 0x80000000) != 0 )
          goto LABEL_9;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v8 + 56) == -4 )
        break;
    }
LABEL_23:
    if ( v7 == v6 )
      goto LABEL_8;
  }
  v2 = 3221225794LL;
  v13 = -1073741502;
LABEL_9:
  result = (__int64 *)qword_1801523D0;
  if ( (__int64 *)qword_1801523D0 != &qword_1801523D0 )
  {
    do
    {
      v3 = (__int64)result;
      if ( (_QWORD *)result[22] == v11 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_1801523D0 );
    v2 = v13;
  }
  if ( (int)v2 < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v10 = v2;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2330,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        (__int64)"Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v10);
      v2 = v13;
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    return (__int64 *)ZwTerminateProcess(-1LL, v13);
  }
  return result;
}
