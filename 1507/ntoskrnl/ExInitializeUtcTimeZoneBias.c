/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407E8F58
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405A6274 (RtlCutoverTimeToSystemTime.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406CC04C (RtlQueryDynamicTimeZoneInformation.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentTime)
{
  __int64 result; // rax
  int v3; // esi
  int v4; // ebx
  BOOLEAN v5; // r9
  BOOLEAN v6; // r9
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rdx
  int v9; // r9d
  LARGE_INTEGER v10; // r10
  int v11; // r8d
  int v12; // ecx
  LONGLONG QuadPart; // rax
  int v14; // eax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+34h] [rbp-CCh]
  LARGE_INTEGER v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+40h] [rbp-C0h]
  int v21; // [rsp+44h] [rbp-BCh]
  LARGE_INTEGER v22; // [rsp+48h] [rbp-B8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+50h] [rbp-B0h] BYREF
  char v24[68]; // [rsp+60h] [rbp-A0h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+A4h] [rbp-5Ch] BYREF
  int v26; // [rsp+B4h] [rbp-4Ch]
  _TIME_FIELDS v27; // [rsp+F8h] [rbp-8h] BYREF
  int v28; // [rsp+108h] [rbp+8h]

  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  result = RtlQueryDynamicTimeZoneInformation(v24);
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD *)v24 + v28;
    v4 = *(_DWORD *)v24 + v26;
    RtlTimeToTimeFields(CurrentTime, &TimeFields);
    if ( CutoverTimeFields.Month
      && v27.Month
      && RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, CurrentTime, v5)
      && RtlCutoverTimeToSystemTime(&v27, &v22, CurrentTime, v6) )
    {
      v7.QuadPart = 600000000LL * v4 + v22.QuadPart;
      v22 = v7;
      v8.QuadPart = 600000000LL * v3 + SystemTime.QuadPart;
      SystemTime = v8;
      if ( v7.QuadPart >= v8.QuadPart )
      {
        v16 = v8;
        v9 = 1;
        v17 = v4;
        v10 = v8;
        v18 = 1;
        v11 = v4;
        v19 = v7;
        v8 = v7;
        v4 = v3;
        v12 = 2;
      }
      else
      {
        v16 = v7;
        v9 = 2;
        v18 = 2;
        v10 = v7;
        v17 = v3;
        v11 = v3;
        v19 = v8;
        v12 = 1;
      }
      QuadPart = CurrentTime->QuadPart;
      v21 = v12;
      v20 = v4;
      if ( QuadPart < v10.QuadPart || QuadPart >= v8.QuadPart )
      {
        ExpCurrentTimeZoneId = v12;
        ExpLastTimeZoneBias = v4;
        v14 = 60 * v4;
      }
      else
      {
        ExpCurrentTimeZoneId = v9;
        ExpLastTimeZoneBias = v11;
        v14 = 60 * v11;
      }
      ExpTimeZoneBias = 10000000LL * v14;
      MEMORY[0xFFFFF7800000025C] = 0;
      MEMORY[0xFFFFF78000000028] = (unsigned __int64)(10000000LL * v14) >> 32;
      MEMORY[0xFFFFF78000000020] = 10000000LL * v14;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
