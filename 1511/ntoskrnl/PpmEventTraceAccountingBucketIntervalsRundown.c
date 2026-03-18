/*
 * XREFs of PpmEventTraceAccountingBucketIntervalsRundown @ 0x14063AD10
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void PpmEventTraceAccountingBucketIntervalsRundown()
{
  REGHANDLE v0; // rbx
  __int64 v1; // r8
  _QWORD *v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // rax
  int v5; // [rsp+30h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-110h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-100h]
  int v8; // [rsp+50h] [rbp-F8h]
  int v9; // [rsp+54h] [rbp-F4h]
  _BYTE v10[208]; // [rsp+60h] [rbp-E8h] BYREF

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN) )
    {
      v1 = 26LL;
      v2 = v10;
      v5 = 26;
      v3 = (__int64 *)&unk_140381768;
      do
      {
        v4 = *v3;
        v3 += 3;
        *v2++ = v4;
        --v1;
      }
      while ( v1 );
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      v7 = v10;
      v8 = 208;
      EtwWrite(v0, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN, 0LL, 2u, &UserData);
    }
  }
}
