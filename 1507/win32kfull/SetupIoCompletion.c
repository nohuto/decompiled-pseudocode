/*
 * XREFs of SetupIoCompletion @ 0x1C01E02FC
 * Callers:
 *     DitTakeOver @ 0x1C0150074 (DitTakeOver.c)
 *     DitOpen @ 0x1C01DF91C (DitOpen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetupIoCompletion(struct _IO_STATUS_BLOCK *a1)
{
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK *v2; // rdx
  PVOID Pointer; // rcx
  _QWORD FileInformation[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( !gbDITUseIocp )
    return 1;
  v2 = a1 + 16;
  FileInformation[1] = a1;
  Pointer = a1[14].Pointer;
  FileInformation[0] = ghDITIocp;
  if ( ZwSetInformationFile(Pointer, v2, FileInformation, 0x10u, FileCompletionInformation) >= 0 )
    return 1;
  return v1;
}
