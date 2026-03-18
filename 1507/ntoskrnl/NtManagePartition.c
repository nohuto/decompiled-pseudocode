/*
 * XREFs of NtManagePartition @ 0x1406A4780
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(HANDLE Handle, void *a2, int a3, LARGE_INTEGER *a4, size_t a5)
{
  KPROCESSOR_MODE PreviousMode; // r10
  ULONG64 v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (_DWORD)a5 )
  {
    if ( ((unsigned __int8)a4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (ULONG64)a4 + (unsigned int)a5;
    if ( v7 > MmUserProbeAddress || v7 < (unsigned __int64)a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  LODWORD(Size) = a5;
  return MiManagePartition(Handle, a2, a3, a4, Size, PreviousMode);
}
