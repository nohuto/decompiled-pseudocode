/*
 * XREFs of KitLogFeatureUsage @ 0x14022F564
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     RtlPcToFileName @ 0x140148C58 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlPcToFilePath @ 0x14068C12C (RtlPcToFilePath.c)
 */

NTSTATUS __fastcall KitLogFeatureUsage(ULONGLONG a1, unsigned __int64 a2, int a3)
{
  REGHANDLE v3; // rsi
  int v7; // ebx
  int v8; // eax
  __int16 v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int16 *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  wchar_t *Buffer; // [rsp+88h] [rbp-80h]
  int Length; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  _BYTE v21[512]; // [rsp+98h] [rbp-70h] BYREF

  v3 = KitEtwHandle;
  *(_QWORD *)&v12.MaximumLength = 0LL;
  v12.Length = 0;
  *(_DWORD *)((char *)&v12.Buffer + 2) = 0;
  HIWORD(v12.Buffer) = 0;
  v11 = a3;
  if ( KitEtwHandle && EtwEventEnabled(KitEtwHandle, &KitFeatureIdUsedEvent) )
  {
    if ( a3 )
    {
      v7 = a3 - 1;
      if ( v7 )
      {
        if ( v7 != 1 || (a2 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_13:
          v11 = 3;
          v12 = (UNICODE_STRING)NoCallerIdString;
LABEL_14:
          UserData.Ptr = a1;
          v14 = &v11;
          v10 = v12.Length >> 1;
          *(_QWORD *)&UserData.Size = 16LL;
          v16 = &v10;
          Buffer = v12.Buffer;
          Length = v12.Length;
          v15 = 4LL;
          v17 = 2LL;
          v20 = 0;
          return EtwWrite(v3, &KitFeatureIdUsedEvent, 0LL, 4u, &UserData);
        }
      }
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( a2 )
    {
      memset(v21, 0, 0x1FEuLL);
      *(_DWORD *)&v12.Length = 33423360;
      v12.Buffer = (wchar_t *)v21;
      v8 = KeGetCurrentIrql() > 1u ? RtlPcToFileName(a2, &v12) : RtlPcToFilePath(a2, &v12);
      v3 = KitEtwHandle;
      if ( v8 >= 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  return 0;
}
