/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099C58
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AB00 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00981AC (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     Template_qpxxxqqxpc @ 0x1C002044C (Template_qpxxxqqxpc.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpxxxqqxpc(
      (__int64)this,
      *((_QWORD *)this + 1),
      a3,
      *((_DWORD *)this + 4) + 1,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 5),
      v3,
      *((_DWORD *)this + 14),
      *((_QWORD *)this + 25),
      *((_QWORD *)this + 15),
      *((_BYTE *)this + 468));
}
