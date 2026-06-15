/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021E00
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180023EC0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180021AA0 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180027EBC (-_Insert_n@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  unsigned int v4; // ebx
  int v5; // r9d
  int v7; // [rsp+50h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+18h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
  v4 = 0;
  CDeviceGraphObjectsStore::RemoveStaleObjects(this);
  try
  {
    std::vector<Microsoft::WRL::WeakRef>::_Insert_n((_DWORD)this + 56, (int)&v7, *((_QWORD *)this + 7), v5, a2);
  }
  catch ( std::bad_alloc )
  {
    v7 = -2147024882;
    v4 = -2147024882;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
