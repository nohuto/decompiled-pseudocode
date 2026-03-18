/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C009E3B4
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00C6800 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C00080CC (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcessSessionId; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // rax
  DXGSESSIONDATA *v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  Global = DXGGLOBAL::GetGlobal(v2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONMGR *)((char *)this + 104));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  v9[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 24) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId);
  v9[4] = v10;
  v9[5] = *((unsigned int *)this + 24);
  WdLogEvent5_WdEvent(v9);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 24) )
  {
    v11 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId);
    if ( v11 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v11);
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
