/*
 * XREFs of HvSyncHive @ 0x140606410
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     HvResetUnreconciledData @ 0x14047D624 (HvResetUnreconciledData.c)
 *     HvpTruncateBins @ 0x140480798 (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x1404809E4 (HvResetDirtyData.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvUpdateUnreconciledVector @ 0x1404AA750 (HvUpdateUnreconciledVector.c)
 *     HvResetLogFileStatusAll @ 0x1404D2BE8 (HvResetLogFileStatusAll.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 */

char __fastcall HvSyncHive(ULONG_PTR BugCheckParameter2)
{
  char v1; // si
  char v2; // bp
  char v5; // r15
  __int64 v6; // r9
  BOOLEAN v7; // r14
  unsigned int v8; // r8d
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v1 = 0;
  v2 = 0;
  if ( !*(_DWORD *)(BugCheckParameter2 + 88)
    && !*(_DWORD *)(BugCheckParameter2 + 112)
    && !*(_BYTE *)(BugCheckParameter2 + 175) )
  {
    return 1;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8000) != 0 )
    return 1;
  v5 = HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 )
    return 1;
  v7 = IoSetThreadHardErrorMode(0);
  if ( *(_DWORD *)(BugCheckParameter2 + 88) || *(_BYTE *)(BugCheckParameter2 + 175) )
  {
    if ( !HvpMarkDirty(BugCheckParameter2, 0, 4096, 0) )
      goto LABEL_18;
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
    {
      if ( (int)HvWriteLogFile(BugCheckParameter2, 0, v8, &v11) < 0 )
        goto LABEL_18;
      v1 = 1;
    }
    HvUpdateUnreconciledVector((_RTL_BITMAP *)BugCheckParameter2, 0);
    if ( *(_BYTE *)(BugCheckParameter2 + 174)
      && (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0, 0, 0) < 0 )
    {
      goto LABEL_18;
    }
  }
  if ( (int)HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v6) >= 0
    && (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0) >= 0 )
  {
    v9 = 1;
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
    goto LABEL_19;
  }
LABEL_18:
  v9 = 0;
LABEL_19:
  IoSetThreadHardErrorMode(v7);
  if ( v9 )
  {
    v10 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( *(_DWORD *)(BugCheckParameter2 + 2964) < v10 || v5 == 1 )
      *(_DWORD *)(BugCheckParameter2 + 2964) = v10;
  }
  if ( v2 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
      HvResetLogFileStatusAll(BugCheckParameter2);
    HvResetDirtyData(BugCheckParameter2);
    HvResetUnreconciledData(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 160) = 0;
  }
  else if ( v1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 160) -= v11;
    --*(_DWORD *)(BugCheckParameter2 + 152);
  }
  return v9;
}
