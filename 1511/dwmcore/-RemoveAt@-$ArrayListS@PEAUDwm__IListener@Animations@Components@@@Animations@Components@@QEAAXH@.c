/*
 * XREFs of ?RemoveAt@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18016327C
 * Callers:
 *     ?RemoveListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z @ 0x180163330 (-RemoveListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1801637B0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x180163900 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 */

void __fastcall Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAt(
        __int64 *a1,
        int a2)
{
  __int64 v2; // r10
  int v4; // ebx
  int v5; // ebx
  char *v6; // rax

  v2 = *a1;
  if ( *a1 )
    v4 = *(_DWORD *)(v2 - 8);
  else
    v4 = 0;
  if ( a2 < v4 && a2 >= 0 && v4 >= 0 )
  {
    v5 = v4 - 1;
    if ( v5 <= 0 )
    {
      Components::Animations::Heap::Free(
        (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
        (void *)(v2 - 8));
      *a1 = 0LL;
    }
    else
    {
      if ( a2 < v5 )
        memmove((void *)(v2 + 8LL * a2), (const void *)(v2 + 8LL * (a2 + 1)), 8LL * (v5 - a2));
      v6 = (char *)Components::Animations::Heap::Realloc(
                     (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
                     (void *)(*a1 - 8),
                     8LL * (v5 + 1));
      if ( v6 )
        *a1 = (__int64)(v6 + 8);
      *(_DWORD *)(*a1 - 8) = v5;
    }
  }
}
