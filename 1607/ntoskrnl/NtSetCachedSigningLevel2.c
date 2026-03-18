/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x1403E21EC
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1403E21CC (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14000A07C (RtlUnicodeStringValidateEx.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepReleaseUnicodeStringArray @ 0x1403E2468 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140411D10 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(
        char a1,
        _KPROCESS *Process,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  char v7; // si
  UNICODE_STRING *PoolWithTag; // r14
  char PreviousMode; // r12
  SIZE_T v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // ebx
  char v16; // dl
  char v17; // bl
  char v18; // [rsp+40h] [rbp-58h]
  char v19; // [rsp+44h] [rbp-54h]
  PCUNICODE_STRING SourceString[4]; // [rsp+50h] [rbp-48h] BYREF
  char v21; // [rsp+A8h] [rbp+10h]

  v21 = (char)Process;
  v7 = a1;
  PoolWithTag = 0LL;
  v19 = 0;
  SourceString[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !qword_140301128 )
  {
    v14 = -1073741823;
    goto LABEL_36;
  }
  if ( ((unsigned __int8)Process & 0x30) != 0 )
    goto LABEL_41;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_55;
  if ( (a1 & 6) == 0 && (_BYTE)Process )
  {
LABEL_41:
    v14 = -1073741584;
    goto LABEL_36;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_44;
  if ( PreviousMode != 1 )
  {
    if ( (a1 & 1) != 0 )
    {
      v19 = 15;
      goto LABEL_9;
    }
    if ( (a1 & 2) != 0 )
    {
      v19 = 8;
      goto LABEL_9;
    }
LABEL_44:
    v14 = -1073741585;
    goto LABEL_36;
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_44;
  v7 = a1 | 1;
  if ( (a1 & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v18 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    if ( (BYTE2(Process[2].ActiveProcessors.Bitmap[0]) & 7) != 1 )
    {
      v14 = -1073741790;
      goto LABEL_36;
    }
    v16 = Process[2].ActiveProcessors.Bitmap[0] & 0xF;
    v17 = v18 & 0xF;
    if ( (unsigned __int8)v16 < (unsigned __int8)(v18 & 0xF) )
      v17 = v16;
    v19 = v17;
  }
LABEL_9:
  v10 = 8LL * a4;
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
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v10] > 0x7FFFFFFF0000LL || &a3[v10] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v11 = a6;
  }
  memmove(PoolWithTag, a3, v10);
  if ( !v11 )
    goto LABEL_32;
  if ( *(_DWORD *)v11 < 0x18u )
  {
    v14 = -1073741580;
    goto LABEL_36;
  }
  if ( !*(_WORD *)(v11 + 8)
    || (LOBYTE(v12) = PreviousMode, v14 = SepCaptureUnicodeStringArray(v11 + 8, 1LL, v12, SourceString), v14 >= 0)
    && (v14 = RtlUnicodeStringValidateEx(SourceString[0], (ULONG)Process), v14 >= 0) )
  {
LABEL_32:
    if ( (v7 & 6) == 0 )
    {
LABEL_35:
      LOBYTE(v13) = v19;
      LOBYTE(v12) = v21;
      LOBYTE(Process) = PreviousMode;
      v14 = qword_140301128(v7 & 7, Process, v12, v13, PoolWithTag, a4, a5, SourceString[0]);
      goto LABEL_36;
    }
    if ( a4 == 1 )
    {
      if ( a5 == *(_QWORD *)&PoolWithTag->Length )
        goto LABEL_35;
      v14 = -1073741581;
      goto LABEL_36;
    }
LABEL_55:
    v14 = -1073741582;
  }
LABEL_36:
  LOBYTE(Process) = PreviousMode;
  SepReleaseUnicodeStringArray(SourceString[0], Process);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return (unsigned int)v14;
}
