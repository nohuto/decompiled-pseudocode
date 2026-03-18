/*
 * XREFs of ?EmitClearColorResourcesCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018E10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitClearColorResourcesCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 169;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
