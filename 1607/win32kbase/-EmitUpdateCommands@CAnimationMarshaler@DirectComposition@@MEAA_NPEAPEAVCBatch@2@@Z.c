/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D760
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D020 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D10C (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D168 (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D1CC (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D248 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D2B0 (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D38C (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004D41C (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  char *v3; // rbx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rdx
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (char *)this - 16;
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
      return v2;
    v6 = (char *)v9;
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 161;
    *((_DWORD *)v6 + 2) = *((_DWORD *)v3 + 10);
    *((_DWORD *)v6 + 3) = *((_DWORD *)v3 + 58);
    *((_DWORD *)v3 + 8) &= ~0x20000u;
  }
  if ( DirectComposition::CAnimationMarshaler::EmitBeginTime((DirectComposition::CAnimationMarshaler *)v3, a2) )
  {
    if ( !*((_QWORD *)v3 + 19) )
      goto LABEL_22;
    if ( (*((_DWORD *)v3 + 8) & 0x200) == 0 && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
    {
      v7 = (char *)v9;
      *(_DWORD *)v9 = 28;
      *(_QWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 12) = 0LL;
      *(_QWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 153;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v3 + 10);
      *(_OWORD *)(v7 + 12) = *(_OWORD *)*((_QWORD *)v3 + 19);
      *((_DWORD *)v3 + 8) |= 0x200u;
    }
    if ( !*((_QWORD *)v3 + 19) || (*((_DWORD *)v3 + 8) & 0x200) != 0 )
    {
LABEL_22:
      if ( *((_QWORD *)v3 + 18) && (*((_DWORD *)v3 + 8) & 0x400) == 0 )
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
          return v2;
        v8 = (char *)v9;
        *(_DWORD *)v9 = 16;
        *(_QWORD *)(v8 + 4) = 0LL;
        *((_DWORD *)v8 + 3) = 0;
        *((_DWORD *)v8 + 1) = 154;
        *((_DWORD *)v8 + 2) = *((_DWORD *)v3 + 10);
        *((_DWORD *)v8 + 3) = *(_DWORD *)(*((_QWORD *)v3 + 18) + 24LL);
        *((_DWORD *)v3 + 8) |= 0x400u;
      }
      if ( DirectComposition::CAnimationMarshaler::EmitSetPrimitives((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetHandoff((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetPaused((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetSeek((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetInstance((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitClearTimeEvents((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitAddTimeEvents((DirectComposition::CAnimationMarshaler *)v3, a2) )
      {
        return 1;
      }
    }
  }
  return v2;
}
