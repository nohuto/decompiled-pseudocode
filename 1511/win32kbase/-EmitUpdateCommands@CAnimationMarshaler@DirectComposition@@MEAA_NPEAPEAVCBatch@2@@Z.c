/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018540
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017FAC (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00180B0 (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018114 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018190 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00181FC (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00182D4 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018368 (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  char *v3; // rbx
  char *v5; // rcx
  char *v7; // rcx
  char *v8; // rdx
  char *v9; // rdx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (char *)this - 16;
  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return v2;
    v5 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 141;
    *((_DWORD *)v5 + 2) = *((_DWORD *)v3 + 10);
    *((_DWORD *)v5 + 3) = *((_DWORD *)v3 + 56);
    *((_DWORD *)v3 + 8) &= ~0x40000u;
  }
  if ( DirectComposition::CAnimationMarshaler::EmitBeginTime((DirectComposition::CAnimationMarshaler *)v3, a2) )
  {
    if ( !*((_QWORD *)v3 + 18) )
      goto LABEL_22;
    if ( (*((_DWORD *)v3 + 8) & 0x400) == 0 && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
    {
      v7 = (char *)v10;
      *(_DWORD *)v10 = 28;
      *(_QWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 12) = 0LL;
      *(_QWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 133;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v3 + 10);
      *(_OWORD *)(v7 + 12) = *(_OWORD *)*((_QWORD *)v3 + 18);
      *((_DWORD *)v3 + 8) |= 0x400u;
    }
    if ( !*((_QWORD *)v3 + 18) || (*((_DWORD *)v3 + 8) & 0x400) != 0 )
    {
LABEL_22:
      if ( *((_QWORD *)v3 + 17) && (*((_DWORD *)v3 + 8) & 0x800) == 0 )
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
          return v2;
        v8 = (char *)v10;
        *(_DWORD *)v10 = 16;
        *(_QWORD *)(v8 + 4) = 0LL;
        *((_DWORD *)v8 + 3) = 0;
        *((_DWORD *)v8 + 1) = 134;
        *((_DWORD *)v8 + 2) = *((_DWORD *)v3 + 10);
        *((_DWORD *)v8 + 3) = *(_DWORD *)(*((_QWORD *)v3 + 17) + 24LL);
        *((_DWORD *)v3 + 8) |= 0x800u;
      }
      if ( DirectComposition::CAnimationMarshaler::EmitSetPrimitives((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetHandoff((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetPaused((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetSeek((DirectComposition::CAnimationMarshaler *)v3, a2)
        && DirectComposition::CAnimationMarshaler::EmitSetInstance((DirectComposition::CAnimationMarshaler *)v3, a2) )
      {
        if ( (*((_DWORD *)v3 + 8) & 0x20000) != 0 )
        {
          if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
            return v2;
          v9 = (char *)v10;
          *(_DWORD *)v10 = 12;
          *(_QWORD *)(v9 + 4) = 0LL;
          *((_DWORD *)v9 + 1) = 139;
          *((_DWORD *)v9 + 2) = *((_DWORD *)v3 + 10);
          *((_DWORD *)v3 + 8) &= ~0x20000u;
        }
        if ( DirectComposition::CAnimationMarshaler::EmitAddTimeEvents((DirectComposition::CAnimationMarshaler *)v3, a2) )
          return 1;
      }
    }
  }
  return v2;
}
