/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1401A2DC8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rbx
  char v4; // si
  const struct tagWND *v5; // rdi
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rcx
  struct tagWND *Host; // rbp

  v2 = PtiCurrent(a1);
  v3 = v2;
  if ( *((_BYTE *)v2 + 1708) == 1 )
  {
    v4 = 1;
    *((_BYTE *)v2 + 1708) = 0;
  }
  else
  {
    v4 = 0;
  }
  v5 = (const struct tagWND *)ValidateHwnd(a1);
  v7 = PtiCurrent(v6);
  if ( (unsigned int)IAMThreadAccessGranted(v7)
    || v5
    && (unsigned int)CoreWindowProp::IsComponent(v5, v8)
    && (Host = CoreWindowProp::GetHost(v5)) != 0LL
    && *(_QWORD *)(*((_QWORD *)Host + 2) + 456LL) == *((_QWORD *)PtiCurrent(v10) + 57) )
  {
    if ( v4 )
      *((_BYTE *)v3 + 1708) = 1;
    return (__int64)v5;
  }
  else
  {
    if ( v4 )
      *((_BYTE *)v3 + 1708) = 1;
    return ValidateHwnd(a1);
  }
}
