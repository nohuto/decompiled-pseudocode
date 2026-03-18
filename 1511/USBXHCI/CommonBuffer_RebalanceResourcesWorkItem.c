/*
 * XREFs of CommonBuffer_RebalanceResourcesWorkItem @ 0x1C0009120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall CommonBuffer_RebalanceResourcesWorkItem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  __int64 **result; // rax
  __int64 *v8; // rax
  __int64 *v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v10; // [rsp+38h] [rbp-8h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0041160);
  v10 = &v9;
  v9 = (__int64 *)&v9;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 120));
  v4 = v2 + 248;
  v5 = *(__int64 **)(v2 + 248);
  if ( v5 != (__int64 *)(v2 + 248) )
  {
    *v10 = v5;
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v10;
    **(_QWORD **)(v2 + 256) = &v9;
    v10 = *(__int64 ***)(v2 + 256);
    *(_QWORD *)(v2 + 256) = v2 + 248;
    *(_QWORD *)v4 = v4;
  }
  *(_DWORD *)(v2 + 16) -= *(_DWORD *)(v2 + 240);
  *(_DWORD *)(v2 + 240) = 0;
  ++*(_DWORD *)(v2 + 28);
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 120), v3);
  while ( 1 )
  {
    v6 = v9;
    result = &v9;
    if ( v9 == (__int64 *)&v9 )
      break;
    v8 = (__int64 *)*v9;
    if ( (__int64 **)v9[1] != &v9 || (__int64 *)v8[1] != v9 )
      __fastfail(3u);
    v9 = (__int64 *)*v9;
    v8[1] = (__int64)&v9;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      4u,
      7u,
      0x27u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v6[7]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v6[7]);
  }
  return result;
}
