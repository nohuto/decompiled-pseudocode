/*
 * XREFs of LdrpInitializeNode @ 0x180072374
 * Callers:
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 * Callees:
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
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
  char v10; // al
  __int64 v12; // [rsp+48h] [rbp-D0h]
  __int64 v13; // [rsp+90h] [rbp-88h] BYREF
  int v14; // [rsp+98h] [rbp-80h]
  _BYTE v15[56]; // [rsp+A0h] [rbp-78h] BYREF

  v1 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = LdrpImageEntry;
  v3 = (__int64 **)qword_1801523F8;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_1801523F0 )
        __fastfail(3u);
      *v4 = (__int64)&qword_1801523F0;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_1801523F8 = (__int64)v3;
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
      v12 = *(_QWORD *)(v7 + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          793,
          (unsigned int)"LdrpInitializeNode",
          2,
          (__int64)"Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v7 + 56),
          v7 + 72);
      v9 = 1;
      v13 = 72LL;
      v14 = 1;
      memset(v15, 0, sizeof(v15));
      RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        LdrpCallTlsInitializers(1u, i - 160);
      if ( v12 )
        v9 = LdrpCallInitRoutine(v12, *(_QWORD *)(v7 + 48), 1);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
      v10 = LdrpDebugFlags;
      LdrpCurrentDllInitializer = v8;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v9 )
      {
        if ( (v10 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            845,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v12,
            v7 + 72);
          v10 = LdrpDebugFlags;
        }
        if ( (v10 & 0x10) != 0 )
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
