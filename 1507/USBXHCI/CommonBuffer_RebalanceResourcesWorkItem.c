/*
 * XREFs of CommonBuffer_RebalanceResourcesWorkItem @ 0x1C0005730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall CommonBuffer_RebalanceResourcesWorkItem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 *v5; // rdx
  int v6; // edx
  __int64 *v7; // rbx
  __int64 **result; // rax
  __int64 *v9; // rax
  __int64 *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v11; // [rsp+38h] [rbp-8h]

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3048))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v1,
         off_1C0040130);
  v11 = &v10;
  v10 = (__int64 *)&v10;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 120));
  v4 = v2 + 248;
  v5 = *(__int64 **)(v2 + 248);
  if ( v5 != (__int64 *)(v2 + 248) )
  {
    *v11 = v5;
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v11;
    **(_QWORD **)(v2 + 256) = &v10;
    v11 = *(__int64 ***)(v2 + 256);
    *(_QWORD *)(v2 + 256) = v2 + 248;
    *(_QWORD *)v4 = v4;
  }
  *(_DWORD *)(v2 + 16) -= *(_DWORD *)(v2 + 240);
  *(_DWORD *)(v2 + 240) = 0;
  ++*(_DWORD *)(v2 + 28);
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 120), v3);
  while ( 1 )
  {
    v7 = v10;
    result = &v10;
    if ( v10 == (__int64 *)&v10 )
      break;
    v9 = (__int64 *)*v10;
    if ( (__int64 **)v10[1] != &v10 || (__int64 *)v9[1] != v10 )
      __fastfail(3u);
    v10 = (__int64 *)*v10;
    v9[1] = (__int64)&v10;
    v7[1] = (__int64)v7;
    *v7 = (__int64)v7;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      v6,
      7,
      39,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v7[7]);
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 1664))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v7[7]);
  }
  return result;
}
