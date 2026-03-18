/*
 * XREFs of PspUnlockJobChain @ 0x14041AC44
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14041AA08 (PspUnlockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1064) + 56LL));
    v5 = *(_QWORD *)(a1 + 1096);
    if ( v5 > 1 )
    {
      if ( v5 > 2 )
      {
        v6 = 0LL;
        do
          ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v6++) + 56LL));
        while ( v6 < *(_QWORD *)(a1 + 1096) - 2LL );
      }
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
    }
  }
  if ( a2 )
  {
    v4 = *(_WORD *)(a2 + 486) + 1;
    *(_WORD *)(a2 + 486) = v4;
    if ( !v4 && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
