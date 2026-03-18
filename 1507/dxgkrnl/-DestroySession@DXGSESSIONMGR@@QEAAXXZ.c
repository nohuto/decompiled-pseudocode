/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00BDEAC
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00D8150 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000CB58 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessSessionId; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // rax
  DXGSESSIONDATA *v18; // rcx
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Global = DXGGLOBAL::GetGlobal(v3, v2, v4, v5);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2LL);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
  v16[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
  v16[4] = v17;
  v16[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v16);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v18 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    if ( v18 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v18);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
}
