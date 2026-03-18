/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01D3D14
 * Callers:
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01D3980 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 * Callees:
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00E63C4 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     FreeQDCActivePathsData @ 0x1C01C7D14 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01C7F00 (GetQDCActivePathsData.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01D4958 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 __fastcall RealizePendingRecreateTouchInjectionDevices(struct tagPROCESSINFO *a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 105);
  v5 = 1;
  ForceUpdatePointerDeviceSystemMetricKeys();
  if ( !gpTouchInjectorProcesses )
    return v5;
  v8 = v12;
  if ( (int)GetQDCActivePathsData(v12) < 0 )
    v8 = 0LL;
  if ( !v2 )
    goto LABEL_8;
  if ( a2 || *(_DWORD *)(v2 + 44) )
  {
    v5 = InitializeTouchInjectionWithQDCData(
           *(unsigned int *)(*((_QWORD *)a1 + 105) + 20LL),
           *(unsigned int *)(*((_QWORD *)a1 + 105) + 16LL),
           a1,
           v8);
LABEL_8:
    if ( a2 )
    {
      v9 = (__int64 *)gpTouchInjectorProcesses;
      if ( gpTouchInjectorProcesses )
      {
        do
        {
          v10 = v9[1];
          v6 = *v9;
          if ( (struct tagPROCESSINFO *)v10 != a1 )
            *(_DWORD *)(*(_QWORD *)(v10 + 840) + 44LL) = 1;
          v9 = (__int64 *)v6;
        }
        while ( v6 );
      }
    }
  }
  if ( v8 )
    FreeQDCActivePathsData(v8, v6, v7);
  return v5;
}
