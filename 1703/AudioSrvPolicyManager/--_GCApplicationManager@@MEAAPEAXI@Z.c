/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180010FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009AD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000EC6C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000F1B0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rsi
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+30h] [rbp-38h]

  *(_QWORD *)this = &CApplicationManager::`vftable';
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v5 )
  {
    v6 = (volatile signed __int32 *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v6, 1);
      CProcess::NotifyPLM((__int64)v6, 1);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 32LL))(v6);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      }
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v7 )
  {
    v8 = (volatile signed __int32 *)v7[2];
    v7 = (_QWORD *)*v7;
    if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 112);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 64);
  DeleteCriticalSection(v4);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
