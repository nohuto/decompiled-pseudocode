/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0063B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorGetMonitorInformationForTargets @ 0x1C00635B8 (MonitorGetMonitorInformationForTargets.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
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
  unsigned int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _BYTE v17[64]; // [rsp+20h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 || *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, i) + 1) == *(_QWORD *)((char *)a1 + 252) )
      break;
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  v14 = v10;
  if ( v10 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v16[3] = v14;
  }
  else
  {
    LODWORD(v14) = MonitorGetMonitorInformationForTargets((__int64)a1, v11, this, v13);
    if ( (_DWORD)v14 == -1073741275 )
      LODWORD(v14) = 0;
    if ( (int)v14 >= 0 )
      goto LABEL_15;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v16[3] = (int)v14;
  }
  v16[4] = a1;
  v16[5] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
  v16[6] = *((unsigned int *)a1 + 63);
  v16[7] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v16);
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return (unsigned int)v14;
}
