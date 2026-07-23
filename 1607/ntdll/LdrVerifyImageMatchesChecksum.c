/*
 * XREFs of LdrVerifyImageMatchesChecksum @ 0x1800D0D60
 * Callers:
 *     <none>
 * Callees:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksum(
        HANDLE ImageFileHandle,
        PLDR_IMPORT_MODULE_CALLBACK ImportCallbackRoutine,
        PVOID ImportCallbackParameter,
        PUSHORT ImageCharacteristics)
{
  int v4; // eax
  NTSTATUS result; // eax
  _LDR_VERIFY_IMAGE_INFO VerifyInfo; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  *(_QWORD *)&VerifyInfo.Size = 64LL;
  if ( ImportCallbackRoutine )
  {
    v4 = 1;
    VerifyInfo.CallbackInfo.ImportCallbackRoutine = ImportCallbackRoutine;
    VerifyInfo.Flags = 1;
    VerifyInfo.CallbackInfo.ImportCallbackParameter = ImportCallbackParameter;
  }
  if ( ImageCharacteristics )
    VerifyInfo.Flags = v4 | 4;
  result = LdrVerifyImageMatchesChecksumEx(ImageFileHandle, &VerifyInfo);
  if ( result >= 0 )
  {
    if ( ImageCharacteristics )
      *ImageCharacteristics = VerifyInfo.ImageCharacteristics;
  }
  return result;
}
