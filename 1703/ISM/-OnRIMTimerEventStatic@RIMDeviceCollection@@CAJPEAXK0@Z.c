/*
 * XREFs of ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180072430
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMTimerEventStatic(_QWORD *a1, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r9d

  if ( (_DWORD)a2 )
  {
    v3 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 549;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = 0;
    v4 = a1 == 0LL;
    v5 = a1[10];
    if ( v4 )
      v3 = 87;
    v6 = RIMOnTimerNotification(v5, a2, a3);
    if ( v6 < 0 )
    {
      v3 = v6 | 0x10000000;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 545;
LABEL_9:
        Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 2, v7, v3);
      }
    }
  }
  return v3;
}
