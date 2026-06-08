/*
 * XREFs of RegisterSubspaceForGenAddr @ 0x1C001DCB8
 * Callers:
 *     InitAcpiCpc @ 0x1C001553C (InitAcpiCpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall RegisterSubspaceForGenAddr(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  int v4; // r14d
  _DWORD *PoolWithTag; // rax
  int v8; // ebx
  __int64 v9; // rax
  PWDF_DRIVER_GLOBALS v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+68h] [rbp+10h]

  v2 = qword_1C0009848;
  v3 = 0LL;
  v4 = *(unsigned __int8 *)(a2 + 3);
  if ( qword_1C0009848 )
    goto LABEL_10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x98uLL);
  v9 = WdfFunctions_01015;
  v10 = WdfDriverGlobals;
  v3[8] = v4;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v9 + 1632))(v10, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v11,
         &GUID_PCC_INTERFACE_STANDARD,
         v3,
         128,
         1,
         0LL);
  if ( v8 < 0 )
    goto LABEL_7;
  if ( (unsigned int)(v3[17] - 1) > 0x26 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
           WdfDriverGlobals,
           0LL,
           v3 + 32);
    if ( v8 < 0 )
      goto LABEL_7;
    v2 = (__int64)v3;
    qword_1C0009848 = (__int64)v3;
    v3 = 0LL;
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v8 = -1073741823;
LABEL_7:
  v2 = v13;
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)(v2 + 32) == v4 )
    {
      v8 = 0;
      if ( *(_QWORD *)(a2 + 4) > (__int64)*(unsigned int *)(v2 + 80) )
        return (unsigned int)-1073741811;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v8;
}
