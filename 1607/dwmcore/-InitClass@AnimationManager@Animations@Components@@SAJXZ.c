/*
 * XREFs of ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x1800AD134
 * Callers:
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800AD104 (-AnInitializeEngine@@YAXXZ.c)
 * Callees:
 *     ?ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ @ 0x1800AD24C (-ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 Components::Animations::AnimationManager::InitClass(void)
{
  __int64 v0; // rax
  Components::Animations::AnimationManager *v1; // rbx
  __int64 result; // rax

  if ( Components::Animations::AnimationManager::s_PORT_pSingleton )
    return 0LL;
  v0 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         240LL);
  v1 = (Components::Animations::AnimationManager *)v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = &Components::Animations::AnimationManager::`vftable';
    *(_DWORD *)(v0 + 16) = 0;
    *(_QWORD *)(v0 + 8) = v0 + 24;
    *(_DWORD *)(v0 + 20) = 8;
    *(_DWORD *)(v0 + 96) = 0;
    *(_QWORD *)(v0 + 88) = v0 + 104;
    *(_DWORD *)(v0 + 100) = 8;
    *(_QWORD *)(v0 + 168) = 0LL;
    *(_QWORD *)(v0 + 176) = 0LL;
    *(_QWORD *)(v0 + 200) = 0LL;
    *(_QWORD *)(v0 + 208) = 0LL;
    *(_QWORD *)(v0 + 224) = 0LL;
    *(_QWORD *)(v0 + 232) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 2147942414LL;
  result = Components::Animations::AnimationManager::ApiCreate(v1);
  if ( (int)result >= 0 )
  {
    Components::Animations::AnimationManager::s_PORT_pSingleton = v1;
    return 0LL;
  }
  return result;
}
