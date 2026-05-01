/*
 * XREFs of RmpActivityHostResourceSetsChanged @ 0x180014D98
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 */

int __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int result; // eax
  __int64 v9; // rcx

  RmpActivityHostUpdateDigests((__int64)a1, a2);
  RmpActivityHostUpdateImportance(a1, a2);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 138);
  v4 = *((_QWORD *)a1 + 5);
  result = RmpActivityHostIsRevocable(a1, v5, v6, v7);
  if ( result )
    result = SetEvent(*(HANDLE *)(v4 + 368));
  if ( (a2 & 2) != 0 )
  {
    *((_QWORD *)a1 + 96) = 0LL;
    v9 = *(_QWORD *)(v4 + 3344);
    result = *(_DWORD *)(v9 + 256);
    if ( (result & 3) == 0 )
    {
      *(_DWORD *)(v9 + 256) = result | 1;
      return TpPostWork(*(_QWORD *)(v9 + 240));
    }
  }
  return result;
}
