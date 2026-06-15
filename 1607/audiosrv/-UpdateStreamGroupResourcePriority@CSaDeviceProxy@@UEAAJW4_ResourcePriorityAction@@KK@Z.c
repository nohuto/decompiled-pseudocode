/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180022D10 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180022E44 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800233C0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180023460 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  int v9; // ebx
  char v10; // si
  __int64 *v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx
  int v15; // ecx
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  v10 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(v4, (__int64)&lpCriticalSection);
  if ( a2 - 1 <= 1 )
  {
    v11 = *(__int64 **)(v4 + 40);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( *((_DWORD *)v13 + 7) < a4 )
      {
        v13 = (__int64 *)v13[2];
      }
      else
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
    }
    if ( v12 == v11 || a4 < *((_DWORD *)v12 + 7) )
      v12 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v12 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        v4 + 40,
        v17);
  }
  if ( a2 > 1 || (v9 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v9 >= 0) )
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v10 = 0;
      v15 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v15 != *(_DWORD *)(v4 + 56) )
      {
        v10 = 1;
        *(_DWORD *)(v4 + 56) = v15;
      }
      v9 = 0;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 >= 0 && v10 )
    return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL))(
             g_PolicyManager,
             *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
             a1 + 56);
  else
    return (unsigned int)v9;
}
