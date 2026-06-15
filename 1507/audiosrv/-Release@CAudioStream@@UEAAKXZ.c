/*
 * XREFs of ?Release@CAudioStream@@UEAAKXZ @ 0x18001E7A0
 * Callers:
 *     ?Release@CAudioStream@@W7EAAKXZ @ 0x180044E40 (-Release@CAudioStream@@W7EAAKXZ.c)
 *     ?Release@CAudioStream@@WBA@EAAKXZ @ 0x180044E50 (-Release@CAudioStream@@WBA@EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ @ 0x18002EFE0 (-FinalRelease@CPerStreamVolumeAudioStream@@EEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Release(CAudioStream *this)
{
  CPerStreamVolumeAudioStream *v1; // rdi
  unsigned __int32 v2; // esi
  void (__fastcall *v4)(CPerStreamVolumeAudioStream *__hidden); // rbx

  v1 = (CAudioStream *)((char *)this + 16);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *__hidden))(*(_QWORD *)v1 + 32LL);
    if ( v4 == CPerStreamVolumeAudioStream::FinalRelease )
      CPerStreamVolumeAudioStream::FinalRelease(v1);
    else
      v4(v1);
    (*(void (__fastcall **)(CPerStreamVolumeAudioStream *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
