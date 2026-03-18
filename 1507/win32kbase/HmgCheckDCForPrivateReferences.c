/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C00B32C8
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00AF604 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AF640 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00B3438 (HmgIsObjectOwnedByW32Pid.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  struct HPATH__ *v14; // rdx
  _BYTE v16[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v17; // [rsp+28h] [rbp-80h]

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(a1 + 144))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v1 + 152))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v2 + 160))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v3 + 96))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v4 + 1528))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v5 + 1568))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v6 + 224))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v7 + 1560))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v8 + 232))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v9 + 1552))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v10 + 512))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v11 + 2512))
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v12 + 104)) )
  {
    return 1LL;
  }
  v14 = *(struct HPATH__ **)(v13 + 168);
  if ( v14 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v16, v14);
    if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v17) )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v16);
      return 1LL;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v16);
  }
  return 0LL;
}
