/*
 * XREFs of ?GetInputMapping@CEffectBrush@@CAPEBUEffectInput@@PEBUICompiledEffect@Composition@UI@Windows@@IIAEBUEffectStage@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@@Z @ 0x18013BD38
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetInputMapping(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // eax
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)a1 + 56LL))(a1, a2, a3, &v8);
  if ( v8 )
    return *a5 + 72LL * v6;
  else
    return a4 + 8 * (9LL * v6 + 1);
}
