/*
 * XREFs of ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140031150
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002625C (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140030F54 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToLoopbackConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 216));
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(*((CPipeInstance **)this + 14));
  v5 = CPipeInstance::ResolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1));
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
