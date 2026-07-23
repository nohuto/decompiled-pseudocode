/*
 * XREFs of LdrpProcessDetachNode @ 0x18000554C
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 * Callees:
 *     LdrpRecordUnloadEvent @ 0x180005690 (LdrpRecordUnloadEvent.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 */

void __fastcall LdrpProcessDetachNode(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _RTL_DYNAMIC_HASH_TABLE *v7; // r15
  __int64 v8; // [rsp+60h] [rbp-68h] BYREF
  int v9; // [rsp+68h] [rbp-60h]
  _BYTE v10[56]; // [rsp+70h] [rbp-58h] BYREF

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    LdrpRecordUnloadEvent(i - 20);
    v4 = (__int64)(i - 16);
    if ( *(_QWORD *)v4 )
    {
      v5 = *(_QWORD *)v4;
      v6 = (_QWORD *)v3[5];
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)v4 = 1LL;
    }
    v7 = (_RTL_DYNAMIC_HASH_TABLE *)v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1806,
          (unsigned int)"LdrpProcessDetachNode",
          2,
          (__int64)"Uninitializing DLL \"%wZ\" (Init routine: %p)\n");
      v8 = 72LL;
      v9 = 1;
      memset(v10, 0, sizeof(v10));
      RtlActivateActivationContextUnsafeFast(&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        LdrpCallTlsInitializers(0LL, i - 20);
      LdrpCallInitRoutine(v7);
      RtlDeactivateActivationContextUnsafeFast(&v8);
    }
  }
}
