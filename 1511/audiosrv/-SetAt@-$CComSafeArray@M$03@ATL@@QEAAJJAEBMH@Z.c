/*
 * XREFs of ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180076A2C
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003AAF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180073E50 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x180074524 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::SetAt(SAFEARRAY **a1, LONG a2, _DWORD *a3)
{
  __int64 v4; // rdi
  int LowerBound; // eax
  LONG v8; // edx
  __int64 v9; // rsi

  v4 = a2;
  if ( !*a1 )
    return 2147500037LL;
  LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(a1, a2);
  v9 = LowerBound;
  if ( (int)v4 < LowerBound || (int)v4 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(a1, v8) )
    return 2147942487LL;
  *((_DWORD *)(*a1)->pvData + v4 - v9) = *a3;
  return 0LL;
}
