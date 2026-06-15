/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C750
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18000D920 (-_Insert_n@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEA.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  int v6; // r9d
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  int v10; // [rsp+60h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v7 = 0;
  try
  {
    v8 = (_QWORD *)((char *)this + 16 * *((int *)a2 + 2) + 8 * *((int *)a2 + 2) + 80);
    std::vector<Microsoft::WRL::WeakRef>::_Insert_n((_DWORD)v8, (unsigned int)&v10, *v8, v6, (__int64)a3);
  }
  catch ( std::bad_alloc )
  {
    v10 = -2147024882;
    v7 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_c654cfd5aeeaca479956b571394d5ce9_Traceguids, v7);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
