/*
 * XREFs of LdrpProcessDetachNode @ 0x180043728
 * Callers:
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     LdrpRecordUnloadEvent @ 0x18004386C (LdrpRecordUnloadEvent.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
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
          1810,
          (unsigned int)"LdrpProcessDetachNode",
          2,
          (__int64)"Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
          v3 + 9,
          v3[7]);
      v8 = 72LL;
      v9 = 1;
      memset(v10, 0, sizeof(v10));
      RtlActivateActivationContextUnsafeFast((__int64)&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        LdrpCallTlsInitializers(0LL, i - 20);
      LdrpCallInitRoutine(v7, (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)v3[6], 0, 0LL);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
    }
  }
}
