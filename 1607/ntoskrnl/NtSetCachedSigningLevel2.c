/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1403E21EC
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1403E21CC (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x140009BFC (RtlUnicodeStringValidateEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepReleaseUnicodeStringArray @ 0x1403E2468 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140410BD0 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  char v7; // si
  UNICODE_STRING *PoolWithTag; // r14
  char PreviousMode; // r12
  SIZE_T v10; // r15
  SE_SET_FILE_CACHE_INFORMATION *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v18; // dl
  char v19; // bl
  char v20; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+44h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+50h] [rbp-48h] BYREF
  SE_SIGNING_LEVEL v23; // [rsp+A8h] [rbp+10h]

  v23 = InputSigningLevel;
  v7 = Flags;
  PoolWithTag = 0LL;
  v21 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140301128 )
  {
    v14 = -1073741823;
    goto LABEL_36;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_41;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_55;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_41:
    v14 = -1073741584;
    goto LABEL_36;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_44;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 )
    {
      v21 = 15;
      goto LABEL_9;
    }
    if ( (Flags & 2) != 0 )
    {
      v21 = 8;
      goto LABEL_9;
    }
LABEL_44:
    v14 = -1073741585;
    goto LABEL_36;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_44;
  v7 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    *(_QWORD *)&InputSigningLevel = KeGetCurrentThread()->ApcState.Process;
    v20 = *(_BYTE *)(InputSigningLevel + 1737LL);
    if ( (*(_BYTE *)(InputSigningLevel + 1738LL) & 7) != 1 )
    {
      v14 = -1073741790;
      goto LABEL_36;
    }
    v18 = *(_BYTE *)(InputSigningLevel + 1736LL) & 0xF;
    v19 = v20 & 0xF;
    if ( (unsigned __int8)v18 < (unsigned __int8)(v20 & 0xF) )
      v19 = v18;
    v21 = v19;
  }
LABEL_9:
  v10 = 8LL * SourceFileCount;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v10, 0x63734943u);
  SourceString[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_36;
  }
  if ( PreviousMode == 1 )
  {
    if ( v10 )
    {
      if ( ((unsigned __int8)SourceFiles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&SourceFiles[v10 / 8] > 0x7FFFFFFF0000LL || &SourceFiles[v10 / 8] < SourceFiles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = CacheInformation;
    if ( CacheInformation )
    {
      if ( ((unsigned __int8)CacheInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&CacheInformation->OriginClaimInfo > 0x7FFFFFFF0000LL
        || &CacheInformation->OriginClaimInfo < (SE_FILE_CACHE_CLAIM_INFORMATION *)CacheInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v11 = CacheInformation;
  }
  memmove(PoolWithTag, SourceFiles, v10);
  if ( !v11 )
    goto LABEL_32;
  if ( v11->Size < 0x18 )
  {
    v14 = -1073741580;
    goto LABEL_36;
  }
  if ( !v11->CatalogDirectoryPath.Length
    || (LOBYTE(v12) = PreviousMode,
        v14 = SepCaptureUnicodeStringArray(&v11->CatalogDirectoryPath, 1LL, v12, SourceString),
        v14 >= 0)
    && (v14 = RtlUnicodeStringValidateEx(SourceString[0], InputSigningLevel), v14 >= 0) )
  {
LABEL_32:
    if ( (v7 & 6) == 0 )
    {
LABEL_35:
      LOBYTE(v13) = v21;
      LOBYTE(v12) = v23;
      LOBYTE(v15) = PreviousMode;
      v14 = qword_140301128(v7 & 7, v15, v12, v13, PoolWithTag, SourceFileCount, TargetFile, SourceString[0]);
      goto LABEL_36;
    }
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile == *(HANDLE *)&PoolWithTag->Length )
        goto LABEL_35;
      v14 = -1073741581;
      goto LABEL_36;
    }
LABEL_55:
    v14 = -1073741582;
  }
LABEL_36:
  LOBYTE(v16) = PreviousMode;
  SepReleaseUnicodeStringArray(SourceString[0], v16);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v14;
}
