/*
 * XREFs of NtGdiOpenDCW @ 0x1C00424A0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     FreeTmpBuffer @ 0x1C0042690 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     AllocFreeTmpBuffer @ 0x1C0042C00 (AllocFreeTmpBuffer.c)
 *     FreeThreadBufferWithTag @ 0x1C0064B70 (FreeThreadBufferWithTag.c)
 *     CaptureDriverInfo2W @ 0x1C0081530 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C00844E0 (CaptureDEVMODEW.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r14
  char *v11; // rdi
  size_t v12; // rsi
  int v13; // edi
  int v14; // eax
  WCHAR *SourceString; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  int v18[2]; // [rsp+68h] [rbp-40h]

  v10 = 0LL;
  SourceString = 0LL;
  v17 = 0LL;
  *(_QWORD *)v18 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0, 1);
  v11 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v12 = *a1;
    SourceString = (WCHAR *)AllocFreeTmpBuffer((unsigned int)*a1 + 2);
    if ( SourceString )
    {
      if ( &v11[v12] < v11 || &v11[v12] > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(SourceString, v11, v12);
      SourceString[v12 >> 1] = 0;
    }
  }
  if ( !a2 || (v17 = CaptureDEVMODEW(a2)) != 0 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = 1;
  }
  if ( !v14 || a8 && (*(_QWORD *)v18 = CaptureDriverInfo2W()) == 0LL )
    v13 = 0;
  if ( v13 )
    v10 = hdcOpenDCW(SourceString, a7, 0LL, v18[0], a9, a6);
  if ( SourceString )
    FreeTmpBuffer(SourceString);
  if ( v17 )
    FreeThreadBufferWithTag(v17);
  if ( *(_QWORD *)v18 )
    FreeThreadBufferWithTag(*(_QWORD *)v18);
  return v10;
}
