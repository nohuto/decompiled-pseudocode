/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180019A40 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A4DC (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800233C0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180023460 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  int v9; // ebx
  unsigned int v10; // r12d
  char v11; // si
  __int64 *v12; // rax
  __int64 *v13; // r8
  __int64 *v14; // rcx
  int v16; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 (__fastcall *v20)(__int64, unsigned int, unsigned int, unsigned int); // rax
  _BYTE v21[16]; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v9 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  v11 = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(v4, (__int64)&lpCriticalSection);
  if ( a2 - 1 <= 1 )
  {
    v12 = *(__int64 **)(v4 + 40);
    v13 = v12;
    v14 = (__int64 *)v12[1];
    while ( !*((_BYTE *)v14 + 25) )
    {
      if ( *((_DWORD *)v14 + 7) < a4 )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    if ( v13 == v12 || a4 < *((_DWORD *)v13 + 7) )
      v13 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        v4 + 40,
        v21);
  }
  if ( a2 > 1 || (v9 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v9 >= 0) )
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v11 = 0;
      v16 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v16 != *(_DWORD *)(v4 + 56) )
      {
        v11 = 1;
        *(_DWORD *)(v4 + 56) = v16;
      }
      v9 = 0;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !v11 )
    return (unsigned int)v9;
  v18 = *(_QWORD *)(a1 + 72);
  v19 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 56LL);
  if ( !v18 )
    return (unsigned int)v9;
  v20 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v18 + 72LL);
  if ( v20 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
    return CSaDeviceProxy::UpdateStreamGroupResourcePriority(v18, 1u, v19, v10);
  else
    return v20(v18, 1u, v19, v10);
}
