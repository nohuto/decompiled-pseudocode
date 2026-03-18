/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00CF5D4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF47C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF504 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
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

  *((_QWORD *)this + 26) = *((_QWORD *)this + 52);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)this + 31);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((unsigned int *)this + 52);
  v4 = *((_DWORD *)this + 106);
  *((LARGE_INTEGER *)this + 34) = v2;
  *((_QWORD *)this + 37) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 53) / v3;
  v5 = 40 * v4 / 0x3E8u;
  *((_DWORD *)this + 76) = v5;
  v2.LowPart = *((_DWORD *)this + 212);
  *((_DWORD *)this + 77) = v5 + v4;
  *((_DWORD *)this + 78) = v5 + v4 + 5 * v4 / 0x3E8u;
  if ( (v2.LowPart & 2) != 0 && !*((_BYTE *)this + 316) )
  {
    BLTQUEUE::StopVSync(this, 1);
    BLTQUEUE::StartVSync(this, 1);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  *((_BYTE *)this + 402) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
