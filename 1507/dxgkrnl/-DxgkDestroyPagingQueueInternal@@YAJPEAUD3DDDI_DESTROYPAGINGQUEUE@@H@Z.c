/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C01448F8
 * Callers:
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C0131540 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C0145BB0 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C001C5F0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbp
  struct D3DDDI_DESTROYPAGINGQUEUE *v5; // rbx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 hPagingQueue; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  DXGPAGINGQUEUE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  _BYTE v21[48]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (_DWORD *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2118);
  *v3 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    *v3 = v5->hPagingQueue;
    v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 4), Current);
  hPagingQueue = v5->hPagingQueue;
  v10 = (v5->hPagingQueue >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)Current + 58)
    && (v11 = *((_QWORD *)Current + 27),
        v8 = *(unsigned int *)(v11 + 16LL * (unsigned int)v10 + 8),
        v7 = ((unsigned int)hPagingQueue >> 26) & 0x30,
        (((unsigned int)hPagingQueue >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (v7 = 2LL * (unsigned int)v10, (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0xF) == 0xA)
    && (v12 = *(DXGPAGINGQUEUE **)(v11 + 16LL * (unsigned int)v10)) != 0LL )
  {
    v13 = ((unsigned int)hPagingQueue >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 58) )
    {
      v14 = *((_QWORD *)Current + 27);
      v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
      if ( (((unsigned int)hPagingQueue >> 26) & 0x30) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x30)
        && (v15 & 0x1000) == 0
        && (v15 & 0xF) != 0 )
      {
        *(_DWORD *)(v14 + 16 * (((unsigned __int64)(unsigned int)hPagingQueue >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    DXGPAGINGQUEUE::ReleaseReference(v12);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2118);
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v7, v10, v8, hPagingQueue);
    *(_QWORD *)(v19 + 24) = v5->hPagingQueue;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v20, 2118);
    return 3221225485LL;
  }
}
