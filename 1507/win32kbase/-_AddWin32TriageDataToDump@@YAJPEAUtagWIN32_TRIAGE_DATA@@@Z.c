/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00AE878
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1C00AEBF0 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C00AE724 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C00AE7F4 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  _QWORD *j; // rdi
  unsigned int v5; // eax
  _QWORD *k; // rdi
  unsigned int v7; // eax
  void **m; // rdi
  _QWORD *n; // rdi

  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 296LL); i; i = *(_QWORD *)(i + 592) )
    _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)i);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)a1);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 296LL);
  if ( v3 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v3 + 416));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 296LL) + 424LL));
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 336LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 312LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 640LL));
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 320LL); j; j = (_QWORD *)*j )
  {
    v5 = *((_DWORD *)a1 + 4);
    if ( v5 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v5 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  for ( k = *(_QWORD **)(*(_QWORD *)a1 + 328LL); k; k = (_QWORD *)*k )
  {
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v7 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, k);
  }
  for ( m = (void **)gsmsList; m != &gsmsList && *((_DWORD *)a1 + 2) < 0x3E8u; m = (void **)*m )
  {
    _AddMemoryBlockToLiveTriageDump(a1, m);
    _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)m[4]);
    _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)m[5]);
    _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)m[8]);
    _AddMemoryBlockToLiveTriageDump(a1, m[14]);
    ++*((_DWORD *)a1 + 2);
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gsmsList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiRit & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiForeground & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpai & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gbRemoteSession & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpDeviceInfoList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresDeviceInfoList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpvwplHungRedraw & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpsi & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gSharedInfo & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  _AddThreadInfoToLiveTriageDump(a1, gptiRit);
  _AddThreadInfoToLiveTriageDump(a1, gptiForeground);
  _AddMemoryBlockToLiveTriageDump(a1, gpDeviceInfoList);
  _AddMemoryBlockToLiveTriageDump(a1, gpresDeviceInfoList);
  _AddMemoryBlockToLiveTriageDump(a1, gpresUser);
  _AddMemoryBlockToLiveTriageDump(a1, gpvwplHungRedraw);
  _AddMemoryBlockToLiveTriageDump(a1, gpsi);
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( n = gpai; n; n = (_QWORD *)*n )
    _AddMemoryBlockToLiveTriageDump(a1, n);
  return 0LL;
}
