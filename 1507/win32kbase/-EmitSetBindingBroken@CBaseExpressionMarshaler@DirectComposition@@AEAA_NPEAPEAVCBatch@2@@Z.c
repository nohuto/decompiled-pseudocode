/*
 * XREFs of ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6EEC
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D70C0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 && *((_BYTE *)this + 76) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 12;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 170;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) |= 0x200u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
