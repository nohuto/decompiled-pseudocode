/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC31C
 * Callers:
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBF80 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 * Callees:
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C0098734 (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01CD86C (GetQDCActivePathsData.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DD078 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 __fastcall RealizePendingRecreateTouchInjectionDevices(struct tagPROCESSINFO *a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v5; // r14d
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 106);
  v5 = 1;
  ForceUpdatePointerDeviceSystemMetricKeys();
  if ( !gpTouchInjectorProcesses )
    return v5;
  v6 = v11;
  if ( (int)GetQDCActivePathsData(v11) < 0 )
    v6 = 0LL;
  if ( !v2 )
    goto LABEL_8;
  if ( a2 || *(_DWORD *)(v2 + 44) )
  {
    v5 = InitializeTouchInjectionWithQDCData(
           *(unsigned int *)(*((_QWORD *)a1 + 106) + 20LL),
           *(unsigned int *)(*((_QWORD *)a1 + 106) + 16LL),
           a1,
           v6);
LABEL_8:
    if ( a2 )
    {
      v7 = (_QWORD *)gpTouchInjectorProcesses;
      if ( gpTouchInjectorProcesses )
      {
        do
        {
          v8 = v7[1];
          v9 = (_QWORD *)*v7;
          if ( (struct tagPROCESSINFO *)v8 != a1 )
            *(_DWORD *)(*(_QWORD *)(v8 + 848) + 44LL) = 1;
          v7 = v9;
        }
        while ( v9 );
      }
    }
  }
  if ( v6 )
    FreeQDCActivePathsData((__int64)v6);
  return v5;
}
