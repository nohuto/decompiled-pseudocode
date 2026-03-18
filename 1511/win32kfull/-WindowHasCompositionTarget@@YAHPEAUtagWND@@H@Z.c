/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00D2184
 * Callers:
 *     WindowHasAnyCompositionTargetWithInputSink @ 0x1C0009B68 (WindowHasAnyCompositionTargetWithInputSink.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00D20B4 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r8d
  int v3; // r10d

  Prop = GetProp((__int64)a1, CHwndTargetProp::s_atom, 1LL);
  if ( !Prop )
    return 0;
  if ( v3 ? *(_QWORD *)(Prop + 16) == 0LL : *(_QWORD *)(Prop + 24) == 0LL )
    return 0;
  return v2;
}
