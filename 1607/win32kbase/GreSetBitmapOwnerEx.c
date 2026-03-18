/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C00346C8
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     GreSetBitmapOwner @ 0x1C0036E10 (GreSetBitmapOwner.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C00546D8 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v8);
  v5 = HmgShareLockCheck(a1, 5);
  v9 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || a2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v3 = HmgSetOwner(a1, a2, v6);
      v5 = v9;
    }
    if ( v5 )
      HmgDecrementShareReferenceCount((unsigned int *)v5);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v8);
  return v3;
}
