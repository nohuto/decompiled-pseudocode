/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030DE8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD **v3; // rbx
  bool v4; // zf
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD **)((char *)this + 16);
  while ( 1 )
  {
    v4 = *v3 == v3;
    if ( *v3 == v3 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v9) )
      return *v3 == v3;
    v6 = (_QWORD **)*v3;
    v7 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v7[1] != v6 )
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 48;
    *((_DWORD *)v8 + 1) = 8;
    *(_OWORD *)(v8 + 8) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 24) = *((_OWORD *)v6 + 2);
    *((_QWORD *)v8 + 5) = v6[6];
    Win32FreePool(v6);
  }
  return v4;
}
