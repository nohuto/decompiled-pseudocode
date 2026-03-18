/*
 * XREFs of ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x1801549B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetSourceState(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // zf
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == 72 )
    v1 = 0LL;
  else
    v1 = a1 - 56;
  v2 = *(_BYTE *)(v1 + 48) == 0;
  v4 = v1;
  if ( !v2 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 8));
  CGuard<CMTALock>::~CGuard<CMTALock>(&v4);
  return 0LL;
}
