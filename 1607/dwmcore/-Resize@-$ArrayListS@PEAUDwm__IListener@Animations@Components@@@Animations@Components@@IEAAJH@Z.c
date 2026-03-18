/*
 * XREFs of ?Resize@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1801943E4
 * Callers:
 *     ?AddListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z @ 0x180191960 (-AddListener@Animation@Animations@Components@@UEAAJPEAUDwm__IListener@23@@Z.c)
 * Callees:
 *     ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800210D0 (-Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::Resize(
        __int64 *a1,
        int a2)
{
  int v5; // ebx
  void *v6; // rdx
  _DWORD *v7; // r14
  __int64 v8; // rax
  int v9; // ecx

  if ( a2 + 1 <= a2 )
    return 2147942487LL;
  v5 = 0;
  v6 = (void *)(*a1 - 8);
  if ( !*a1 )
    v6 = 0LL;
  v7 = Components::Animations::Heap::Realloc((Components::Animations::Heap *)&Components::Animations::g_defaultHeap, v6);
  if ( !v7 )
    return 2147942414LL;
  v8 = *a1;
  if ( *a1 )
    v9 = *(_DWORD *)(v8 - 8);
  else
    v9 = 0;
  if ( v8 )
    v5 = *(_DWORD *)(v8 - 8);
  memset_0(&v7[2 * v5], 0, 8LL * (a2 - v9));
  *a1 = (__int64)(v7 + 2);
  *v7 = a2;
  return 0LL;
}
