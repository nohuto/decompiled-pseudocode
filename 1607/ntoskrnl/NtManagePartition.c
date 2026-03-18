/*
 * XREFs of NtManagePartition @ 0x1406613A4
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x1406609A4 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(HANDLE Handle, void *a2, int a3, LARGE_INTEGER *a4, size_t a5)
{
  KPROCESSOR_MODE PreviousMode; // r10
  unsigned __int64 v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (_DWORD)a5 )
  {
    if ( ((unsigned __int8)a4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a4 + (unsigned int)a5;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(Size) = a5;
  return MiManagePartition(Handle, a2, a3, a4, Size, PreviousMode);
}
