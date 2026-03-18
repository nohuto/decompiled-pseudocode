/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C00B5DA8
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00B5F60 (HmgIsObjectOwnedByW32Pid.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 result; // rax

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(a1 + 144)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v1 + 152)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v2 + 160)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v3 + 96)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v4 + 1504)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v5 + 1544)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v6 + 224)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v7 + 1536)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v8 + 232)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v9 + 1528)) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v10 + 512)) )
    return 1LL;
  result = HmgIsObjectOwnedByW32Pid(*(_QWORD *)(v11 + 2488));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
