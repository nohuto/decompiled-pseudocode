/*
 * XREFs of PepUpdatePlatformState @ 0x1C00064F8
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0006990 (PepDevicePowerControlCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepUpdatePlatformState(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r8
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  IO_WORKITEM_ROUTINE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD10,
    0LL);
  v3 = qword_1C000E1E8;
  v4 = 0;
  v5 = Src;
  if ( !qword_1C000E1E8 )
  {
    if ( !Src )
    {
      v4 = -1073741436;
      goto LABEL_12;
    }
    v9 = *a2;
    if ( (unsigned int)v9 >= *((_DWORD *)Src + 1) )
      goto LABEL_3;
    v10 = 6 * v9;
    *((_DWORD *)Src + 2 * v10 + 16) = a2[1];
    v5[2 * v10 + 17] = a2[2];
    if ( byte_1C000E200 )
      goto LABEL_12;
    v8 = PepUpdatePlatformStateWorker;
LABEL_10:
    byte_1C000E200 = 1;
    IoQueueWorkItem(IoWorkItem, v8, DelayedWorkQueue, 0LL);
    goto LABEL_12;
  }
  v6 = *a2;
  if ( (unsigned int)v6 < *(_DWORD *)qword_1C000E1E8 )
  {
    v7 = 216 * v6;
    *(_DWORD *)(v7 + qword_1C000E1E8 + 232) = a2[1];
    *(_DWORD *)(v7 + v3 + 236) = a2[2];
    if ( byte_1C000E200 )
      goto LABEL_12;
    v8 = (IO_WORKITEM_ROUTINE *)PepUpdateCoordinatedStateWorker;
    goto LABEL_10;
  }
LABEL_3:
  v4 = -1073741811;
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD10);
  return v4;
}
