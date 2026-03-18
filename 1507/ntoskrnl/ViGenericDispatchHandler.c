/*
 * XREFs of ViGenericDispatchHandler @ 0x1407521F8
 * Callers:
 *     ViGenericCleanup @ 0x14075215C (ViGenericCleanup.c)
 *     ViGenericClose @ 0x140752170 (ViGenericClose.c)
 *     ViGenericCreate @ 0x140752184 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x140752194 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x1407521A8 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x1407521BC (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x1407521D0 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1407521E4 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x140752344 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x140752358 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x14075236C (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x140752380 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x140752394 (ViGenericPnp.c)
 *     ViGenericPower @ 0x1407523A8 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x1407523BC (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x1407523D0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x1407523E4 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x1407523F8 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x14075240C (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x140752420 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x140752434 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x140752448 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x14075245C (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x140752470 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x140752484 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x140752498 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x1407524AC (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x1407524C0 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
