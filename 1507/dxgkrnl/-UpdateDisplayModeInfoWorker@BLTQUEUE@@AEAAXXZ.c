/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015B8BC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015B4B4 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015B62C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // rcx
  int v4; // r9d
  unsigned int v5; // edx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 14) = *((_QWORD *)this + 34);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)this + 19);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((unsigned int *)this + 28);
  v4 = *((_DWORD *)this + 70);
  *((LARGE_INTEGER *)this + 22) = v2;
  *((_QWORD *)this + 25) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 29) / v3;
  v5 = 40 * v4 / 0x3E8u;
  *((_DWORD *)this + 52) = v5;
  v2.LowPart = *((_DWORD *)this + 162);
  *((_DWORD *)this + 53) = v5 + v4;
  *((_DWORD *)this + 54) = v5 + v4 + 5 * v4 / 0x3E8u;
  if ( (v2.LowPart & 2) != 0 && !*((_BYTE *)this + 220) )
  {
    BLTQUEUE::StopVSync((PKTIMER *)this, 1);
    BLTQUEUE::StartVSync((PKTIMER *)this, 1);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  *((_BYTE *)this + 258) = 0;
  BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
}
