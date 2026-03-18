/*
 * XREFs of ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020954
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00DB9E8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01570F4 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C0156514 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

OUTPUTDUPL_MGR *__fastcall OUTPUTDUPL_MGR::`scalar deleting destructor'(OUTPUTDUPL_MGR *this)
{
  OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(this);
  operator delete(this);
  return this;
}
