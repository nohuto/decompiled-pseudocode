/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0068A90
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A060 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A10C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C014565C (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001CB8 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 848;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( a2 )
    {
      if ( !*((_BYTE *)this + 706)
        && (qword_1C00467F0 & 0x188ED7) != 0
        && (qword_1C00467F8 & 0xFFFFFFFFFFE77128uLL) == 0
        && (qword_1C00467F0 & 0x4000) != 0 )
      {
        KeSetTimerEx(
          (PKTIMER)((char *)this + 720),
          *(LARGE_INTEGER *)((char *)this + 712),
          50,
          (PKDPC)((char *)this + 784));
        *((_BYTE *)this + 706) = 1;
      }
    }
    else if ( *((_BYTE *)this + 706) )
    {
      KeCancelTimer((PKTIMER)((char *)this + 720));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 706) = 0;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
