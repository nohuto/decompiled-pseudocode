/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029820
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A520 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rax
  _DWORD *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 56;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x34uLL);
    *v5 = 47;
    v5[1] = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 47) != -1 )
    {
      v5[2] |= 0x10u;
      v5[3] = *((_DWORD *)this + 47);
    }
    if ( *((_DWORD *)this + 46) != -1 )
    {
      v5[2] |= 0x40u;
      v5[4] = *((_DWORD *)this + 46);
    }
    if ( *((_DWORD *)this + 48) != -1 )
    {
      v5[2] |= 0x80u;
      v5[7] = *((_DWORD *)this + 48);
    }
    if ( *((_DWORD *)this + 49) != -1 )
    {
      v5[2] |= 0x200u;
      v5[8] = *((_DWORD *)this + 49);
    }
    if ( *((_DWORD *)this + 50) != -1 )
    {
      v5[2] |= 0x400u;
      v5[9] = *((_DWORD *)this + 50);
    }
    if ( *((_DWORD *)this + 51) != -1 )
    {
      v5[2] |= 0x800u;
      v5[10] = *((_DWORD *)this + 51);
    }
    if ( *((_DWORD *)this + 56) )
    {
      v5[2] |= 0x1000u;
      v5[11] = *((_DWORD *)this + 56);
    }
    *((_DWORD *)this + 4) &= ~0x20000u;
    return 1;
  }
  return 0;
}
