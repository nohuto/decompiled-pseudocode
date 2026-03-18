/*
 * XREFs of IopQueryPassiveInterruptRegistryOptions @ 0x1405BCCA8
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x1407E3660 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 */

__int64 IopQueryPassiveInterruptRegistryOptions()
{
  int RegistryValues; // r8d
  char v1; // cl
  char v3; // al
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v7[28]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[6]) = 0;
  LODWORD(v7[13]) = 0;
  LODWORD(v7[20]) = 0;
  v6 = (unsigned __int8)PassiveInterruptForceCriticalWorker;
  v5 = (unsigned __int8)PassiveInterruptRealtimeWorkerCount;
  v4 = (unsigned __int8)PassiveInterruptRealtimeWorkerPriority;
  v7[2] = L"PassiveIntRealTimeWorkerCount";
  v7[3] = &v5;
  v7[5] = &v5;
  v7[9] = L"PassiveIntRealTimeWorkerPriority";
  v7[10] = &v4;
  v7[12] = &v4;
  v7[16] = L"PassiveIntForceCriticalWorker";
  v7[17] = &v6;
  LODWORD(v7[1]) = 32;
  LODWORD(v7[4]) = 4;
  LODWORD(v7[8]) = 32;
  LODWORD(v7[11]) = 4;
  LODWORD(v7[15]) = 32;
  LODWORD(v7[18]) = 4;
  v7[19] = &v6;
  RegistryValues = RtlpQueryRegistryValues(2LL, L"Session Manager\\I/O System", (__int64)v7, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( (_BYTE)v5 )
    {
      v1 = v5;
      if ( (unsigned __int8)v5 > 0x10u )
        v1 = 16;
      PassiveInterruptRealtimeWorkerCount = v1;
    }
    if ( (unsigned __int8)v4 > 0x10u )
    {
      v3 = v4;
      if ( (unsigned __int8)v4 > 0x15u )
        v3 = 21;
      PassiveInterruptRealtimeWorkerPriority = v3;
    }
  }
  return (unsigned int)RegistryValues;
}
