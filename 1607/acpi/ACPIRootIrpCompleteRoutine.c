/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x1C00048C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 *v8; // r11
  __int64 *v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx
  char **v12; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = qword_1C002C340;
    v9 = qword_1C002C340;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(__int64 **)(v6 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(__int64 **)(v6 + 568);
    }
    v10 = 26;
    if ( *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL) < 0x1Au )
      v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
    v11 = v10;
    v12 = ACPIDispatchPnpTableNames;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qsLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v12,
      5,
      11,
      (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
      a2,
      (__int64)ACPIDispatchPnpTableNames[v11],
      *(_DWORD *)(a2 + 48),
      v6,
      (__int64)v8,
      (__int64)v9);
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
