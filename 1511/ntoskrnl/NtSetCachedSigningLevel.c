/*
 * XREFs of NtSetCachedSigningLevel @ 0x1403B5004
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  __int64 v5; // r13
  char v8; // bl
  HANDLE *PoolWithTag; // rdi
  char v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ebx
  _KPROCESS *Process; // rdx
  char v18; // dl
  char v19; // [rsp+40h] [rbp-28h]
  char PreviousMode; // [rsp+41h] [rbp-27h]

  v5 = SourceFileCount;
  v8 = Flags;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( !qword_1402DBDC8 )
  {
    v15 = -1073741823;
    goto LABEL_22;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_28;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_26;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_28:
    v15 = -1073741584;
    goto LABEL_22;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_31;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 )
    {
      v10 = 15;
      goto LABEL_9;
    }
    if ( (Flags & 2) != 0 )
    {
      v10 = 8;
      goto LABEL_9;
    }
LABEL_31:
    v15 = -1073741585;
    goto LABEL_22;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_31;
  v8 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v19 = BYTE1(Process[2].SwapListEntry.Next);
    if ( (BYTE2(Process[2].SwapListEntry.Next) & 7) != 1 )
    {
      v15 = -1073741790;
      goto LABEL_22;
    }
    v18 = (__int64)Process[2].SwapListEntry.Next & 0xF;
    v10 = v19 & 0xF;
    if ( (unsigned __int8)v18 < (unsigned __int8)(v19 & 0xF) )
      v10 = v18;
  }
LABEL_9:
  v11 = SourceFileCount;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, v11 * 8, 0x63734943u);
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_22;
  }
  if ( PreviousMode == 1 && v11 * 8 )
  {
    if ( ((unsigned __int8)SourceFiles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&SourceFiles[v11] > MmUserProbeAddress || &SourceFiles[v11] < SourceFiles )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, SourceFiles, 8 * v5);
  if ( (v8 & 6) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v5 != 1 )
  {
LABEL_26:
    v15 = -1073741582;
    goto LABEL_22;
  }
  if ( TargetFile == *PoolWithTag )
  {
LABEL_21:
    LOBYTE(v14) = v10;
    LOBYTE(v13) = InputSigningLevel;
    LOBYTE(v12) = PreviousMode;
    v15 = qword_1402DBDC8(v8 & 7, v12, v13, v14, PoolWithTag, v5, TargetFile);
    goto LABEL_22;
  }
  v15 = -1073741581;
LABEL_22:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v15;
}
