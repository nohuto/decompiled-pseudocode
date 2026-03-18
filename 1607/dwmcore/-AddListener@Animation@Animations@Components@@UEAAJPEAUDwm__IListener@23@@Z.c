/*
 * XREFs of ?AddListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z @ 0x180191960
 * Callers:
 *     <none>
 * Callees:
 *     ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801943E4 (-Resize@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::AddListener(
        Components::Animations::Animation *this,
        struct Components::Animations::Dwm__IListener *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  int v5; // ebx
  __int64 result; // rax
  bool v7; // sf
  _QWORD *v8; // r8

  v2 = (_QWORD *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 8);
  else
    v5 = 0;
  result = Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::Resize(
             v2,
             (unsigned int)(v5 + 1));
  v7 = (int)result < 0;
  if ( (int)result >= 0 )
  {
    v8 = (_QWORD *)(*v2 + 8LL * v5);
    if ( v8 )
      *v8 = a2;
    v7 = (int)result < 0;
  }
  if ( !v7 )
    return 0LL;
  return result;
}
