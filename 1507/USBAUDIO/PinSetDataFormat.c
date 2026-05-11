/*
 * XREFs of PinSetDataFormat @ 0x1C0015930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     PinValidateDataFormat @ 0x1C0015108 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinSetDataFormat(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 (__fastcall *v7)(__int64 *); // rax
  int v9; // [rsp+30h] [rbp-18h]

  v6 = PinValidateDataFormat(*a1, a4, a1[12]);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      v7 = *(__int64 (__fastcall **)(__int64 *))(*(_QWORD *)(*(_QWORD *)(a1[2] + 128) + 128LL) + 24LL);
      if ( v7 )
        v6 = v7(a1);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = v6;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x14u,
      (__int64)&WPP_0146c59cfacc6223fd92c8e0febf99bf_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v6;
}
