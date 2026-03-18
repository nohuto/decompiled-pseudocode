/*
 * XREFs of ??_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z @ 0x1C01659D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C0165930 (--1CVP_SYSTEM_THREAD@@MEAA@XZ.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C0166F88 (-TdrFreePool@@YAXPEAX@Z.c)
 */

CTDR_SUBMIT_REPORT_THREAD *__fastcall CTDR_SUBMIT_REPORT_THREAD::`scalar deleting destructor'(
        CTDR_SUBMIT_REPORT_THREAD *this,
        char a2)
{
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(this);
  if ( (a2 & 1) != 0 )
    TdrFreePool(this);
  return this;
}
