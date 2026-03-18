/*
 * XREFs of ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x180111684
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x1801174B8 (Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
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
      *((_QWORD *)this + 166),
      *((_QWORD *)this + 165),
      *((_DWORD *)this + 41));
}
