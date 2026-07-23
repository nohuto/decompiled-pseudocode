/*
 * XREFs of SepTokenIsOwner @ 0x14008A540
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1400426B0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     RtlSidHashLookup @ 0x14008A600 (RtlSidHashLookup.c)
 */

bool __fastcall SepTokenIsOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rbx
  PSID_AND_ATTRIBUTES v5; // rax

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v4 = *(void **)(a2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v3 )
      v4 = (void *)(a2 + v3);
    else
      v4 = 0LL;
  }
  v5 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(a1 + 232), v4);
  if ( !v5 || (v5 != *(PSID_AND_ATTRIBUTES *)(a1 + 240) || (v5->Attributes & 0x10) != 0) && (v5->Attributes & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
    return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 504), 0LL, v4, 0, 1, 0);
  return 1;
}
