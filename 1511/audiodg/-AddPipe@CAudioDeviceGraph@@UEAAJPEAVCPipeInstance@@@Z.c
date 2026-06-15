/*
 * XREFs of ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006FE0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400070B0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *((_QWORD *)this + 12);
  if ( *((_QWORD *)a2 + 18) )
  {
    v5 = -2005139410;
    goto LABEL_8;
  }
  v5 = 0;
  if ( *((_QWORD *)a2 + 18) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = *((_QWORD *)a2 + 18);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)a2 + 18));
    *((_QWORD *)a2 + 18) = v4;
LABEL_8:
    if ( v5 < 0 )
      goto LABEL_10;
  }
  v5 = CPipeInstance::AddConnectionsAndActivateAPOs(a2);
LABEL_10:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
