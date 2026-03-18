/*
 * XREFs of ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00132F4
 * Callers:
 *     ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00133C0 (-EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013400 (-EmitUpdateCommands@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTargetVisualMarshaler::EmitRoot(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  char *v5; // rcx
  char *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
    {
      v5 = (char *)v8;
      *(_DWORD *)v8 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 50;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      if ( !*((_QWORD *)this + 7) )
      {
LABEL_6:
        *((_DWORD *)this + 4) &= ~0x40u;
        return v4;
      }
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
      {
        v6 = (char *)v8;
        *(_DWORD *)v8 = 20;
        *(_QWORD *)(v6 + 4) = 0LL;
        *(_QWORD *)(v6 + 12) = 0LL;
        *((_DWORD *)v6 + 1) = 52;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
        *(_QWORD *)(v6 + 12) = *(unsigned int *)(*((_QWORD *)this + 7) + 24LL);
        *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) |= 0x20u;
        goto LABEL_6;
      }
    }
    return 0;
  }
  return v4;
}
