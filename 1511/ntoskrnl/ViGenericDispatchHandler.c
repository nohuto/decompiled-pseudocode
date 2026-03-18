/*
 * XREFs of ViGenericDispatchHandler @ 0x1406CE770
 * Callers:
 *     ViGenericCleanup @ 0x1406CE6D4 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1406CE6E8 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1406CE6FC (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x1406CE70C (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x1406CE720 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x1406CE734 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x1406CE748 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1406CE75C (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x1406CE8BC (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x1406CE8D0 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x1406CE8E4 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x1406CE8F8 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x1406CE90C (ViGenericPnp.c)
 *     ViGenericPower @ 0x1406CE920 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x1406CE934 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x1406CE948 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x1406CE95C (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x1406CE970 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x1406CE984 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x1406CE998 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x1406CE9AC (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x1406CE9C0 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x1406CE9D4 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x1406CE9E8 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x1406CE9FC (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x1406CEA10 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x1406CEA24 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x1406CEA38 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
