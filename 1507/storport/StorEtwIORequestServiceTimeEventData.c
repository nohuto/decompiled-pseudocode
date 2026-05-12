/*
 * XREFs of StorEtwIORequestServiceTimeEventData @ 0x1C00352E0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     Template_xpccpcccccqxx @ 0x1C0036184 (Template_xpccpcccccqxx.c)
 */

unsigned __int64 __fastcall StorEtwIORequestServiceTimeEventData(_QWORD *a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  char v4; // si
  char v5; // r15
  char v6; // r14
  LARGE_INTEGER v10; // rax
  unsigned int LowPart; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rtt
  __int64 v22; // r8
  char *SrbScsiData; // rax
  int v24; // r10d
  char v25; // r11
  char v26; // dl
  char v27; // r9
  union _LARGE_INTEGER v28; // [rsp+B0h] [rbp+8h] BYREF
  char v29; // [rsp+B8h] [rbp+10h] BYREF

  v3 = a1[20];
  v4 = 0;
  v5 = 0;
  v29 = 0;
  v6 = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    v10 = KeQueryPerformanceCounter(&v28);
  else
    v10.QuadPart = KeQueryUnbiasedInterruptTime();
  LowPart = v28.LowPart;
  if ( !a2 )
  {
    if ( v10.QuadPart <= 0 || (v12 = a1[85], v10.QuadPart >= v12) )
      v13 = v10.QuadPart - a1[85];
    else
      v13 = v10.QuadPart - v12 - 1;
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
      a3 = 0LL;
      if ( v28.QuadPart && v13 )
        a3 = 10000 * (1000 * (v13 % v28.QuadPart) % v28.QuadPart) / v28.QuadPart
           + 10000 * (1000 * (v13 % v28.QuadPart) / v28.QuadPart + 1000 * (v13 / v28.QuadPart));
    }
    else
    {
      a3 = v13;
    }
  }
  result = StorRequestThresholdTime;
  if ( !StorRequestThresholdTime || a3 >= StorRequestThresholdTime )
  {
    v15 = a1[86];
    v16 = a1[85];
    if ( v15 >= v16 )
    {
      if ( v15 <= 0 || v15 >= v16 )
        result = v15 - v16;
      else
        result = v15 - v16 - 1;
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      {
        if ( v28.QuadPart && result )
        {
          v17 = 1000 * (result % v28.QuadPart);
          v18 = v17 / v28.QuadPart + 1000 * (result / v28.QuadPart);
          result = 10000 * (v17 % v28.QuadPart) / v28.QuadPart;
          v6 = result + 16 * v18;
        }
      }
      else
      {
        v6 = result;
      }
    }
    if ( v15 && a1[87] >= v15 )
    {
      v19 = a1[87];
      if ( v19 <= 0 || (v20 = a1[86], v19 >= v15) )
      {
        result = v19 - v15;
        goto LABEL_36;
      }
    }
    else
    {
      if ( a1[87] < v16 )
      {
LABEL_41:
        if ( *(_BYTE *)(v3 + 2) == 40 )
        {
          SrbScsiData = (char *)GetSrbScsiData(v3, 0LL, 0LL, &v29, 0LL, 0LL);
          if ( SrbScsiData )
            v5 = *SrbScsiData;
          result = *(unsigned int *)(v3 + 52);
          v24 = *(_DWORD *)(v3 + 60);
          v25 = v29;
          LOBYTE(LowPart) = *(_BYTE *)(result + v3 + 8);
          v26 = *(_BYTE *)(result + v3 + 9);
          v27 = *(_BYTE *)(result + v3 + 10);
        }
        else
        {
          v5 = *(_BYTE *)(v3 + 72);
          v25 = *(_BYTE *)(v3 + 4);
          LOBYTE(LowPart) = *(_BYTE *)(v3 + 5);
          v26 = *(_BYTE *)(v3 + 6);
          v27 = *(_BYTE *)(v3 + 7);
          v24 = *(_DWORD *)(v3 + 16);
        }
        if ( a2 )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
            return Template_xpccpcccccqxx(
                     LowPart,
                     (unsigned int)&EventIOPerformanceMeasurementTarget,
                     (int)a1 + 712,
                     a3,
                     a1[19],
                     v5,
                     *(_BYTE *)(v3 + 3),
                     a1[94],
                     *(_BYTE *)(a1[26] + 56LL),
                     LowPart,
                     v26,
                     v27,
                     v25,
                     v24,
                     v6,
                     v4);
        }
        else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
        {
          return Template_xpccpcccccqxx(
                   LowPart,
                   (unsigned int)&EventIOPerformanceMeasurement,
                   (int)a1 + 712,
                   a3,
                   a1[19],
                   v5,
                   *(_BYTE *)(v3 + 3),
                   a1[94],
                   *(_BYTE *)(a1[26] + 56LL),
                   LowPart,
                   v26,
                   v27,
                   v25,
                   v24,
                   v6,
                   v4);
        }
        return result;
      }
      v19 = a1[87];
      if ( v19 <= 0 || (v20 = a1[85], v19 >= v16) )
      {
        result = v19 - v16;
LABEL_36:
        if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        {
          if ( v28.QuadPart && result )
          {
            v21 = 1000 * (result % v28.QuadPart);
            v22 = v21 / v28.QuadPart + 1000 * (result / v28.QuadPart);
            result = 10000 * (v21 % v28.QuadPart) / v28.QuadPart;
            v4 = result + 16 * v22;
          }
        }
        else
        {
          v4 = result;
        }
        goto LABEL_41;
      }
    }
    result = v19 - v20 - 1;
    goto LABEL_36;
  }
  return result;
}
