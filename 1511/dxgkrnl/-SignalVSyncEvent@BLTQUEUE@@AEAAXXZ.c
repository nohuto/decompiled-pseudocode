/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C015F520
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C810 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     Template_qqqq @ 0x1C001C820 (Template_qqqq.c)
 *     Template_pqxqqipqx @ 0x1C0021D7C (Template_pqxqqipqx.c)
 *     Template_qiii @ 0x1C0021E94 (Template_qiii.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  union _LARGE_INTEGER *v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  LONGLONG v7; // rax
  char v8; // r10
  __int64 v9; // rdx
  char v10; // al
  struct _KEVENT *v11; // rcx
  bool v12; // zf
  struct DXGADAPTER *Adapter; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[48]; // [rsp+D0h] [rbp+D0h] BYREF

  v1 = (union _LARGE_INTEGER *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !*((_BYTE *)this + 220) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v1[2], (struct _KTHREAD **)this + 19);
    DXGPUSHLOCK::AcquireExclusive(*(DXGPUSHLOCK **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2;
    PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL));
    v4 = *((unsigned int *)this + 28);
    v5 = *((unsigned int *)this + 29);
    v6 = PerformanceCounter.QuadPart * v4;
    *((LARGE_INTEGER *)this + 22) = PerformanceCounter;
    LOBYTE(v6) = bTracingEnabled;
    v7 = PerformanceCounter.QuadPart * v4 / v5 / v1->QuadPart;
    *((_QWORD *)this + 23) = v7;
    v8 = v7;
    v9 = v1->QuadPart * v5 * (unsigned int)v7 % v4;
    *((_QWORD *)this + 24) = v1->QuadPart * v5 * (unsigned int)v7 / v4;
    if ( (_BYTE)v6 )
    {
      v10 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_qqqq(v6, &EventDWMVsyncSignal, v5, *((_DWORD *)this + 34), v8, 0, 0);
        LOBYTE(v6) = bTracingEnabled;
        v10 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v6 && v10 < 0 )
        Template_qiii(v6, v9, v5, 0, *((_QWORD *)this + 23), *((_QWORD *)this + 22), *((_QWORD *)this + 24));
    }
    if ( *((_DWORD *)this + 35) )
      KePulseEvent(*((PRKEVENT *)this + 15), 0, 0);
    v11 = (struct _KEVENT *)*((_QWORD *)this + 16);
    if ( v11 && *((_DWORD *)this + 34) <= *((_DWORD *)this + 46) )
      KeSetEvent(v11, 0, 0);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v1[2]);
  }
  if ( *((_BYTE *)this + 220) && (*((_DWORD *)this + 168) & 2) != 0 )
    KeSetTimerEx(*((PKTIMER *)this + 41), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C004716C), 0, 0LL);
  v12 = bTracingEnabled == 0;
  *((_DWORD *)this + 35) = 0;
  if ( !v12 )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(v1 + 1);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          Template_pqxqqipqx(v15, v14, v16, Adapter);
        }
      }
    }
  }
}
