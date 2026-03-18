/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1400D3CD8
 * Callers:
 *     ExpUpdateTimerResolution @ 0x1400D3B10 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ecx
  char v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-A9h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-91h]
  _DWORD v14[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v15[21]; // [rsp+48h] [rbp-81h] BYREF

  v14[1] = 0;
  v14[0] = 1310721;
  memset(v15, 0, 0xA0uLL);
  v6 = KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
  v7 = v6 & 0x3F;
  v8 = v6 >> 6;
  if ( (_DWORD)v8 )
    LOWORD(v14[0]) = v8 + 1;
  v9 = (unsigned int)v8;
  v10 = v15[v8] | (1LL << v7);
  v12[0] = a1;
  v15[v9] = v10;
  v12[1] = a2;
  v12[2] = a3;
  ((void (__fastcall *)(_DWORD *, __int64 (__fastcall *)(), _QWORD *, __int64))KeGenericProcessorCallback)(
    v14,
    ExpUpdateTimerConfigurationWorker,
    v12,
    1LL);
  return v13;
}
