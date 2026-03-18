/*
 * XREFs of Template_pqPR1XR1 @ 0x1C001FA9C
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01517B4 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_pqPR1XR1(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v15; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v17; // [rsp+B8h] [rbp+38h]
  __int64 v18; // [rsp+C0h] [rbp+40h]
  va_list va2; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v5, va1);
  v7 = v17;
  v10 = v18;
  v8 = 8 * v15;
  v11 = 8 * v15;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  v9 = 0;
  v12 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
