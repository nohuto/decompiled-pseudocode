/*
 * XREFs of NtUserTransformPoint @ 0x1C00F6D80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  EnterCrit(1LL);
  v14[0] = 0LL;
  v7 = MonitorFlagsFromDpiAwareness(a2);
  v8 = MonitorFlagsFromDpiAwareness(a3);
  v9 = v8;
  if ( v7 && v8 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v10 = (_QWORD *)W32UserProbeAddress;
    *v10 = *v10;
    v15 = *a1;
    LODWORD(v9) = v8 | 0x100;
    LogicalToPhysicalDPIPoint(&v15, &v15, v9, v14);
    PhysicalToLogicalDPIPoint(&v15, &v15, v7, v14);
    *a1 = v15;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
