/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134
 * Callers:
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  _DWORD *v4; // rbx

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    v4 = (_DWORD *)HmgShareLockCheck((int)*a1, 5);
    if ( v4 )
    {
      if ( (v1 & 0x800000) == 0 )
        HmgSetOwner(v1, -2147483646, 5);
      HmgDecrementShareReferenceCount(v4);
    }
    GreDeleteObject((__int64)*a1, v3);
    *a1 = 0LL;
  }
}
