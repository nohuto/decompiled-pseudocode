/*
 * XREFs of Template_jq @ 0x1401AD718
 * Callers:
 *     McGenControlCallbackV2 @ 0x14013EDB4 (McGenControlCallbackV2.c)
 *     FsRtlpHeatRegisterVolume @ 0x1405F54F4 (FsRtlpHeatRegisterVolume.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jq(__int64 a1, __int64 a2, const GUID *a3, ULONGLONG a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6.Ptr = a4;
  v6.Reserved = 0;
  v6.Size = 16;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(Microsoft_Windows_Storage_Tiering_IoHeatHandle, &TieredStorage_NewVolume, a3, 2u, &v6);
}
