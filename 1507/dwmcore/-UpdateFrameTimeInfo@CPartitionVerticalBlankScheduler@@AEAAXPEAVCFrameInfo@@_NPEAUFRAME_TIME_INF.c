/*
 * XREFs of ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800DF408
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
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
  *((_QWORD *)a4 + 1) = (char *)this + 176;
  *((_DWORD *)a4 + 6) = *((_DWORD *)this + 52);
  *((_QWORD *)a4 + 2) = (char *)this + 22328;
  *((_BYTE *)a4 + 28) = *((_BYTE *)this + 22648);
  *((_BYTE *)a4 + 29) = *((_BYTE *)this + 22650);
}
