/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C0053250
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmGetDirtyRgn @ 0x1C0052D14 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C0115708 (GreDwmGetSurfaceData.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreDwmGetRedirectionStyle @ 0x1C025E70C (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(HLSURF a1, int a2, _OWORD *a3, unsigned int *a4)
{
  unsigned int *v4; // r13
  NTSTATUS v7; // ebx
  unsigned int v8; // edi
  unsigned int *v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  _OWORD *v12; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  NTSTATUS DirtyRgn; // eax
  __int64 v17; // rcx
  __int64 HDEV; // rax
  ULONG v19; // eax
  _BYTE Src[56]; // [rsp+58h] [rbp-60h] BYREF

  v4 = a4;
  v7 = -1073741811;
  if ( a2 >= 11 )
    goto LABEL_2;
  v9 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v9 = (unsigned int *)W32UserProbeAddress;
  v10 = *v9;
  v11 = 56;
  memset(Src, 0, sizeof(Src));
  if ( a2 == 3 )
  {
    v8 = 0;
    if ( !a3 )
      goto LABEL_36;
    if ( v10 >= 0x30 )
    {
      v11 = 48;
      goto LABEL_21;
    }
    goto LABEL_12;
  }
  if ( a2 == 4 )
  {
LABEL_13:
    v8 = 0;
    if ( !a3 )
      goto LABEL_36;
    if ( v10 >= 0x38 )
    {
      v12 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v12 = (_OWORD *)W32UserProbeAddress;
      *(_OWORD *)Src = *v12;
      *(_OWORD *)&Src[16] = v12[1];
      *(_OWORD *)&Src[32] = v12[2];
      *(_QWORD *)&Src[48] = *((_QWORD *)v12 + 6);
      goto LABEL_21;
    }
LABEL_12:
    v7 = -1073741306;
    goto LABEL_36;
  }
  if ( a2 != 6 )
  {
    if ( a2 != 9 )
    {
LABEL_2:
      v7 = -1073741821;
      v8 = 0;
LABEL_36:
      v19 = RtlNtStatusToDosError(v7);
      EngSetLastError(v19);
      return v8;
    }
    goto LABEL_13;
  }
  v8 = 0;
  if ( !a3 )
    goto LABEL_36;
  v11 = 32;
  if ( v10 < 0x20 )
    goto LABEL_12;
LABEL_21:
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
          goto LABEL_30;
        DirtyRgn = GreSfmGetDirtyRgn(
                     a1,
                     *(__int64 *)Src,
                     (HRGN *)&Src[8],
                     (HRGN *)&Src[16],
                     (HRGN *)&Src[24],
                     (HRGN *)&Src[32],
                     (struct _POINTL *)&Src[40],
                     (int *)&Src[48],
                     (int *)&Src[52]);
      }
      else
      {
        UserGetHDEV();
        DirtyRgn = GreDwmGetRedirectionStyle(v17, a1, Src);
      }
    }
    else
    {
      DirtyRgn = GreSfmGetDirtyRgn(
                   a1,
                   *(__int64 *)Src,
                   (HRGN *)&Src[8],
                   (HRGN *)&Src[16],
                   0LL,
                   0LL,
                   0LL,
                   (int *)&Src[48],
                   (int *)&Src[52]);
    }
  }
  else
  {
    HDEV = UserGetHDEV();
    DirtyRgn = GreDwmGetSurfaceData(HDEV, a1, Src);
  }
  v7 = DirtyRgn;
LABEL_30:
  if ( v7 < 0 )
    goto LABEL_36;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (_OWORD *)W32UserProbeAddress;
  memmove(a3, Src, v11);
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (unsigned int *)W32UserProbeAddress;
  *v4 = v11;
  return 1;
}
