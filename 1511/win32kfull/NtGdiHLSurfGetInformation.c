/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C007E240
 * Callers:
 *     <none>
 * Callees:
 *     GreDwmGetSurfaceData @ 0x1C007E0CC (GreDwmGetSurfaceData.c)
 *     GreSfmGetDirtyRgn @ 0x1C007E4A0 (GreSfmGetDirtyRgn.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0260DEC (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(__int64 a1, int a2, _OWORD *a3, unsigned int *a4)
{
  unsigned int *v4; // r13
  NTSTATUS v7; // ebx
  unsigned int *v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // edi
  _OWORD *v12; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  NTSTATUS DirtyRgn; // eax
  __int64 HDEV; // rax
  ULONG v19; // eax
  __int64 v20; // rcx
  _BYTE Src[56]; // [rsp+58h] [rbp-60h] BYREF

  v4 = a4;
  v7 = -1073741811;
  if ( a2 >= 11 )
    goto LABEL_34;
  v8 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v8 = (unsigned int *)W32UserProbeAddress;
  v9 = *v8;
  v10 = 56;
  memset(Src, 0, sizeof(Src));
  if ( a2 == 3 )
  {
    v11 = 0;
    if ( !a3 )
      goto LABEL_32;
    if ( v9 >= 0x30 )
    {
      v10 = 48;
      goto LABEL_13;
    }
    goto LABEL_33;
  }
  if ( a2 == 4 )
  {
LABEL_8:
    v11 = 0;
    if ( !a3 )
    {
LABEL_32:
      v19 = RtlNtStatusToDosError(v7);
      EngSetLastError(v19);
      return v11;
    }
    if ( v9 >= 0x38 )
    {
      v12 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v12 = (_OWORD *)W32UserProbeAddress;
      *(_OWORD *)Src = *v12;
      *(_OWORD *)&Src[16] = v12[1];
      *(_OWORD *)&Src[32] = v12[2];
      *(_QWORD *)&Src[48] = *((_QWORD *)v12 + 6);
      goto LABEL_13;
    }
LABEL_33:
    v7 = -1073741306;
    goto LABEL_32;
  }
  if ( a2 != 6 )
  {
    if ( a2 == 9 )
      goto LABEL_8;
LABEL_34:
    v7 = -1073741821;
    v11 = 0;
    goto LABEL_32;
  }
  v11 = 0;
  if ( !a3 )
    goto LABEL_32;
  v10 = 32;
  if ( v9 < 0x20 )
    goto LABEL_33;
LABEL_13:
  v13 = a2 - 3;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        if ( v15 != 3 )
          goto LABEL_19;
        DirtyRgn = GreSfmGetDirtyRgn(
                     a1,
                     *(_QWORD *)Src,
                     &Src[8],
                     &Src[16],
                     &Src[24],
                     &Src[32],
                     &Src[40],
                     &Src[48],
                     &Src[52]);
      }
      else
      {
        UserGetHDEV();
        DirtyRgn = GreDwmGetRedirectionStyle(v20, a1, Src);
      }
    }
    else
    {
      DirtyRgn = GreSfmGetDirtyRgn(a1, *(_QWORD *)Src, &Src[8], &Src[16], 0LL, 0LL, 0LL, &Src[48], &Src[52]);
    }
  }
  else
  {
    HDEV = UserGetHDEV();
    DirtyRgn = GreDwmGetSurfaceData(HDEV, a1, (struct tagDWMSURFACEDATA *)Src);
  }
  v7 = DirtyRgn;
LABEL_19:
  if ( v7 < 0 )
    goto LABEL_32;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (_OWORD *)W32UserProbeAddress;
  memmove(a3, Src, v10);
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (unsigned int *)W32UserProbeAddress;
  *v4 = v10;
  return 1;
}
