/*
 * XREFs of ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180111A6C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        char a3,
        struct FRAME_TIME_INFO *a4)
{
  if ( a3 )
    *((_DWORD *)a2 + 24) = 0;
  *(_QWORD *)a4 = a2;
  *((_QWORD *)a4 + 1) = (char *)this + 192;
  *((_DWORD *)a4 + 6) = *((_DWORD *)this + 56);
  *((_QWORD *)a4 + 2) = (char *)this + 21960;
  *((_BYTE *)a4 + 28) = *((_BYTE *)this + 22280);
  *((_BYTE *)a4 + 29) = *((_BYTE *)this + 22282);
}
