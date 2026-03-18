/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0070A04
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 **v3; // rbx
  bool v4; // zf
  __int64 *v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 **)((char *)this + 16);
  while ( 1 )
  {
    v4 = *v3 == (__int64 *)v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v9) )
      return *v3 == (__int64 *)v3;
    v6 = *v3;
    v7 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v3 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v3;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 56;
    *((_DWORD *)v8 + 1) = 9;
    *(_OWORD *)(v8 + 8) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 24) = *((_OWORD *)v6 + 2);
    *(_OWORD *)(v8 + 40) = *((_OWORD *)v6 + 3);
    Win32FreePool();
  }
  return v4;
}
