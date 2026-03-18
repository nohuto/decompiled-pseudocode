/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0093EA4
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FB04 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C0169150 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0007974 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 776;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( a2 )
    {
      if ( !*((_BYTE *)this + 635)
        && (qword_1C0056840 & 0x188ED7) != 0
        && (qword_1C0056848 & 0xFFFFFFFFFFE77128uLL) == 0
        && (qword_1C0056840 & 0x4000) != 0 )
      {
        KeSetTimerEx(
          (PKTIMER)((char *)this + 648),
          *(LARGE_INTEGER *)((char *)this + 640),
          50,
          (PKDPC)((char *)this + 712));
        *((_BYTE *)this + 635) = 1;
      }
    }
    else if ( *((_BYTE *)this + 635) )
    {
      KeCancelTimer((PKTIMER)((char *)this + 648));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 635) = 0;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
