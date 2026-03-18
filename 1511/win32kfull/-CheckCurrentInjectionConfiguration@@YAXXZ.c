/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DBF80
 * Callers:
 *     _InitializeTouchInjection @ 0x1C01DD004 (_InitializeTouchInjection.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 * Callees:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01DC31C (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void CheckCurrentInjectionConfiguration(void)
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v2; // rax

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 376LL);
  v2 = *(_QWORD *)(v1 + 848);
  if ( gbPendRecreateTouchInjectionDevices == 1 || v2 && *(_DWORD *)(v2 + 44) )
  {
    if ( gbPendRecreateTouchInjectionDevices )
    {
      gbPendRecreateTouchInjectionDevices = 0;
      v0 = 1;
    }
    RealizePendingRecreateTouchInjectionDevices((struct tagPROCESSINFO *)v1, v0);
  }
}
