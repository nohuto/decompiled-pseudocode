/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C00447D8
 * Callers:
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     GreCreateBitmap @ 0x1C0044870 (GreCreateBitmap.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006D474 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v7);
  v5 = HmgShareLockCheck(a1, 5);
  v8 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 184) || a2) && (a1 & 0x800000) == 0 )
    {
      v3 = HmgSetOwner(a1, a2, 5u);
      v5 = v8;
    }
    if ( v5 )
      HmgDecrementShareReferenceCount((_DWORD *)v5);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v7);
  return v3;
}
