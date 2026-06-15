/*
 * XREFs of Template_pt @ 0x180022D94
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180022C40 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pt(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-38h] BYREF
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v5.Ptr = (ULONGLONG)&v9;
  v5.Reserved = 0;
  v5.Size = 8;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EventWrite(0LL, &EUVolumePolicy_VolumeLimit_Create, 2u, &v5);
}
