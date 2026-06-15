/*
 * XREFs of ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180001B10
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x1800016A0 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001FB50 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamGroup(CVADServer *this, struct IStreamGroupProxy **a2, bool a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(CAudioStream *__hidden, struct IStreamGroupProxy **); // rsi
  unsigned int StreamGroup; // eax
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232), a3);
  v5 = *((_QWORD *)this + 26);
  v6 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IStreamGroupProxy **))(*(_QWORD *)(v5 + 8) + 104LL);
  if ( v6 == CAudioStream::GetStreamGroup )
    StreamGroup = CAudioStream::GetStreamGroup((CAudioStream *)(v5 + 8), a2);
  else
    StreamGroup = v6((CAudioStream *)(v5 + 8), a2);
  v8 = StreamGroup;
  if ( v10[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v10);
  return v8;
}
