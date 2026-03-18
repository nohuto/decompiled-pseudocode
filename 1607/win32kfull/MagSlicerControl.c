/*
 * XREFs of MagSlicerControl @ 0x1C01F6210
 * Callers:
 *     NtUserSlicerControl @ 0x1C021B160 (NtUserSlicerControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0056A4C (MagpFindThreadContext.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01F4C64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01F4EB4 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01F4FAC (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C025C174 (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C025C598 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, unsigned int *a5)
{
  unsigned int LensContextInformation; // ebx
  __int64 v9; // r12
  int v10; // r9d
  int v11; // r9d
  __int64 v12; // r9
  unsigned int *v13; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  int v16; // r8d
  __int64 v17; // r9
  signed int v18; // ecx
  signed int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  unsigned int *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r8d
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  _DWORD v44[10]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]
  unsigned int v46; // [rsp+70h] [rbp-38h]
  int v47; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v9 = 0LL;
  if ( !a4 )
  {
    if ( (unsigned int)IsDesktopWindow(a3) )
      return LensContextInformation;
    if ( *(_QWORD *)(a3 + 88) == GetMessageWindow(v42) )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v10 = a4 - 1;
  if ( !v10 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v47 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v12, 8, (__int64)v44, &v47);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v13 = a5;
          *a5 = v44[0];
          v13[1] = v44[2];
          v13[2] = v44[9];
          *((_QWORD *)v13 + 2) = v45;
          v13[6] = v46;
        }
      }
      return LensContextInformation;
    }
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v16 = a5[2];
    v17 = *a5;
    if ( v16 <= (int)v17 )
      return LensContextInformation;
    v18 = a5[3];
    v19 = a5[1];
    if ( v18 <= v19 )
      return LensContextInformation;
    v20 = (unsigned int)(v16 - v17);
    HIDWORD(v21) = 0;
    v22 = *((_DWORD *)LensContext + 62)
        / (unsigned int)v20
        * (*((_DWORD *)LensContext + 63)
         / (unsigned int)(v18 - v19));
    if ( a5[4] > (unsigned int)v22 )
      return LensContextInformation;
    LODWORD(v21) = *((_DWORD *)LensContext + 62) % (unsigned int)v20;
    v23 = (void *)ReferenceDwmApiPort(v22, v21, v20, v17);
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v23);
  }
  v25 = a5;
  if ( *a5 > 6 )
    return LensContextInformation;
  v26 = MagpFindThreadContext(a1, a2);
  if ( !v26 )
    return (unsigned int)-1073741661;
  v29 = MagpFindLensContext((__int64)v26, a3, 1);
  if ( v29 )
  {
    v32 = (void *)ReferenceDwmApiPort(v28, v27, v30, v31);
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v32);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v35 = v29[32];
      if ( v35 )
      {
        Win32FreePool(v35, v33, v34);
        v29[32] = 0LL;
      }
      v36 = *v25;
      if ( !(_DWORD)v36 || (v9 = Win32AllocPool(24 * v36, 1735226197LL)) != 0 )
      {
        v37 = 0;
        *((_DWORD *)v29 + 60) = *v25;
        *((_DWORD *)v29 + 61) = v25[1];
        *((_DWORD *)v29 + 62) = v25[2];
        *((_DWORD *)v29 + 63) = v25[3];
        v29[32] = v9;
        v38 = *v25 == 0;
        if ( *v25 )
        {
          do
          {
            v39 = v37;
            v40 = v37++;
            v40 *= 32LL;
            v41 = 3 * v39;
            *(_QWORD *)(v9 + 8 * v41) = *(_QWORD *)((char *)v25 + v40 + 16);
            *(_QWORD *)(v9 + 8 * v41 + 8) = *(_QWORD *)((char *)v25 + v40 + 24);
            *(_QWORD *)(v9 + 8 * v41 + 16) = *(_QWORD *)((char *)v25 + v40 + 32);
          }
          while ( v37 < *v25 );
          v38 = *v25 == 0;
        }
        if ( v38 )
          *((_DWORD *)v29 + 4) &= ~0x10u;
        else
          *((_DWORD *)v29 + 4) |= 0x10u;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
