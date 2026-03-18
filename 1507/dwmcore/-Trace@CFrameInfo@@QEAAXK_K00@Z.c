/*
 * XREFs of ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x1800DF178
 * Callers:
 *     ?ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z @ 0x1800E1A90 (-ProcessOutOfFrameDirectFlip@CPartitionVerticalBlankScheduler@@IEAAJPEAVCFrameInfo@@PEA_N@Z.c)
 * Callees:
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1800E41BC (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 */

void __fastcall CFrameInfo::Trace(CFrameInfo *this, int a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      *((_QWORD *)this + 33) - *((_QWORD *)this + 32),
      *((unsigned __int8 *)this + 272),
      a2,
      *(_QWORD *)this,
      *((_DWORD *)this + 4),
      *((_QWORD *)this + 169),
      *((_QWORD *)this + 168),
      *((_DWORD *)this + 41));
}
