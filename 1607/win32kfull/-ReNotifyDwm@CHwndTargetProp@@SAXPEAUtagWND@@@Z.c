/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C00977CC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 Prop; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  CompositionObject *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  CompositionObject *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  void *v18; // [rsp+38h] [rbp+10h] BYREF

  Prop = GetProp((__int64)a1, CHwndTargetProp::s_atom, 1LL);
  v3 = 0LL;
  v4 = Prop;
  if ( Prop )
  {
    v5 = *(CompositionObject **)(Prop + 16);
    if ( v5 && (int)CompositionObject::OpenDwmHandle(v5, &v18) >= 0 )
    {
      v10 = 0LL;
      if ( a1 )
        v10 = *(_QWORD *)a1;
      v11 = ReferenceDwmApiPort(v7, v6, v8, v9);
      DwmAsyncCreateDCompositionHwndTarget(v11, v10, 1LL, v18);
    }
    v12 = *(CompositionObject **)(v4 + 24);
    if ( v12 && (int)CompositionObject::OpenDwmHandle(v12, &v18) >= 0 )
    {
      if ( a1 )
        v3 = *(_QWORD *)a1;
      v17 = ReferenceDwmApiPort(v14, v13, v15, v16);
      DwmAsyncCreateDCompositionHwndTarget(v17, v3, 0LL, v18);
    }
  }
}
