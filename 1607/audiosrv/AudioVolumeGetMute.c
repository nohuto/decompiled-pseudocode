/*
 * XREFs of AudioVolumeGetMute @ 0x180029EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeGetMute(CVolumeStrip **a1, int *a2)
{
  CVolumeStrip *v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 192LL);
  if ( (char *)v3 == (char *)CVolumeStrip::GetMute )
    return CVolumeStrip::GetMute(v2, a2);
  else
    return v3();
}
