/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18006E830
 * Callers:
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x180050EC0 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800429F4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
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
    *a2 = *((_DWORD *)this + 42);
    *a3 = *((_DWORD *)this + 43);
  }
  else
  {
    v3 = -2147024809;
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v3;
}
