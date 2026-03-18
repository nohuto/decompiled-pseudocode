/*
 * XREFs of UsbhDerefPdoDeviceHandle @ 0x1C00202C0
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001FEA0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhSetPdoIdleReady @ 0x1C00201FC (UsbhSetPdoIdleReady.c)
 *     UsbhPdoSetDeviceData @ 0x1C0020F50 (UsbhPdoSetDeviceData.c)
 *     UsbhClearPdoIdleReady @ 0x1C00210BC (UsbhClearPdoIdleReady.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0022E48 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EB78 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047A08 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047FB4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E40C (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004E7F0 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054ED8 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhDerefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  KSPIN_LOCK *v9; // rdi
  KIRQL v10; // al
  __int16 v11; // cx
  __int64 v12; // r8
  KIRQL v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void (__fastcall *v19)(_QWORD, __int64, __int64, _QWORD); // rax

  v4 = (unsigned int)a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  v11 = UsbhLogMask;
  v12 = 0xFFFFFFFFLL;
  v13 = v10;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 825054788;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = a3;
      v11 = UsbhLogMask;
    }
    if ( (v11 & 0x100) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v12 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v17 = *(_QWORD *)(v16 + 888) + 32LL * ((unsigned int)(v12 - 1) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 841832004;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a2;
        *(_QWORD *)(v17 + 24) = v4;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 64);
  if ( !v18 )
    UsbhTrapFatal_Dbg(a1, 0LL, v12, 0LL);
  if ( *(_DWORD *)v18 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v12, 0LL);
  v19 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v18 + 4472);
  if ( v19 )
    v19(*(_QWORD *)(v18 + 4232), a2, a3, (unsigned int)v4);
  KeReleaseSpinLock(v9, v13);
}
