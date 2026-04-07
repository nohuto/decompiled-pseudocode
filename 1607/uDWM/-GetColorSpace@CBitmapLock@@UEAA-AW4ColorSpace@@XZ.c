/*
 * XREFs of ?GetColorSpace@CBitmapLock@@UEAA?AW4ColorSpace@@XZ @ 0x18009C950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetColorSpace(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == 72 )
    v2 = 0LL;
  else
    v2 = a1 - 56;
  v3 = *(_BYTE *)(v2 + 48) == 0;
  v6 = v2;
  if ( !v3 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v4 = *(_DWORD *)(a1 + 56);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v6);
  return v4;
}
