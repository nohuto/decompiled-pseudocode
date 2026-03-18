/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001C8B8
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0007B10 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0020BE4 (VidSchDdiNotifyDpcWorker.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C007A834 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C001E3B0 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // bp
  VIDMM_APERTURE_SEGMENT *v7; // rcx
  int v8; // esi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned int *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a2;
  if ( !*((_DWORD *)this + 926) )
    return 0LL;
  while ( 1 )
  {
    v7 = *(VIDMM_APERTURE_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v4);
    v8 = (*((_DWORD *)v7 + 14) & 1) != 0 ? VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(v7, &v12, v5) : 0;
    if ( v8 < 0 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 926) )
      return 0LL;
  }
  if ( (dword_1C002F104 & 0x10) != 0 )
  {
    v10 = *((_QWORD *)this + 3);
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, a2, a3, a4);
    v11[6] = (unsigned int)v4;
    v11[7] = v12;
    v11[3] = 270LL;
    v11[4] = 37LL;
    v11[5] = v10;
    WdLogEvent5_WdCriticalError(v11);
  }
  return (unsigned int)v8;
}
