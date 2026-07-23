/*
 * XREFs of ViGenericDispatchHandler @ 0x14071A828
 * Callers:
 *     ViGenericCleanup @ 0x14071A78C (ViGenericCleanup.c)
 *     ViGenericClose @ 0x14071A7A0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x14071A7B4 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x14071A7C4 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x14071A7D8 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x14071A7EC (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x14071A800 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x14071A814 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x14071A974 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x14071A988 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x14071A99C (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x14071A9B0 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x14071A9C4 (ViGenericPnp.c)
 *     ViGenericPower @ 0x14071A9D8 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x14071A9EC (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x14071AA00 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x14071AA14 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x14071AA28 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x14071AA3C (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x14071AA50 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x14071AA64 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x14071AA78 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x14071AA8C (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x14071AAA0 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x14071AAB4 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x14071AAC8 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x14071AADC (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x14071AAF0 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDispatchHandler(__int64 a1, __int64 a2, __int64 (*a3)(void), unsigned int a4)
{
  ULONG_PTR v4; // r11
  __int64 v6; // rbx
  ULONG_PTR v7; // r9
  __int64 (*v8)(void); // r8

  v4 = *(_QWORD *)(a1 + 8);
  v6 = a4;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 64LL);
  if ( !v7 || (v8 = *(__int64 (**)(void))(v7 + 8 * v6 + 32)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, v4, v7, 0LL);
  if ( a3 )
    return a3();
  else
    return v8();
}
