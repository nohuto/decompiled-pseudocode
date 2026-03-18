/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0077C70
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00DB7B0 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0001B70 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcessSessionId; // rsi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  DXGSESSIONDATA *v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    Global,
    DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2LL);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v4[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
  v4[4] = v5;
  v4[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v4);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v6 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    if ( v6 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v6);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
