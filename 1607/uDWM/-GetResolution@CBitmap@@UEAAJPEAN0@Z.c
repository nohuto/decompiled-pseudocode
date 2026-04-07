/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x18009C490
 * Callers:
 *     ?GetResolution@CBitmap@@WBI@EAAJPEAN0@Z @ 0x180051290 (-GetResolution@CBitmap@@WBI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  unsigned int v3; // ebx
  char *v7; // rcx
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( this == (CBitmap *)16 )
    v7 = 0LL;
  else
    v7 = (char *)this + 96;
  v9 = v7;
  if ( v7[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 44);
    *a3 = *((float *)this + 45);
  }
  else
  {
    v3 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v3;
}
