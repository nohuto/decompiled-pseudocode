/*
 * XREFs of ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C00013A8
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005EF4C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C009ECC0 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 * Callees:
 *     ??1CCD_SET_STRING_ID@@QEAA@XZ @ 0x1C0067714 (--1CCD_SET_STRING_ID@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::`scalar deleting destructor'(CCD_SET_STRING_ID *this)
{
  CCD_SET_STRING_ID::~CCD_SET_STRING_ID(this);
  operator delete(this);
  return this;
}
