/*
 * XREFs of PopValidateRTCWake @ 0x1403A5BB4
 * Callers:
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 * Callees:
 *     PopPowerTransitionTimesInMs @ 0x14011A484 (PopPowerTransitionTimesInMs.c)
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 */

char __fastcall PopValidateRTCWake(_BYTE *a1)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  unsigned __int64 v5; // rbx
  char result; // al
  unsigned __int64 v7; // rsi
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0;
  v2 = PopFixedWakeSourceMask;
  v3 = PopFixedWakeSourceMask & 0x18;
  if ( v3 == 16 )
  {
    v4 = 1;
LABEL_15:
    dword_1402DE0E0 = v4;
    goto LABEL_5;
  }
  if ( v3 == 8 )
  {
    v4 = 0;
    goto LABEL_15;
  }
  if ( (PopFixedWakeSourceMask & 0x18) != 0 )
  {
    PopCurrentPowerStatePrecise(v8);
    v4 = dword_1402DE28C;
    v2 = PopFixedWakeSourceMask;
    dword_1402DE0E0 = dword_1402DE28C;
  }
  else
  {
    v4 = dword_1402DE0E0;
  }
LABEL_5:
  if ( (unsigned __int64)v4 >= 3 )
  {
    if ( (v2 & 4) == 0 )
      *a1 = 1;
    v4 = NumberOfBytes && (unsigned __int64)qword_1402DE0F0 > NumberOfBytes;
    dword_1402DE0E0 = v4;
  }
  v5 = (unsigned __int64)*(&qword_1402DE0F0 + 3 * v4);
  if ( v5 )
  {
    if ( v5 >= 0x989680 )
      v5 -= 10000000LL;
    v7 = qword_1402DE0C8;
    if ( PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, &v10, (__int64)&v9);
      v7 -= (unsigned int)(10000 * v9 + 10000 * v10);
    }
    if ( v5 < v7 && v7 - v5 < (-(__int64)((PopFullWake & 3) != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      return 1;
  }
  dword_1402DE0E0 = 3;
  result = 0;
  *a1 = 0;
  return result;
}
