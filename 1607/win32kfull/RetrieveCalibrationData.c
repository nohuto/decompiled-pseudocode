/*
 * XREFs of RetrieveCalibrationData @ 0x1C00E4DB0
 * Callers:
 *     <none>
 * Callees:
 *     GetPointerDeviceKey @ 0x1C00E4CE8 (GetPointerDeviceKey.c)
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C00E4E0C (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 */

NTSTATUS __fastcall RetrieveCalibrationData(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v6 = *a2;
  result = GetPointerDeviceKey(&v6, &Handle, a3);
  if ( result )
  {
    v6 = *a2;
    ReadLinearityData(a1, &v6, Handle);
    return ZwClose(Handle);
  }
  return result;
}
