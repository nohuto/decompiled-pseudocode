/*
 * XREFs of CmpInitializeValueNameString @ 0x14053B954
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(ULONG_PTR BugCheckParameter3, __int64 a2, _WORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // r11
  __int16 v8; // cx

  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) != 0 )
  {
    v5 = 2 * *(_WORD *)(BugCheckParameter3 + 2);
    *(_WORD *)a2 = v5;
    if ( v5 > 0x7FFFu )
      KeBugCheckEx(0x51u, 0x31uLL, 1uLL, BugCheckParameter3, v5);
    result = CmpCopyCompressedName(
               a3,
               0x7FFFu,
               (unsigned __int8 *)(BugCheckParameter3 + 20),
               *(unsigned __int16 *)(BugCheckParameter3 + 2));
    *(_QWORD *)(v7 + 8) = a3;
    *(_WORD *)(v7 + 2) = 0x7FFF;
  }
  else
  {
    v8 = *(_WORD *)(BugCheckParameter3 + 2);
    result = BugCheckParameter3 + 20;
    *(_WORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 20;
    *(_WORD *)(a2 + 2) = v8;
  }
  return result;
}
