/*
 * XREFs of ?GetAlphaMode@CBitmapLock@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009C900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetAlphaMode(CBitmapLock *this)
{
  char *v2; // rcx
  bool v3; // zf
  unsigned int v4; // ebx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this == (CBitmapLock *)72 )
    v2 = 0LL;
  else
    v2 = (char *)this - 56;
  v3 = v2[48] == 0;
  v6 = v2;
  if ( !v3 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v4 = *((_DWORD *)this + 13);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v6);
  return v4;
}
