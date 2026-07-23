/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x18007CE90
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x18007CE50 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKey @ 0x18007CF18 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007CFD8 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // eax
  unsigned int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    v7 = RtlpOpenImageFileOptionsKey(a1, a2, &Handle);
  else
    v7 = RtlpOpenBaseImageFileOptionsKey(&Handle);
  ImageFileKeyOption = v7;
  if ( v7 >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a5, a6);
    if ( a1 )
      NtClose(Handle);
  }
  return ImageFileKeyOption;
}
