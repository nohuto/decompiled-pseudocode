/*
 * XREFs of ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC (-DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC (-DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z.c)
 *     ?IsBackdropInput@CEffectBrush@@QEBA_NI@Z @ 0x18013C1E4 (-IsBackdropInput@CEffectBrush@@QEBA_NI@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

char __fastcall CEffectBrush::DoesBackdropInputContributeToSubgraph(
        CCompiledEffectTemplate **this,
        unsigned int a2,
        bool *a3)
{
  char v3; // bl
  char v4; // di
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  char v10; // cl
  bool v11; // al
  _BYTE v13[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-34h]
  const struct Windows::UI::Composition::ICompiledEffect *v15; // [rsp+38h] [rbp-30h]

  v3 = 0;
  v4 = 0;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(this[17]);
  v15 = CompiledEffectNoRef;
  v14 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 32LL))(
          CompiledEffectNoRef,
          a2);
  v7 = 0;
  if ( v14 )
  {
    do
    {
      v8 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)CompiledEffectNoRef + 56LL))(
             CompiledEffectNoRef,
             a2,
             v7,
             v13);
      v9 = v8;
      if ( v13[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompiledEffectTemplate *, _QWORD))(*(_QWORD *)this[19] + 48LL))(
               this[19],
               v8) )
        {
          v4 |= CEffectBrush::DoesBackdropInputContributeToSubgraph((CEffectBrush *)this, v9, a3);
        }
      }
      else if ( CEffectBrush::IsBackdropInput((CEffectBrush *)this, v8) )
      {
        v10 = 1;
        goto LABEL_11;
      }
      CompiledEffectNoRef = v15;
      ++v7;
    }
    while ( v7 < v14 );
    v10 = 0;
    if ( !v4 )
      goto LABEL_11;
    v11 = 1;
  }
  else
  {
    v10 = 0;
LABEL_11:
    v11 = 0;
  }
  *a3 = v11;
  if ( v10 || v4 )
    return 1;
  return v3;
}
