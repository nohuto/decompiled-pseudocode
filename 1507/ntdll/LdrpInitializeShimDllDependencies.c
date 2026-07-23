/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x180079BA4
 * Callers:
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800BE0A4 (LdrpInitializationFailure.c)
 */

int LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  char v9; // al
  int v11; // [rsp+30h] [rbp-79h]
  _QWORD v12[19]; // [rsp+40h] [rbp-69h] BYREF
  char v13; // [rsp+110h] [rbp+67h] BYREF
  NTSTATUS ExitStatus; // [rsp+118h] [rbp+6Fh] BYREF

  memset(v12, 0, sizeof(v12));
  v0 = (__int64 *)qword_1801461D0;
  v12[4] = &ExitStatus;
  LODWORD(v12[3]) = 0x80000;
  while ( v0 != &qword_1801461D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v12;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801461D0;
  v2 = 0LL;
  ExitStatus = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801461D0 )
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
        v13 = 0;
        ExitStatus = LdrpInitializeGraphRecurse(v8, (__int64)&ExitStatus, &v13);
        v2 = (unsigned int)ExitStatus;
        if ( ExitStatus < 0 )
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
  ExitStatus = -1073741502;
LABEL_9:
  v4 = (__int64 *)qword_1801461D0;
  if ( (__int64 *)qword_1801461D0 != &qword_1801461D0 )
  {
    do
    {
      v3 = (__int64)v4;
      if ( (_QWORD *)v4[22] == v12 )
        v4[22] = 0LL;
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &qword_1801461D0 );
    v2 = (unsigned int)ExitStatus;
  }
  if ( (int)v2 < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v11 = v2;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2308,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        (__int64)"Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v11);
      v2 = (unsigned int)ExitStatus;
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    LODWORD(v4) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  }
  return (int)v4;
}
