/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x1800711C0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x180071180 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180071308 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v10 = RtlpOpenImageFileOptionsKey(a1, a2, &Handle);
  else
    v10 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v10;
  if ( v10 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, a3, a4, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
