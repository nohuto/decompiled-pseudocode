/*
 * XREFs of NtManagePartition @ 0x140624EB0
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(HANDLE Handle, void *a2, int a3, unsigned __int64 a4, size_t a5)
{
  KPROCESSOR_MODE PreviousMode; // r10
  ULONG64 v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (_DWORD)a5 )
  {
    if ( (a4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a4 + (unsigned int)a5;
    if ( v7 > MmUserProbeAddress || v7 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  LODWORD(Size) = a5;
  return MiManagePartition(Handle, a2, a3, a4, Size, PreviousMode);
}
