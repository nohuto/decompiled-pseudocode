/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8
 * Callers:
 *     _InitializeTouchInjection @ 0x1C01DC964 (_InitializeTouchInjection.c)
 *     xxxInjectTouchInput @ 0x1C01DCB84 (xxxInjectTouchInput.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0100AA0 (FreeQDCActivePathsData.c)
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C012F1E8 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     GetQDCActivePathsData @ 0x1C01CBC8C (GetQDCActivePathsData.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DC9E8 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 RealizePendingRecreateTouchInjectionDevices(void)
{
  unsigned int v0; // edi
  int QDCActivePathsData; // eax
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // r8
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 1;
  ForceUpdatePointerDeviceSystemMetricKeys();
  if ( gpTouchInjectorProcesses )
  {
    QDCActivePathsData = GetQDCActivePathsData(v6);
    v2 = (_QWORD *)gpTouchInjectorProcesses;
    v3 = v6;
    if ( QDCActivePathsData < 0 )
      v3 = 0LL;
    do
    {
      if ( !v2 )
        break;
      v4 = v2[1];
      v2 = (_QWORD *)*v2;
      v0 = InitializeTouchInjectionWithQDCData(
             *(unsigned int *)(*(_QWORD *)(v4 + 848) + 20LL),
             *(unsigned int *)(*(_QWORD *)(v4 + 848) + 16LL),
             v4,
             v3);
    }
    while ( v0 );
    FreeQDCActivePathsData((__int64)v3);
  }
  return v0;
}
