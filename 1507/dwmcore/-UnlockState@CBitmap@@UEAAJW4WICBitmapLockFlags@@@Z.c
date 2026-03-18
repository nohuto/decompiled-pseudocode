/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180080920
 * Callers:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800520A0 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  char *v2; // rbx
  char v3; // di
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 32;
  v3 = a2;
  if ( this == (CBitmap *)32 )
    v4 = 0LL;
  else
    v4 = (__int64)(v2 + 112);
  v5 = *(_BYTE *)(v4 + 48) == 0;
  v7 = v4;
  if ( !v5 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)v2 + 56) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v2 + 56);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v7);
  return 0LL;
}
