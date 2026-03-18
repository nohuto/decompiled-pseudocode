/*
 * XREFs of ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0030F1C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitAnimationCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD **v3; // rbx
  bool v4; // zf
  _QWORD **v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD **)((char *)this + 48);
  while ( 1 )
  {
    v4 = *v3 == v3;
    if ( *v3 == v3 )
      break;
    v6 = (_QWORD **)*v3;
    v7 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v7[1] != v6 )
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v6 + 4), &v9) )
    {
      v8 = *v3;
      *v6 = *v3;
      v6[1] = v3;
      if ( (_QWORD **)v8[1] != v3 )
        __fastfail(3u);
      v8[1] = v6;
      v4 = v6 == v3;
      *v3 = v6;
      return v4;
    }
    memmove(v9, (char *)v6 + 20, *((unsigned int *)v6 + 4));
    Win32FreePool(v6);
  }
  return v4;
}
