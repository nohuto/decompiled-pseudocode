/*
 * XREFs of ?GetStreamOta@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140029AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400295C4 (-GetOta@CStreamInstance@@QEAAJIPEAPEAUIAudioVirtualProtectedOutput@@@Z.c)
 *     ?FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z @ 0x1400299F4 (-FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::GetStreamOta(
        CSystemAudioDeviceBase *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // esi
  CStreamInstance *StreamInstance; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    StreamInstance = CSystemAudioDeviceBase::FindStreamInstance(this, a2);
    if ( StreamInstance )
      return CStreamInstance::GetOta(StreamInstance, a3, a4);
    else
      return 2147942406LL;
  }
  else
  {
    v9 = 0LL;
    v6 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64 *))(*((_QWORD *)this + 2) + 24LL))(
           (char *)this + 16,
           a3,
           &v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)v9 + 24LL))(
             v9,
             0LL,
             a4);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return (unsigned int)v6;
  }
}
