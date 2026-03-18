/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x1406CB2E4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401380D0 @ 0x1401380D0 (sub_1401380D0.c)
 */

void __stdcall RtlTimeToElapsedTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  __int16 v6; // [rsp+40h] [rbp+18h] BYREF

  sub_1401380D0(Time, (__int64)&v6, &v5);
  v3 = v5;
  *(_DWORD *)&TimeFields->Year = 0;
  TimeFields->Day = v6;
  TimeFields->Milliseconds = v3 % 0x3E8;
  v4 = v3 / 0x3E8 / 0x3C;
  TimeFields->Hour = v4 / 0x3C;
  TimeFields->Minute = v4 % 0x3C;
  TimeFields->Second = v3 / 0x3E8 % 0x3C;
}
