/*
 * XREFs of ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004EF70
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0019460 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitCreationCommand(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // r8
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( ((*((_DWORD *)this + 4) & 2) != 0
     || (v4 = DirectComposition::CResourceMarshaler::EmitCreationCommand(this, a2)) != 0)
    && (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    {
      v5 = (char *)v7;
      v4 = 1;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 176;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 49);
      *((_DWORD *)this + 4) |= 0x200u;
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
