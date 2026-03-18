/*
 * XREFs of ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017FAC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018540 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0075184 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

bool __fastcall DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  void *v9; // [rsp+60h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 61) < *((_DWORD *)this + 60); *((_DWORD *)this + 61) += v5 )
  {
    v4 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 12) + 40LL);
    v8 = v4;
    if ( v4 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v8) )
        return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
      v4 = v8;
    }
    v5 = (v4 - 12) >> 4;
    if ( (unsigned int)(*((_DWORD *)this + 60) - *((_DWORD *)this + 61)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 60) - *((_DWORD *)this + 61);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v5 + 12), &v9);
    v6 = (char *)v9;
    *(_DWORD *)v9 = 16 * v5 + 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 140;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 10);
    memmove(
      v6 + 12,
      (const void *)(*((_QWORD *)this + 29) + 16LL * *((unsigned int *)this + 61)),
      (unsigned int)(16 * v5));
  }
  return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
}
