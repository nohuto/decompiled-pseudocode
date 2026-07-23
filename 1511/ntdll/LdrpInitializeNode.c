/*
 * XREFs of LdrpInitializeNode @ 0x180071F68
 * Callers:
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  __int64 i; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // r12
  __int64 v10; // r9
  char v11; // al
  __int64 v13; // [rsp+90h] [rbp-88h] BYREF
  int v14; // [rsp+98h] [rbp-80h]
  _BYTE v15[56]; // [rsp+A0h] [rbp-78h] BYREF
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+138h] [rbp+20h]

  v1 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = LdrpImageEntry;
  v3 = (__int64 **)qword_180145238;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      *v4 = (__int64)&qword_180145230;
      v4[1] = (__int64)v3;
      if ( *v3 != &qword_180145230 )
        __fastfail(3u);
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_180145238 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      v8 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(v7 + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          793,
          (unsigned int)"LdrpInitializeNode",
          2,
          (__int64)"Calling init routine %p for DLL \"%wZ\"\n");
      v9 = 1;
      v13 = 72LL;
      v14 = 1;
      memset(v15, 0, sizeof(v15));
      RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        LdrpCallTlsInitializers(1LL, i - 160);
      if ( HashTable )
      {
        v10 = 0LL;
        if ( (*(_BYTE *)(v7 + 104) & 0x20) != 0 )
          v10 = LdrpProcessInitContextRecord;
        v9 = LdrpCallInitRoutine(HashTable, *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(v7 + 48), 1u, v10);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
      v11 = LdrpDebugFlags;
      LdrpCurrentDllInitializer = v8;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v9 )
      {
        if ( (v11 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            845,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n");
          v11 = LdrpDebugFlags;
        }
        if ( (v11 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = LdrpImageEntry;
    }
  }
  *(_DWORD *)(v1 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
