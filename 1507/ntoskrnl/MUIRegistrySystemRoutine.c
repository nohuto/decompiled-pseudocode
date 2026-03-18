/*
 * XREFs of MUIRegistrySystemRoutine @ 0x140592024
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 */

void __fastcall MUIRegistrySystemRoutine(PVOID StartContext)
{
  int KernelRegistryInfo; // eax
  __int64 v3; // rcx

  if ( StartContext )
  {
    KernelRegistryInfo = RtlpMuiRegCreateKernelRegistryInfo(
                           (_QWORD *)StartContext + 1,
                           (_DWORD *)StartContext + 4,
                           (_DWORD *)StartContext + 5,
                           *((_DWORD *)StartContext + 6),
                           (_DWORD *)StartContext + 7,
                           *((_DWORD *)StartContext + 8),
                           (_DWORD *)StartContext + 9);
    *((_DWORD *)StartContext + 10) = KernelRegistryInfo;
    if ( KernelRegistryInfo >= 0 )
    {
      v3 = *((_QWORD *)StartContext + 1);
      if ( v3 )
        *(_DWORD *)(v3 + 12) = MEMORY[0xFFFFF780000003A4];
    }
    if ( *(_QWORD *)StartContext )
      KeSetEvent(*(PRKEVENT *)StartContext, 1, 0);
  }
}
