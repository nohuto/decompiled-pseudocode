/*
 * XREFs of ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008030
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x180008118 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800084F0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x180009888 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::OnDuckWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct CDuckWorkItem *v4; // rdi
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 208);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = (struct CDuckWorkItem *)ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::RemoveHead(a2 + 248);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*((_DWORD *)a2 + 78) )
  {
    if ( *((_DWORD *)v4 + 3) == 1 )
    {
      CDuckingManager::OnAutoDuckWorkItem((CDuckingManager *)a2, v4);
    }
    else if ( *((_DWORD *)v4 + 3) == 2 )
    {
      CDuckingManager::OnAutoUnduckWorkItem((CDuckingManager *)a2, v4);
    }
  }
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 16LL))(*(_QWORD *)v4);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 32LL))(a2);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  }
}
