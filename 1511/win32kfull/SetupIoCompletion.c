/*
 * XREFs of SetupIoCompletion @ 0x1C01E0910
 * Callers:
 *     DitTakeOver @ 0x1C00A0698 (DitTakeOver.c)
 *     DitOpen @ 0x1C01DFF20 (DitOpen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetupIoCompletion(__int64 a1)
{
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK *v2; // rdx
  void *v3; // rcx
  _QWORD FileInformation[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( !gbDITUseIocp )
    return 1;
  v2 = (struct _IO_STATUS_BLOCK *)(a1 + 248);
  FileInformation[1] = a1;
  v3 = *(void **)(a1 + 216);
  FileInformation[0] = ghDITIocp;
  if ( ZwSetInformationFile(v3, v2, FileInformation, 0x10u, FileCompletionInformation) >= 0 )
    return 1;
  return v1;
}
