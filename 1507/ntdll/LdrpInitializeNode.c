/*
 * XREFs of LdrpInitializeNode @ 0x180044DE4
 * Callers:
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v1; // rsi
  __int64 **v2; // rax
  __int64 *v3; // rdx
  unsigned int v4; // r15d
  __int64 i; // r14
  __int64 v6; // rbx
  __int64 v7; // r13
  char v8; // r12
  __int64 v9; // r9
  char v10; // al
  __int64 v12; // [rsp+48h] [rbp-E0h]
  __int64 v13; // [rsp+A0h] [rbp-88h] BYREF
  int v14; // [rsp+A8h] [rbp-80h]
  _BYTE v15[56]; // [rsp+B0h] [rbp-78h] BYREF
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+148h] [rbp+20h]

  v1 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = (__int64 **)qword_1801461F8;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != LdrpImageEntry )
    {
      v3 = (__int64 *)(a1 - 160 + 32);
      *v3 = (__int64)&qword_1801461F0;
      v3[1] = (__int64)v2;
      if ( *v2 != &qword_1801461F0 )
        __fastfail(3u);
      *v2 = v3;
      v2 = (__int64 **)(a1 - 160 + 32);
      qword_1801461F8 = (__int64)v2;
    }
  }
  v12 = LdrpTopLevelDllBeingLoadedTeb;
  LdrpTopLevelDllBeingLoadedTeb = (__int64)NtCurrentTeb();
  v4 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v6 = i - 160;
    if ( i - 160 != LdrpImageEntry )
    {
      v7 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(v6 + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          796,
          (unsigned int)"LdrpInitializeNode",
          2,
          (__int64)"Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v6 + 56),
          v6 + 72);
      v8 = 1;
      v13 = 72LL;
      v14 = 1;
      memset(v15, 0, sizeof(v15));
      RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v6 + 136));
      if ( *(_WORD *)(v6 + 110) )
        LdrpCallTlsInitializers(1LL, i - 160);
      if ( HashTable )
      {
        v9 = 0LL;
        if ( (*(_BYTE *)(v6 + 104) & 0x20) != 0 )
          v9 = LdrpProcessInitContextRecord;
        v8 = LdrpCallInitRoutine(HashTable, *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(v6 + 48), 1u, v9);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
      v10 = LdrpDebugFlags;
      LdrpCurrentDllInitializer = v7;
      *(_DWORD *)(v6 + 104) |= 0x80000u;
      if ( !v8 )
      {
        if ( (v10 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            848,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            HashTable,
            v6 + 72);
          v10 = LdrpDebugFlags;
        }
        if ( (v10 & 0x10) != 0 )
          __debugbreak();
        v4 = -1073741502;
        *(_DWORD *)(v6 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v6 + 48), v6 + 72, 0x14AEu);
    }
  }
  *(_DWORD *)(v1 + 56) = v4 != 0 ? -4 : 9;
  LdrpTopLevelDllBeingLoadedTeb = v12;
  return v4;
}
