/*
 * XREFs of WmipDeleteMethod @ 0x1404CC380
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     WmipCompleteGuidIrpWithError @ 0x1400A1C90 (WmipCompleteGuidIrpWithError.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipDisableCollectOrEvent @ 0x1404CC470 (WmipDisableCollectOrEvent.c)
 *     WmipUnreferenceEntry @ 0x140505084 (WmipUnreferenceEntry.c)
 */

LONG __fastcall WmipDeleteMethod(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  LONG result; // eax
  void *v6; // rcx
  void *v7; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 160) )
      WmipDisableCollectOrEvent(v2, *(unsigned int *)(a1 + 64));
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD **)(a1 + 48);
    if ( *(_QWORD *)(v3 + 8) != a1 + 40 || *v4 != a1 + 40 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    KeReleaseMutex(&WmipSMMutex, 0);
    WmipUnreferenceEntry(&WmipGEChunkInfo, *(_QWORD *)(a1 + 56));
  }
  result = *(_DWORD *)(a1 + 164);
  if ( (result & 2) == 0 )
  {
    v6 = *(void **)(a1 + 96);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    v7 = *(void **)(a1 + 128);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    WmipCompleteGuidIrpWithError(a1);
    return KeReleaseMutex(&WmipSMMutex, 0);
  }
  return result;
}
