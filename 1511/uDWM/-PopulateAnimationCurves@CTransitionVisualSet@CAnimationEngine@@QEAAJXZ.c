/*
 * XREFs of ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180039568
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180038AE8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180039B30 (-ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 i; // r14
  CAnimatedTransitionVisual **v4; // rcx
  CAnimatedTransitionVisual *v5; // rsi
  bool (__fastcall *v6)(CAnimatedTransitionVisual *__hidden); // rbx
  bool ShouldUseDComp; // al
  _QWORD **v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h]
  __int64 v22; // [rsp+88h] [rbp+48h]

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v4 = *(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * i);
    v5 = *v4;
    v6 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)*v4 + 208LL);
    if ( v6 == CAnimatedTransitionVisual::ShouldUseDComp )
      ShouldUseDComp = CAnimatedTransitionVisual::ShouldUseDComp(*v4);
    else
      ShouldUseDComp = v6(*v4);
    if ( ShouldUseDComp )
    {
      v9 = *(_QWORD ***)(*((_QWORD *)this + 3) + 8 * i);
      v10 = *v9[1];
      v11 = *v9[5];
      v21 = *v9[4];
      v22 = *v9[6];
      v19 = 0LL;
      v20 = 0LL;
      if ( v10 )
      {
        v12 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _QWORD, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                0LL,
                &v19);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x6A6u);
          return v1;
        }
        v13 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                1LL,
                &v20);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x6A7u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v10 + 56LL))(v10, &v19, 2LL);
      }
      if ( v11 )
      {
        v14 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                2LL,
                &v19);
        v1 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x6AEu);
          return v1;
        }
        v15 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                3LL,
                &v20);
        v1 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x6AFu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v19);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v20);
      }
      if ( v21 )
      {
        v16 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                4LL,
                &v19);
        v1 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x6B9u);
          return v1;
        }
        v17 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                5LL,
                &v20);
        v1 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x6BAu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, v19);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, v20);
      }
      if ( v22 )
      {
        v18 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v5 + 216LL))(
                v5,
                6LL,
                &v19);
        v1 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x6C2u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, v19);
      }
    }
  }
  return v1;
}
