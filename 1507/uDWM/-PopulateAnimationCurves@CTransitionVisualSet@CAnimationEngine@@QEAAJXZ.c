/*
 * XREFs of ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18003AF84
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18003312C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 i; // r14
  __int64 v4; // rsi
  _QWORD **v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r12
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h]
  __int64 v19; // [rsp+88h] [rbp+48h]

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v4 = **(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
    {
      v6 = *(_QWORD ***)(*((_QWORD *)this + 3) + 8 * i);
      v7 = *v6[1];
      v8 = *v6[5];
      v18 = *v6[4];
      v19 = *v6[6];
      v16 = 0LL;
      v17 = 0LL;
      if ( v7 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 0LL, &v16);
        v1 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x6A6u);
          return v1;
        }
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 1LL, &v17);
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x6A7u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v7 + 56LL))(v7, &v16, 2LL);
      }
      if ( v8 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 2LL, &v16);
        v1 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x6AEu);
          return v1;
        }
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 3LL, &v17);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x6AFu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v16);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v17);
      }
      if ( v18 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 4LL, &v16);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x6B9u);
          return v1;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 5LL, &v17);
        v1 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x6BAu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, v16);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, v17);
      }
      if ( v19 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 6LL, &v16);
        v1 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x6C2u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v16);
      }
    }
  }
  return v1;
}
