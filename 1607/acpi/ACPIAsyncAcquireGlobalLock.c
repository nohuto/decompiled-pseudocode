/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C0014380
 * Callers:
 *     GlobalLockEventHandler @ 0x1C0014350 (GlobalLockEventHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C0050434 (ACPIIoctlAcquireGlobalLock.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1C00141C8 (ACPIAcquireHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B650 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  int v2; // edx
  KIRQL v3; // al
  char *v4; // rcx
  KIRQL v5; // si
  _QWORD *v6; // rdx
  bool v7; // al
  _QWORD **v9; // rcx
  _QWORD *i; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rdx
  char *v13; // rax
  void **v14; // rcx

  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    10,
    (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
    a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      11,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      a1,
      *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (char *)AcpiInformation;
  v5 = v3;
  v6 = (_QWORD *)((char *)AcpiInformation + 48);
  if ( (_QWORD *)*v6 == v6 )
  {
    v7 = ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5));
    v4 = (char *)AcpiInformation;
    if ( v7 )
    {
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        12,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        a1);
      return 0LL;
    }
  }
  v9 = (_QWORD **)(v4 + 48);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v11 = i - 2;
    if ( i - 2 == (_QWORD *)a1 )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        3,
        13,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        a1,
        *(_WORD *)(a1 + 10));
      ++*((_WORD *)v11 + 5);
      goto LABEL_12;
    }
  }
  v12 = (_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 10) = 1;
  v13 = (char *)AcpiInformation + 48;
  v14 = (void **)*((_QWORD *)AcpiInformation + 7);
  if ( *v14 != (char *)AcpiInformation + 48 )
    __fastfail(3u);
  *v12 = v13;
  *(_QWORD *)(a1 + 24) = v14;
  *v14 = v12;
  *((_QWORD *)v13 + 1) = v12;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    14,
    (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
    a1);
LABEL_12:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
  return 259LL;
}
