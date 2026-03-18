/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C00C0878
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00BD724 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00C09F4 (HmgIsObjectOwnedByW32Pid.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **a1, unsigned int a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  struct OBJECT *v7; // [rsp+28h] [rbp-80h]

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(a1[18], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[19], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[20], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[12], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[191], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[196], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[28], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[195], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[29], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[194], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[64], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[314], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(a1[13], a2) )
  {
    return 1LL;
  }
  v4 = a1[21];
  if ( v4 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v4);
    if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v7, a2) )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
      return 1LL;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
  }
  return 0LL;
}
