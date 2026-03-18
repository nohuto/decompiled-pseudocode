/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00D7D7C
 * Callers:
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C00D7D60 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C00D7D70 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00217C0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbp
  struct D3DDDI_DESTROYPAGINGQUEUE *v5; // rbx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 hPagingQueue; // r9
  __int64 v12; // rdx
  __int64 v13; // rsi
  DXGPAGINGQUEUE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  _BYTE v23[48]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (_DWORD *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2118);
  *v3 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    *v3 = v5->hPagingQueue;
    v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL;
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 4),
    (struct DXGPROCESS *)ProcessDxgProcess);
  hPagingQueue = v5->hPagingQueue;
  v12 = (v5->hPagingQueue >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v13 = *(_QWORD *)(ProcessDxgProcess + 208),
        v10 = *(unsigned int *)(v13 + 16LL * (unsigned int)v12 + 8),
        v9 = ((unsigned int)hPagingQueue >> 26) & 0x30,
        (((unsigned int)hPagingQueue >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (v9 = 2LL * (unsigned int)v12, (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0xF) == 0xA)
    && (v14 = *(DXGPAGINGQUEUE **)(v13 + 16LL * (unsigned int)v12)) != 0LL )
  {
    v15 = ((unsigned int)hPagingQueue >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v16 = *(_QWORD *)(ProcessDxgProcess + 208);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( (((unsigned int)hPagingQueue >> 26) & 0x30) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x30)
        && (v17 & 0x1000) == 0
        && (v17 & 0xF) != 0 )
      {
        *(_DWORD *)(v16 + 16 * (((unsigned __int64)(unsigned int)hPagingQueue >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    DXGPAGINGQUEUE::ReleaseReference(v14);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2118);
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v9, v12, v10, hPagingQueue);
    *(_QWORD *)(v21 + 24) = v5->hPagingQueue;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v22, 2118);
    return 3221225485LL;
  }
}
