/*
 * XREFs of ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163394
 * Callers:
 *     ?AddListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z @ 0x180160D80 (-AddListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x180163900 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::Resize(
        __int64 *a1,
        int a2)
{
  int v4; // ecx
  int v6; // ebx
  void *v7; // rdx
  _DWORD *v8; // r14
  __int64 v9; // rax
  int v10; // ecx

  v4 = a2 + 1;
  if ( a2 + 1 <= a2 )
    return 2147942487LL;
  v6 = 0;
  v7 = (void *)(*a1 - 8);
  if ( !*a1 )
    v7 = 0LL;
  v8 = Components::Animations::Heap::Realloc(
         (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
         v7,
         8LL * v4);
  if ( !v8 )
    return 2147942414LL;
  v9 = *a1;
  if ( *a1 )
    v10 = *(_DWORD *)(v9 - 8);
  else
    v10 = 0;
  if ( v9 )
    v6 = *(_DWORD *)(v9 - 8);
  memset_0(&v8[2 * v6], 0, 8LL * (a2 - v10));
  *a1 = (__int64)(v8 + 2);
  *v8 = a2;
  return 0LL;
}
