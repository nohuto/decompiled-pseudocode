/*
 * XREFs of ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005AA00
 * Callers:
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x18005A8E4 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005CECC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ATL::CComSafeArray<float,4>::Destroy(SAFEARRAY **a1)
{
  HRESULT result; // eax
  SAFEARRAY *v3; // rcx

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    result = SafeArrayUnlock(v3);
    if ( result >= 0 )
    {
      result = SafeArrayDestroy(*a1);
      if ( result >= 0 )
        *a1 = 0LL;
    }
  }
  return result;
}
