/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C00D9674
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D97A0 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0014C04 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  char *v9; // r9
  unsigned __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 2LL * a3;
  v4 = a3;
  if ( *((_DWORD *)this + 4 * a3 + 27) < *((_DWORD *)this + 4 * a3 + 26) )
  {
    do
    {
      v7 = 4096LL - *((_QWORD *)(*a2)[12] + 5);
      v11 = v7;
      if ( v7 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v11) )
          return *((_DWORD *)this + 2 * v3 + 27) == *((_DWORD *)this + 2 * v3 + 26);
        v7 = v11;
      }
      v8 = (v7 - 20) >> 2;
      if ( (unsigned int)(*((_DWORD *)this + 2 * v3 + 26) - *((_DWORD *)this + 2 * v3 + 27)) < v8 )
        LODWORD(v8) = *((_DWORD *)this + 2 * v3 + 26) - *((_DWORD *)this + 2 * v3 + 27);
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v8 + 20), &v12);
      v9 = (char *)v12;
      *(_DWORD *)v12 = 4 * v8 + 20;
      *(_QWORD *)(v9 + 4) = 0LL;
      *(_QWORD *)(v9 + 12) = 0LL;
      *((_DWORD *)v9 + 1) = 184;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v9 + 4) = v4;
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 2 * v3 + 27) != 0;
      memmove(
        v9 + 20,
        (const void *)(*((_QWORD *)this + 2 * v4 + 12) + 4LL * *((unsigned int *)this + 2 * v3 + 27)),
        (unsigned int)(4 * v8));
      *((_DWORD *)this + 2 * v3 + 27) += v8;
    }
    while ( *((_DWORD *)this + 2 * v3 + 27) < *((_DWORD *)this + 2 * v3 + 26) );
  }
  return *((_DWORD *)this + 2 * v3 + 27) == *((_DWORD *)this + 2 * v3 + 26);
}
