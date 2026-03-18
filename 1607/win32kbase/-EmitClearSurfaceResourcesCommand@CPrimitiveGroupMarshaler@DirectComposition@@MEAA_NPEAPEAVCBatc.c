/*
 * XREFs of ?EmitClearSurfaceResourcesCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitClearSurfaceResourcesCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 188;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
