/*
 * XREFs of ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180086000
 * Callers:
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x1800B23B0 (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 * Callees:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Animation::xwPreDelete(Components::Animations::Animation *this)
{
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // ebp

  if ( (*((_BYTE *)this + 104) & 4) != 0 )
    Components::Animations::Animation::ApiReset(this, 0);
  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 8);
  else
    v4 = 0;
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v2 + 8LL * v3) + 8LL))(
      *(_QWORD *)(v2 + 8LL * v3),
      (char *)this + 8);
    ++v3;
  }
  Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAll((char *)this + 24);
}
