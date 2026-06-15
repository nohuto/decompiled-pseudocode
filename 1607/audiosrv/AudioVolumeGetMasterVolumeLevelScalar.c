/*
 * XREFs of AudioVolumeGetMasterVolumeLevelScalar @ 0x180029F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevelScalar(CVolumeStrip **a1, float *a2)
{
  CVolumeStrip *v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 120LL);
  if ( (char *)v3 == (char *)CVolumeStrip::GetMasterVolumeLevelScalar )
    return CVolumeStrip::GetMasterVolumeLevelScalar(v2, a2);
  else
    return v3();
}
