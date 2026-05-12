/*
 * XREFs of RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000B590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterQuerySystemPowerCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  NTSTATUS v5; // eax
  PDEVICE_OBJECT v6; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 34LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_DWORD *)(a2 + 48);
  if ( v4 < 0
    || (v5 = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(v2 + 8),
               3u,
               DeviceStateTable[*(int *)(*(_QWORD *)(a2 + 184) + 24LL)],
               RaidAdapterQueryDevicePowerCompletionRoutine,
               (PVOID)a2,
               0LL),
        v6 = WPP_GLOBAL_Control,
        v4 = v5,
        v5 < 0) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
    v6 = WPP_GLOBAL_Control;
  }
  else
  {
    v4 = -1073741802;
  }
  if ( v6 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v6->Timer) & 4) != 0 && BYTE1(v6->Timer) >= 4u )
    WPP_SF_qqD(v6->AttachedDevice, 35LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v2, a2, v4);
  return (unsigned int)v4;
}
