/*
 * XREFs of RegisterSubspace @ 0x1C001D01C
 * Callers:
 *     RegisterSubspaceForGenAddr @ 0x1C001D164 (RegisterSubspaceForGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall RegisterSubspace(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  _DWORD *PoolWithTag; // rax
  int v9; // edi
  __int64 v10; // rax

  v3 = qword_1C000DE68;
  v4 = 0LL;
  if ( qword_1C000DE68 )
    goto LABEL_9;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x98uLL);
  v4[8] = a2;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v10,
         &GUID_PCC_INTERFACE_STANDARD,
         v4,
         128,
         1,
         0LL);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)(v4[17] - 1) <= 0x26 )
    {
      v9 = -1073741823;
      goto LABEL_10;
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
           WdfDriverGlobals,
           0LL,
           v4 + 32);
    if ( v9 >= 0 )
    {
      v3 = (__int64)v4;
      qword_1C000DE68 = (__int64)v4;
      v4 = 0LL;
LABEL_9:
      v9 = 0;
      *a3 = v3;
    }
  }
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v9;
}
