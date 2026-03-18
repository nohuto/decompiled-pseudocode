/*
 * XREFs of PspMapSystemDll @ 0x140466740
 * Callers:
 *     PsMapSystemDlls @ 0x140466680 (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, _QWORD *a2, int a3, int a4)
{
  ULONG_PTR v8; // rbp
  __int64 v9; // r9
  int v10; // edi
  __int64 result; // rax
  PVOID v12; // rsi
  PIMAGE_NT_HEADERS v13; // rax
  unsigned __int64 ImageBase_high; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v16; // rbp
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  v8 = ObFastReferenceObject(a2);
  if ( !v8 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)(a2 + 1), 0LL, 0LL, v9);
    if ( _InterlockedCompareExchange64(a2 + 1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a2 + 1, v16, (ULONG_PTR)(a2 + 1), v17);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    v8 = ObFastReferenceObjectLocked(a2);
    if ( _InterlockedCompareExchange64(a2 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a2 + 1);
    KeAbPostRelease((ULONG_PTR)(a2 + 1));
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v8 )
      return 3221225473LL;
  }
  BaseAddress = 0LL;
  v20[0] = 0LL;
  v19 = 0LL;
  v10 = MmMapViewOfSection(
          v8,
          (_DWORD)a1,
          (unsigned int)&BaseAddress,
          0,
          0LL,
          (__int64)v20,
          (__int64)&v19,
          1,
          a3 != 0 ? 0x20000000 : 0,
          4);
  ObFastDereferenceObject(a2, v8);
  if ( v10 != 1073741827 )
  {
LABEL_3:
    if ( v10 < 0 )
      return (unsigned int)v10;
    goto LABEL_4;
  }
  if ( a1 != PsInitialSystemProcess )
  {
    v10 = -1073741800;
    goto LABEL_3;
  }
LABEL_4:
  if ( a4 )
  {
    v12 = BaseAddress;
    v10 = 0;
    v13 = RtlImageNtHeader(BaseAddress);
    if ( v13->OptionalHeader.Magic == 267 )
      ImageBase_high = HIDWORD(v13->OptionalHeader.ImageBase);
    else
      ImageBase_high = v13->OptionalHeader.ImageBase;
    a2[5] = ImageBase_high;
    a2[6] = v12;
  }
  else
  {
    result = 3221225473LL;
    if ( (PVOID)a2[5] != BaseAddress )
      return result;
  }
  return (unsigned int)v10;
}
