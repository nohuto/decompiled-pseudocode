/*
 * XREFs of ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0070978
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  _QWORD **v3; // rbx
  bool v4; // zf
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  _DWORD *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD **)((char *)this + 32);
  while ( 1 )
  {
    v4 = *v3 == v3;
    if ( *v3 == v3 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return *v3 == v3;
    v6 = (_QWORD **)*v3;
    v7 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v7[1] != v6 )
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    v8 = v9;
    *(_DWORD *)v9 = 16;
    v8[1] = 10;
    *((_QWORD *)v8 + 1) = v6[2];
    Win32FreePool();
  }
  return v4;
}
