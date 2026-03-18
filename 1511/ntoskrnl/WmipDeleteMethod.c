/*
 * XREFs of WmipDeleteMethod @ 0x14048C524
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     WmipCompleteGuidIrpWithError @ 0x1400C8DA8 (WmipCompleteGuidIrpWithError.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipDisableCollectOrEvent @ 0x14048C614 (WmipDisableCollectOrEvent.c)
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
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, *(volatile signed __int64 **)(a1 + 56));
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
