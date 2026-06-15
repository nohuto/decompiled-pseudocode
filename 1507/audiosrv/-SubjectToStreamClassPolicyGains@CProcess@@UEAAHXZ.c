/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180011120
 * Callers:
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800036E8 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 110) )
  {
    if ( *((_DWORD *)this + 107) )
      v2 = *((_DWORD *)this + 108);
    else
      v2 = *((_DWORD *)this + 74);
    if ( v2 )
      return 1LL;
  }
  return result;
}
