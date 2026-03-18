/*
 * XREFs of PiQueryResourceRequirements @ 0x14045D384
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     PpIrpQueryResourceRequirements @ 0x14045D5D0 (PpIrpQueryResourceRequirements.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiQueryResourceRequirements(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ULONG *v4; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  int v7; // eax
  HANDLE v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v15; // bl
  signed __int32 v16; // eax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  PVOID Data; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  KeyHandle = 0LL;
  v3 = PpIrpQueryResourceRequirements(v2, &Data);
  v4 = (ULONG *)Data;
  v5 = v3;
  if ( v3 < 0 )
    v4 = 0LL;
  Data = v4;
  if ( v4 )
    DataSize = *v4;
  else
    DataSize = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
  {
    goto LABEL_10;
  }
  v7 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(a1 + 48),
         0x14u,
         0,
         983103,
         v4 != 0LL,
         (__int64)&KeyHandle,
         0LL);
  v8 = KeyHandle;
  if ( v7 < 0 )
    v8 = 0LL;
  KeyHandle = v8;
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)&ValueName.Length = 2359330;
  ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( Data )
  {
    ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
    v12 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v11);
    v13 = v12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    dword_14034AA70 = CurrentIrql;
    *(_QWORD *)(a1 + 440) = Data;
    v15 = dword_14034AA70;
    qword_14034AA48 = 0LL;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v16);
    __writecr8(v15);
    KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    PipSetDevNodeFlags(a1, 512LL);
    Data = 0LL;
  }
  else
  {
    ZwDeleteValueKey(KeyHandle, &ValueName);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
    v4 = (ULONG *)Data;
LABEL_10:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
