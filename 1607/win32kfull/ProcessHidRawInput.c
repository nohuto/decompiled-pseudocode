/*
 * XREFs of ProcessHidRawInput @ 0x1C01CC720
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C01CCFA0 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  xxxProcessHidInput(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v2);
}
