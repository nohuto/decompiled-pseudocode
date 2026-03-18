/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C00320A0
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     EngLockSurface @ 0x1C00308D0 (EngLockSurface.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005AF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0088818 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00A8AD0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00B2E80 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BC434 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 * Callees:
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall HmgIncrementShareReferenceCount(_DWORD *a1)
{
  _DWORD *SystemArgument2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  signed __int32 v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // [rsp+2Ch] [rbp-2Ch]
  char v8; // [rsp+60h] [rbp+8h] BYREF

  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v3 = (unsigned __int16)*a1;
  v4 = 3 * v3;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v8);
  _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
  v5 = SystemArgument2[6 * v3 + 2];
  if ( (SystemArgument2[6 * v3 + 3] & 0x20000000) != 0 )
    goto LABEL_17;
  while ( (SystemArgument2[6 * v3 + 3] & 0x40000000) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_8:
      _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
      v5 = SystemArgument2[6 * v3 + 2];
      if ( (SystemArgument2[6 * v3 + 3] & 0x20000000) != 0 )
        goto LABEL_17;
    }
    else
    {
      if ( v5 != _InterlockedCompareExchange(&SystemArgument2[6 * v3 + 2], v5 | 1, v5)
        || (SystemArgument2[6 * v3 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_8;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v3) = 0LL;
      HIBYTE(SystemArgument2[6 * v3 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[6 * v3 + 2]);
      v7 = SystemArgument2[6 * v3 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[6 * v3 + 2], v7);
      v5 = v7;
    }
  }
  v6 = 8 * v3;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v6, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTLOCKSTACKBACKTRACE(
      (unsigned __int16)*a1,
      *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*a1));
  }
  ++a1[2];
  if ( (SystemArgument2[2 * v4 + 3] & 0x40000000) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v6);
  }
  else
  {
    _m_prefetchw(&SystemArgument2[2 * v4 + 2]);
    _InterlockedExchange(&SystemArgument2[2 * v4 + 2], SystemArgument2[2 * v4 + 2] & 0xFFFFFFFE);
  }
LABEL_17:
  KeLeaveCriticalRegion();
}
