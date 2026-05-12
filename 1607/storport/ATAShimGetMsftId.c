/*
 * XREFs of ATAShimGetMsftId @ 0x1C0042DA4
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0042D30 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAddATADeviceIdMapping @ 0x1C002C0CC (RaidAddATADeviceIdMapping.c)
 *     RaidCheckATADeviceIdMapping @ 0x1C002C1E4 (RaidCheckATADeviceIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x1C002C470 (RaidSaveATADeviceIdMapping.c)
 *     TrimString @ 0x1C004336C (TrimString.c)
 */

__int64 __fastcall ATAShimGetMsftId(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  UUID *v5; // rax
  UUID v6; // xmm0
  __int64 v7; // rax
  char v8; // al
  UUID v9; // xmm0
  STRING v10; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]

  v13 = 0uLL;
  v10.Length = 0;
  *(_QWORD *)&v10.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v10.Buffer + 2) = 0;
  HIWORD(v10.Buffer) = 0;
  v3 = TrimString(a1 + 104, &v10);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
  v5 = (UUID *)RaidCheckATADeviceIdMapping((__int64)v11, &v10);
  v6 = *v5;
  v7 = *(_QWORD *)&v5->Data1;
  Uuid = v6;
  if ( v7 == (_QWORD)v13 && *(_QWORD *)Uuid.Data4 == *((_QWORD *)&v13 + 1) )
  {
    v3 = ExUuidCreate(&Uuid);
    if ( v3 >= 0 )
    {
      v3 = RaidSaveATADeviceIdMapping(v10.Buffer, v10.Length, &Uuid);
      if ( v3 >= 0 )
        v3 = RaidAddATADeviceIdMapping(v10.Buffer, v10.Length, (struct _STRING *)&Uuid);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
  ExFreePoolWithTag(v10.Buffer, 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v8 = *(_BYTE *)a2 & 0xF1;
  *(_QWORD *)&v10.Length = *(_QWORD *)"MSFT    ";
  v9 = Uuid;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v8 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)&v10.Length;
  result = 0LL;
  *(UUID *)(a2 + 12) = v9;
  return result;
}
