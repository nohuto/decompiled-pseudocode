/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180011AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000FAE0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rsi
  const GUID *v7; // r8
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // rsi
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v13; // [rsp+30h] [rbp-38h]

  *(_QWORD *)this = &CApplicationManager::`vftable';
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v5 )
  {
    v6 = (volatile signed __int32 *)v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v6, 1);
      CProcess::NotifyPLM((__int64)v6, 1, v7);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 32LL))(v6);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      }
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v8 )
  {
    v9 = (volatile signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 112);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 64);
  DeleteCriticalSection(v4);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
