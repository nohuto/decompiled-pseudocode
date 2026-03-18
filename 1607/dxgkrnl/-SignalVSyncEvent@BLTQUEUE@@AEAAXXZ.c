/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00CF364
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00CF23C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C6CC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     Template_qqqq @ 0x1C001F0F0 (Template_qqqq.c)
 *     Template_pqxqqipqx @ 0x1C002888C (Template_pqxqqipqx.c)
 *     Template_qiii @ 0x1C00289A4 (Template_qiii.c)
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
  struct _KEVENT *v10; // rcx
  bool v11; // zf
  char v12; // al
  struct DXGADAPTER *Adapter; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[48]; // [rsp+D0h] [rbp+D0h] BYREF

  v1 = (union _LARGE_INTEGER *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !*((_BYTE *)this + 316) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v1[2], (struct _KTHREAD **)this + 31);
    DXGPUSHLOCK::AcquireExclusive(*(DXGPUSHLOCK **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2;
    PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL));
    v4 = *((unsigned int *)this + 52);
    v5 = *((unsigned int *)this + 53);
    v6 = PerformanceCounter.QuadPart * v4;
    *((LARGE_INTEGER *)this + 34) = PerformanceCounter;
    LOBYTE(v6) = bTracingEnabled;
    v7 = PerformanceCounter.QuadPart * v4 / v5 / v1->QuadPart;
    *((_QWORD *)this + 35) = v7;
    v8 = v7;
    v9 = v1->QuadPart * v5 * (unsigned int)v7 % v4;
    *((_QWORD *)this + 36) = v1->QuadPart * v5 * (unsigned int)v7 / v4;
    if ( (_BYTE)v6 )
    {
      v12 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_qqqq(v6, &EventDWMVsyncSignal, v5, *((_DWORD *)this + 58), v8, 0, 0);
        LOBYTE(v6) = bTracingEnabled;
        v12 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v6 && (v12 & 0x40) != 0 )
        Template_qiii(v6, v9, v5, 0, *((_QWORD *)this + 35), *((_QWORD *)this + 34), *((_QWORD *)this + 36));
    }
    if ( *((_DWORD *)this + 59) )
      KePulseEvent(*((PRKEVENT *)this + 27), 0, 0);
    v10 = (struct _KEVENT *)*((_QWORD *)this + 28);
    if ( v10 && *((_DWORD *)this + 58) <= *((_DWORD *)this + 70) )
      KeSetEvent(v10, 0, 0);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v1[2]);
  }
  if ( *((_BYTE *)this + 316) && (*((_DWORD *)this + 212) & 2) != 0 )
    KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C005736C), 0, 0LL);
  v11 = bTracingEnabled == 0;
  *((_DWORD *)this + 59) = 0;
  if ( !v11 )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(v1 + 1);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          Template_pqxqqipqx(v15, v14, v16, Adapter);
        }
      }
    }
  }
}
