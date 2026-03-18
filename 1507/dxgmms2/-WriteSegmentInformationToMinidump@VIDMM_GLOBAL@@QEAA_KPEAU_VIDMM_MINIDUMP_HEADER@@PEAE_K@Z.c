/*
 * XREFs of ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C0056EE0
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C004F020 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0011030 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WriteSegmentInformationToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r15
  struct _VIDMM_MINIDUMP_HEADER *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *Src[17]; // [rsp+28h] [rbp-71h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v9 = a2;
  if ( *((_DWORD *)this + 926) )
  {
    do
    {
      if ( a4 < 0x80 )
        break;
      memset(&Src[1], 0, 0x80uLL);
      v11 = *((_QWORD *)this + 464);
      LODWORD(Src[4]) = 0;
      Src[5] = 0LL;
      v12 = *(_QWORD *)(v11 + 8 * v6);
      *(_OWORD *)&Src[1] = *(_OWORD *)(v12 + 24);
      Src[3] = *(void **)(v12 + 40);
      Src[6] = *(void **)(v12 + 200);
      LODWORD(Src[7]) = *(_DWORD *)(v12 + 56);
      if ( (int)VIDMM_SEGMENT::CheckForApertureGuardPageCorruption(
                  (VIDMM_APERTURE_SEGMENT *)v12,
                  (unsigned int **)Src,
                  0LL,
                  v13) < 0 )
      {
        LODWORD(Src[8]) = 1;
        if ( Src[0] )
        {
          v14 = 4096 - ((__int64)Src[0] & 0xFFF);
          HIDWORD(Src[8]) = (__int64)Src[0] & 0xFFF;
          if ( v14 > 0x40 )
            v14 = 64;
          memmove(&Src[9], Src[0], v14);
        }
        else
        {
          HIDWORD(Src[8]) = -1;
        }
      }
      else
      {
        Src[8] = 0LL;
      }
      v15 = *(_OWORD *)&Src[3];
      v5 += 128LL;
      *(_OWORD *)a3 = *(_OWORD *)&Src[1];
      a4 -= 128LL;
      ++v4;
      v16 = *(_OWORD *)&Src[5];
      v6 = (unsigned int)(v6 + 1);
      *((_OWORD *)a3 + 1) = v15;
      v17 = *(_OWORD *)&Src[7];
      *((_OWORD *)a3 + 2) = v16;
      v18 = *(_OWORD *)&Src[9];
      *((_OWORD *)a3 + 3) = v17;
      v19 = *(_OWORD *)&Src[11];
      *((_OWORD *)a3 + 4) = v18;
      v20 = *(_OWORD *)&Src[13];
      *((_OWORD *)a3 + 5) = v19;
      v21 = *(_OWORD *)&Src[15];
      *((_OWORD *)a3 + 6) = v20;
      *((_OWORD *)a3 + 7) = v21;
      a3 += 128;
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 926) );
    v9 = a2;
  }
  *((_DWORD *)v9 + 269) = v4;
  return v5;
}
