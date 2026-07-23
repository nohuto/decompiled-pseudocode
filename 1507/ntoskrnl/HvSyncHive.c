/*
 * XREFs of HvSyncHive @ 0x14065E25C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     HvpTruncateBins @ 0x14044D444 (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x14044D6FC (HvResetDirtyData.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvUpdateUnreconciledVector @ 0x14052E288 (HvUpdateUnreconciledVector.c)
 *     HvResetUnreconciledData @ 0x14055A6AC (HvResetUnreconciledData.c)
 *     HvResetLogFileStatusAll @ 0x14055BA34 (HvResetLogFileStatusAll.c)
 */

char __fastcall HvSyncHive(ULONG_PTR BugCheckParameter2)
{
  char v1; // si
  char v2; // bp
  char v5; // r15
  __int64 v6; // r9
  BOOLEAN v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  char v10; // di
  unsigned int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
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
      if ( (int)HvWriteLogFile(BugCheckParameter2, 0, v8, &v12) < 0 )
        goto LABEL_18;
      v1 = 1;
    }
    HvUpdateUnreconciledVector((_RTL_BITMAP *)BugCheckParameter2, 0);
    if ( *(_BYTE *)(BugCheckParameter2 + 174)
      && (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, 0LL, 0) < 0 )
    {
      goto LABEL_18;
    }
  }
  if ( (int)HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v6) >= 0 )
  {
    LOBYTE(v9) = 1;
    if ( (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v9, 0LL, 0) >= 0 )
    {
      v10 = 1;
      v2 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
      goto LABEL_19;
    }
  }
LABEL_18:
  v10 = 0;
LABEL_19:
  IoSetThreadHardErrorMode(v7);
  if ( v10 )
  {
    v11 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( *(_DWORD *)(BugCheckParameter2 + 2964) < v11 || v5 == 1 )
      *(_DWORD *)(BugCheckParameter2 + 2964) = v11;
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
    *(_DWORD *)(BugCheckParameter2 + 160) -= v12;
    --*(_DWORD *)(BugCheckParameter2 + 152);
  }
  return v10;
}
