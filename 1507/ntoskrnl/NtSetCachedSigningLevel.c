/*
 * XREFs of NtSetCachedSigningLevel @ 0x14058CEF8
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  _KPROCESS *Process; // rdx
  NTSTATUS v12; // ebx
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+40h] [rbp-28h]
  char PreviousMode; // [rsp+41h] [rbp-27h]

  v5 = SourceFileCount;
  v8 = Flags;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( !qword_14032C128 )
  {
    v12 = -1073741823;
    goto LABEL_12;
  }
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_17;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_39;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_17:
    v12 = -1073741584;
    goto LABEL_12;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_15;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (Flags & 2) == 0 )
    {
      v8 = Flags | 1;
      if ( (Flags & 4) == 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v19 = BYTE1(Process[2].ReadyListHead.Blink);
        if ( (BYTE2(Process[2].ReadyListHead.Blink) & 7) != 1 )
        {
          v12 = -1073741790;
          goto LABEL_12;
        }
        v14 = (__int64)Process[2].ReadyListHead.Blink & 0xF;
        v10 = v19 & 0xF;
        if ( (unsigned __int8)v14 < (unsigned __int8)(v19 & 0xF) )
          v10 = v14;
      }
      goto LABEL_25;
    }
LABEL_15:
    v12 = -1073741585;
    goto LABEL_12;
  }
  if ( (Flags & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (Flags & 2) == 0 )
      goto LABEL_15;
    v10 = 8;
  }
LABEL_25:
  v15 = SourceFileCount;
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, v15 * 8, 0x63734943u);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_12;
  }
  if ( PreviousMode == 1 && v15 * 8 )
  {
    if ( ((unsigned __int8)SourceFiles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&SourceFiles[v15] > MmUserProbeAddress || &SourceFiles[v15] < SourceFiles )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, SourceFiles, 8 * v5);
  if ( (v8 & 6) == 0 )
  {
LABEL_38:
    LOBYTE(v18) = v10;
    LOBYTE(v17) = InputSigningLevel;
    LOBYTE(v16) = PreviousMode;
    v12 = qword_14032C128(v8 & 7, v16, v17, v18, PoolWithTag, v5, TargetFile);
    goto LABEL_12;
  }
  if ( (_DWORD)v5 == 1 )
  {
    if ( TargetFile != *PoolWithTag )
    {
      v12 = -1073741581;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
LABEL_39:
  v12 = -1073741582;
LABEL_12:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}
