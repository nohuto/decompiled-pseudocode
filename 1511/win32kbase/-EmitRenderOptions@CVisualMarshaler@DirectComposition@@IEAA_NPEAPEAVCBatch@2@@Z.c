/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016664
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00173B0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 56;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x34uLL);
    *v4 = 50;
    v4[1] = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 45) != -1 )
    {
      v4[2] |= 2u;
      v4[3] = *((_DWORD *)this + 45);
    }
    if ( *((_DWORD *)this + 44) != -1 )
    {
      v4[2] |= 8u;
      v4[4] = *((_DWORD *)this + 44);
    }
    if ( *((_DWORD *)this + 46) != -1 )
    {
      v4[2] |= 0x10u;
      v4[7] = *((_DWORD *)this + 46);
    }
    if ( *((_DWORD *)this + 47) != -1 )
    {
      v4[2] |= 0x20u;
      v4[8] = *((_DWORD *)this + 47);
    }
    if ( *((_DWORD *)this + 48) != -1 )
    {
      v4[2] |= 0x40u;
      v4[9] = *((_DWORD *)this + 48);
    }
    if ( *((_DWORD *)this + 49) != -1 )
    {
      v4[2] |= 0x80u;
      v4[10] = *((_DWORD *)this + 49);
    }
    if ( *((_DWORD *)this + 54) )
    {
      v4[2] |= 0x100u;
      v4[11] = *((_DWORD *)this + 54);
    }
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return 0;
}
