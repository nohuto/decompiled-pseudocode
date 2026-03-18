/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0125CD8
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C0110FA8 (AccessPTPEnabledStatus.c)
 *     ?OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z @ 0x1C0111688 (-OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z.c)
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C0125A64 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01C3C84 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01C4988 (WriteTiltCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0125E3C (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C0125EA4 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  size_t v4; // rdx
  NTSTATUS v5; // r8d
  PWSTR Buffer; // rdi
  NTSTATUS v7; // r10d
  unsigned __int64 v8; // r11
  size_t v9; // rcx
  __int16 v10; // dx
  char *v11; // r9
  size_t v13; // [rsp+20h] [rbp-18h]
  ULONG v14; // [rsp+28h] [rbp-10h]
  size_t v15; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = RtlUnicodeStringValidateDestWorker(a1, &v16, &v15, 0LL, v13, v14);
  if ( v5 >= 0 )
  {
    Buffer = 0LL;
    v5 = RtlUnicodeStringValidateWorker(a2, v4, v5);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v8 = (unsigned __int64)a2->Length >> 1;
      }
      v9 = v15;
      v5 = v7;
      v10 = v7;
      if ( !v15 )
        goto LABEL_13;
      v11 = (char *)((char *)v16 - (char *)Buffer);
      do
      {
        if ( !v8 )
          break;
        --v8;
        *(PWSTR)((char *)Buffer + (_QWORD)v11) = *Buffer;
        ++v10;
        ++Buffer;
        --v9;
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_13:
        if ( v8 )
          v5 = -2147483643;
      }
      LOWORD(v7) = v10;
    }
    a1->Length = 2 * v7;
  }
  return (unsigned int)v5;
}
