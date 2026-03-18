/*
 * XREFs of ?EmitSegmentUpdate@CPencilMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5B60
 * Callers:
 *     ?EmitUpdateCommands@CPencilMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E5CB0 (-EmitUpdateCommands@CPencilMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

bool __fastcall DirectComposition::CPencilMarshaler::EmitSegmentUpdate(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 48) != *((_QWORD *)this + 22); v4[2] = (*((_DWORD *)this + 48))++ )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v9) )
      break;
    v4 = (char *)v9 + 4;
    *(_DWORD *)v9 = 36;
    memset(v4, 0, 0x20uLL);
    *v4 = 249;
    v4[1] = *((_DWORD *)this + 6);
    v5 = *((unsigned int *)this + 48) * *((_QWORD *)this + 23);
    v6 = *((_QWORD *)this + 19);
    v7 = *(_DWORD *)(v5 + v6 + 16);
    *(_OWORD *)(v4 + 3) = *(_OWORD *)(v5 + v6);
    v4[7] = v7;
  }
  return *((unsigned int *)this + 48) == *((_QWORD *)this + 22);
}
