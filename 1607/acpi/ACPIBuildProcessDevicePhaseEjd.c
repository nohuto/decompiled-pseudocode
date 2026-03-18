/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C000F170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C0014200 (ACPIDockIsDockDevice.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildDockExtension @ 0x1C0043F14 (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // r8
  signed __int32 v8; // edx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
    *(_DWORD *)(a1 + 32) = 16;
  else
    *(_DWORD *)(a1 + 32) = 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs(v3, 1LL);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v10 = (_QWORD *)qword_1C00741E8;
    v11 = (_QWORD *)(v1 + 800);
    if ( *(__int64 **)qword_1C00741E8 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 808) = qword_1C00741E8;
    *v11 = &AcpiUnresolvedEjectList;
    *v10 = v11;
    qword_1C00741E8 = v1 + 800;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( (unsigned __int8)ACPIDockIsDockDevice(*(_QWORD *)(v1 + 712)) )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v12 = *(_QWORD *)(v1 + 8);
      v13 = (const char *)qword_1C002C340;
      v14 = (const char *)qword_1C002C340;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = *(const char **)(v1 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x23u,
        (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
        v1,
        v13,
        v14);
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 712));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = qword_1C002C340;
  v7 = qword_1C002C340;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(__int64 **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(__int64 **)(v1 + 568);
  }
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    6,
    36,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v4,
    v1,
    (__int64)v6,
    (__int64)v7);
  v8 = *(_DWORD *)(a1 + 32);
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v8);
  return (unsigned int)v4;
}
