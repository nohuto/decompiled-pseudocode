/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00C079C
 * Callers:
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C00C0780 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C00C0790 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbp
  struct D3DDDI_DESTROYPAGINGQUEUE *v5; // rsi
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 hPagingQueue; // r9
  HMGRTABLE *v10; // r10
  __int64 v11; // r8
  __int64 v12; // rbx
  DXGPAGINGQUEUE *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // [rsp+60h] [rbp+0h] BYREF

  v3 = (_DWORD *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2118);
  *v3 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    *v3 = v5->hPagingQueue;
    v5 = (struct D3DDDI_DESTROYPAGINGQUEUE *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = (unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 4), Current);
  hPagingQueue = v5->hPagingQueue;
  v10 = (struct DXGPROCESS *)((char *)Current + 216);
  v11 = (v5->hPagingQueue >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)Current + 58)
    && (v12 = *(_QWORD *)v10,
        v7 = *(unsigned int *)(*(_QWORD *)v10 + 16LL * (unsigned int)v11 + 8),
        v8 = ((unsigned int)hPagingQueue >> 26) & 0x30,
        (((unsigned int)hPagingQueue >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v10 + 16LL * (unsigned int)v11 + 8) & 0x30))
    && (v7 & 0x1000) == 0
    && (v7 & 0xF) != 0
    && (v11 *= 2LL, (*(_BYTE *)(v12 + 8 * v11 + 8) & 0xF) == 0xA)
    && (v13 = *(DXGPAGINGQUEUE **)(v12 + 8 * v11)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v10, hPagingQueue);
    *((_DWORD *)v13 + 6) = 0;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    DXGPAGINGQUEUE::RemoveReference(v13);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2118);
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v11, hPagingQueue);
    *(_QWORD *)(v17 + 24) = v5->hPagingQueue;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 4));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v18, 2118);
    return 3221225485LL;
  }
}
