/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x1C002A710
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940 (ACPIInternalDecrementIrpReferenceCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(ULONG_PTR a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char v7; // r8
  _QWORD *v8; // rbx
  POWER_STATE v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // ecx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = (_QWORD *)DeviceExtension;
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)qword_1C002C340;
  v12 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)v8[70];
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = (const char *)v8[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    0xAu,
    0x1Du,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a2,
    LOBYTE(v9.SystemState) - 1,
    v7,
    v11,
    v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 )
  {
    ACPIInternalDecrementIrpReferenceCount((__int64)v8);
    return (unsigned int)v14;
  }
  else if ( v9.SystemState != PowerSystemWorking && (v8[114] & 0x1000000000LL) != 0 )
  {
    if ( a3 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD))a3)(v8, a2, (unsigned int)v14);
    return 3221225494LL;
  }
  else
  {
    v15 = 0;
    if ( (unsigned int)(v10 - 4) <= 2 )
      v15 = 8;
    return ACPIDeviceInitializePowerRequest((__int64)v8, v9, a3, a2, v10, 0, v15);
  }
}
