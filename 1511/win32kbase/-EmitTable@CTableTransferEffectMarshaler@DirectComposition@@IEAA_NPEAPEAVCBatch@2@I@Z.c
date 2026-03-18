/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C00DB894
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DB9D0 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0075184 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  char *v9; // r9
  unsigned __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h]
  void *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v3 = 2 * (a3 + 6LL);
  v4 = 2LL * a3;
  if ( *((_DWORD *)this + 4 * a3 + 25) < *((_DWORD *)this + 4 * a3 + 24) )
  {
    do
    {
      v7 = 4096LL - *((_QWORD *)(*a2)[12] + 5);
      v11 = v7;
      if ( v7 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v11) )
          return *((_DWORD *)this + 2 * v4 + 25) == *((_DWORD *)this + 2 * v3);
        v7 = v11;
      }
      v8 = (v7 - 20) >> 2;
      if ( (unsigned int)(*((_DWORD *)this + 2 * v3) - *((_DWORD *)this + 2 * v4 + 25)) < v8 )
        LODWORD(v8) = *((_DWORD *)this + 2 * v3) - *((_DWORD *)this + 2 * v4 + 25);
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v8 + 20),
        &v13);
      v9 = (char *)v13;
      *(_DWORD *)v13 = 4 * v8 + 20;
      *(_QWORD *)(v9 + 4) = 0LL;
      *(_QWORD *)(v9 + 12) = 0LL;
      *((_DWORD *)v9 + 1) = 191;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v9 + 4) = v12;
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 2 * v4 + 25) != 0;
      memmove(
        v9 + 20,
        (const void *)(*((_QWORD *)this + v4 + 11) + 4LL * *((unsigned int *)this + 2 * v4 + 25)),
        (unsigned int)(4 * v8));
      *((_DWORD *)this + 2 * v4 + 25) += v8;
    }
    while ( *((_DWORD *)this + 2 * v4 + 25) < *((_DWORD *)this + 2 * v3) );
  }
  return *((_DWORD *)this + 2 * v4 + 25) == *((_DWORD *)this + 2 * v3);
}
