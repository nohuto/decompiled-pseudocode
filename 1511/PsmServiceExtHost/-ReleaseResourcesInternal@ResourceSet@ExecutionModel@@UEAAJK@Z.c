/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0
 * Callers:
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000E760 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  void *v6; // rcx
  void *v7; // rcx

  v2 = *((_QWORD *)this + 175);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 16));
  if ( *((_DWORD *)this + 338) )
  {
    if ( *((_BYTE *)this + 12) )
    {
      v3 = *((_QWORD *)this + 175);
      if ( !v3 || *(_DWORD *)(v3 + 40) == 1 )
      {
        v4 = -2147220221;
        goto LABEL_9;
      }
    }
    ExecutionModel::ResourceSet::PerformReleaseResources(this, a2);
  }
  v4 = 0;
LABEL_9:
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( *(_DWORD *)(v2 + 32) == 1 )
    {
      if ( *(_QWORD *)(v2 + 752) )
        TpReleaseWork();
      RmpEmptyWorkerCleanup(v2 + 800);
      if ( *(_DWORD *)(v2 + 40) == 1 )
      {
        v6 = *(void **)(v2 + 704);
        if ( v6 )
          CloseHandle(v6);
        v7 = *(void **)(v2 + 712);
        if ( v7 )
          CloseHandle(v7);
      }
    }
    RmpFreeHeap((PVOID)v2);
  }
  return v4;
}
