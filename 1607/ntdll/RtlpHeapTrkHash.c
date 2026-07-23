/*
 * XREFs of RtlpHeapTrkHash @ 0x18008F078
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18008ECCC (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18008EF88 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkFindStack @ 0x1800EFF78 (RtlpHeapTrkFindStack.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHeapTrkHash(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // r9
  __int16 *v3; // r10
  __int64 v4; // r11
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF

  v1 = 0LL;
  v8 = a1;
  v2 = (unsigned __int8 *)&v8;
  v3 = (__int16 *)&unk_1801530D0;
  v4 = 8LL;
  do
  {
    v5 = *v3++;
    v6 = v5 * *v2++;
    v1 += v6 % 7919;
    --v4;
  }
  while ( v4 );
  return v1 % 0x1EEF;
}
