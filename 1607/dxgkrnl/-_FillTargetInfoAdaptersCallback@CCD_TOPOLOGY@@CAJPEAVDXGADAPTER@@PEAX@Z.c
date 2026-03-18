/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     MonitorGetMonitorInformationForTargets @ 0x1C00D868C (MonitorGetMonitorInformationForTargets.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _BYTE v16[80]; // [rsp+20h] [rbp-58h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6
      || *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, i) + 2) == *((_DWORD *)a1 + 67)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, i) + 3) == *((_DWORD *)a1 + 68) )
    {
      break;
    }
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
  v13 = v10;
  if ( v10 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v15[3] = v13;
  }
  else
  {
    LODWORD(v13) = MonitorGetMonitorInformationForTargets(a1, v11, this);
    if ( (_DWORD)v13 == -1073741275 )
      LODWORD(v13) = 0;
    if ( (int)v13 >= 0 )
      goto LABEL_16;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v15[3] = (int)v13;
  }
  v15[4] = a1;
  v15[5] = *((int *)a1 + 68);
  v15[6] = *((unsigned int *)a1 + 67);
  v15[7] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v15);
LABEL_16:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  return (unsigned int)v13;
}
