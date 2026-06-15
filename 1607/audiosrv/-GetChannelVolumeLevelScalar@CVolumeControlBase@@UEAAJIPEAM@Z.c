/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180002010
 * Callers:
 *     ?GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180001EB0 (-GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180026EF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v8,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 16),
    (bool)a3);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 29) )
  {
    v6 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevelScalar", 0x1E8u, v6);
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_10;
  }
  if ( v3 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  *a3 = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v3));
  v6 = 0;
LABEL_5:
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return v6;
}
