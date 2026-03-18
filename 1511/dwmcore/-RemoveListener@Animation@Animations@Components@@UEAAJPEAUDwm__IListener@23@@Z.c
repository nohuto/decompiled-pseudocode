/*
 * XREFs of ?RemoveListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z @ 0x180163330
 * Callers:
 *     ?RemoveListener@Animation@Animations@Components@@W7EAAJPEAUDwm__IListener@23@@Z @ 0x1800BF570 (-RemoveListener@Animation@Animations@Components@@W7EAAJPEAUDwm__IListener@23@@Z.c)
 * Callees:
 *     ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18016327C (-RemoveAt@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@.c)
 */

__int64 __fastcall Components::Animations::Animation::RemoveListener(
        Components::Animations::Animation *this,
        struct Components::Animations::Dwm__IListener *a2)
{
  __int64 *v2; // r9
  unsigned int v3; // ebx
  struct Components::Animations::Dwm__IListener **v4; // rax
  int v6; // ecx
  int v7; // edx
  __int64 v8; // r8

  v2 = (__int64 *)((char *)this + 104);
  v3 = 0;
  v4 = (struct Components::Animations::Dwm__IListener **)*((_QWORD *)this + 13);
  if ( v4 )
    v6 = *((_DWORD *)v4 - 2);
  else
    v6 = 0;
  v7 = 0;
  if ( v6 <= 0 )
  {
LABEL_8:
    v7 = -1;
  }
  else
  {
    v8 = 0LL;
    while ( *v4 != a2 )
    {
      ++v7;
      ++v8;
      ++v4;
      if ( v8 >= v6 )
        goto LABEL_8;
    }
  }
  if ( v7 == -1 )
    return (unsigned int)-2147483637;
  else
    Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAt(v2, v7);
  return v3;
}
