/*
 * XREFs of WmipAddMofResource @ 0x140551180
 * Callers:
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipInitializeDataStructs @ 0x14079C638 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipAllocEntry @ 0x1405383A8 (WmipAllocEntry.c)
 *     WmipInsertMofResource @ 0x140551338 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405513B8 (WmipFindMRByNames.c)
 */

__int64 __fastcall WmipAddMofResource(__int64 a1, const wchar_t *a2, char a3, const wchar_t *a4, _BYTE *a5)
{
  unsigned int inserted; // ebx
  __int64 MRByNames; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  SIZE_T v14; // r12
  SIZE_T v15; // rsi
  PVOID PoolWithTag; // rax
  wchar_t *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx

  inserted = 0;
  MRByNames = WmipFindMRByNames(a2, a4);
  if ( MRByNames )
  {
    *a5 = 0;
  }
  else
  {
    v11 = WmipAllocEntry((__int64)&WmipMRChunkInfo);
    MRByNames = (__int64)v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    if ( a3 )
      *((_DWORD *)v11 + 4) |= 1u;
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    v14 = 2 * v13 + 2;
    *(_QWORD *)(MRByNames + 40) = ExAllocatePoolWithTag(PagedPool, v14, 0x70696D57u);
    do
      ++v12;
    while ( a4[v12] );
    v15 = 2 * v12 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x70696D57u);
    v17 = *(wchar_t **)(MRByNames + 40);
    *(_QWORD *)(MRByNames + 48) = PoolWithTag;
    if ( !v17 || !PoolWithTag )
    {
      inserted = -1073741670;
      goto LABEL_15;
    }
    RtlStringCbCopyW(v17, v14, a2);
    RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(MRByNames + 48), v15, a4);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v18 = WmipMRHeadPtr;
    v19 = *(__int64 **)(WmipMRHeadPtr + 8);
    if ( *v19 != WmipMRHeadPtr )
      __fastfail(3u);
    *(_QWORD *)(MRByNames + 8) = v19;
    *(_QWORD *)MRByNames = v18;
    *v19 = MRByNames;
    *(_QWORD *)(v18 + 8) = MRByNames;
    KeReleaseMutex(&WmipSMMutex, 0);
    *a5 = 1;
  }
  if ( a1 )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    inserted = WmipInsertMofResource(a1, MRByNames);
    KeReleaseMutex(&WmipSMMutex, 0);
LABEL_15:
    WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, (volatile signed __int64 *)MRByNames);
  }
  return inserted;
}
