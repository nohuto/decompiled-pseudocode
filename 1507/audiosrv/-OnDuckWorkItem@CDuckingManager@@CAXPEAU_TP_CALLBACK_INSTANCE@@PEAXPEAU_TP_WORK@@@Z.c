/*
 * XREFs of ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18009BD50 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ??_GCDuckWorkItem@@QEAAPEAXI@Z @ 0x1800A447C (--_GCDuckWorkItem@@QEAAPEAXI@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5A30 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5DE0 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 */

void __fastcall CDuckingManager::OnDuckWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  struct CDuckWorkItem *v5; // rdi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 208);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 208));
  v5 = (struct CDuckWorkItem *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64 **)a2 + 31);
  LeaveCriticalSection(v3);
  if ( !*((_DWORD *)a2 + 78) )
  {
    if ( *((_DWORD *)v5 + 3) == 1 )
    {
      CDuckingManager::OnAutoDuckWorkItem((CDuckingManager *)a2, v5);
    }
    else if ( *((_DWORD *)v5 + 3) == 2 )
    {
      CDuckingManager::OnAutoUnduckWorkItem((CDuckingManager *)a2, (unsigned __int16 **)v5);
    }
  }
  if ( v5 )
    CDuckWorkItem::`scalar deleting destructor'(v5);
  CUnknown::Release((CUnknown *)a2);
}
