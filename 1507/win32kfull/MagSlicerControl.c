/*
 * XREFs of MagSlicerControl @ 0x1C01FE734
 * Callers:
 *     NtUserSlicerControl @ 0x1C0221180 (NtUserSlicerControl.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     MagpFindThreadContext @ 0x1C008B374 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01FD1B8 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01FD404 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01FD4FC (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C025F224 (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C025F648 (DwmAsyncMagnSetWindowSlicer.c)
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
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r8d
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _DWORD v42[10]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+68h] [rbp-40h]
  unsigned int v44; // [rsp+70h] [rbp-38h]
  int v45; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v9 = 0LL;
  if ( !a4 )
  {
    if ( (unsigned int)IsDesktopWindow(a3) )
      return LensContextInformation;
    if ( *(_QWORD *)(a3 + 88) == GetMessageWindow(v40) )
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
        v45 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v12, 8, (__int64)v42, &v45);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v13 = a5;
          *a5 = v42[0];
          v13[1] = v42[2];
          v13[2] = v42[9];
          *((_QWORD *)v13 + 2) = v43;
          v13[6] = v44;
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
      v33 = v29[32];
      if ( v33 )
      {
        Win32FreePool(v33);
        v29[32] = 0LL;
      }
      v34 = *v25;
      if ( !(_DWORD)v34 || (v9 = Win32AllocPool(24 * v34, 1735226197LL)) != 0 )
      {
        v35 = 0;
        *((_DWORD *)v29 + 60) = *v25;
        *((_DWORD *)v29 + 61) = v25[1];
        *((_DWORD *)v29 + 62) = v25[2];
        *((_DWORD *)v29 + 63) = v25[3];
        v29[32] = v9;
        v36 = *v25 == 0;
        if ( *v25 )
        {
          do
          {
            v37 = v35;
            v38 = v35++;
            v38 *= 32LL;
            v39 = 3 * v37;
            *(_QWORD *)(v9 + 8 * v39) = *(_QWORD *)((char *)v25 + v38 + 16);
            *(_QWORD *)(v9 + 8 * v39 + 8) = *(_QWORD *)((char *)v25 + v38 + 24);
            *(_QWORD *)(v9 + 8 * v39 + 16) = *(_QWORD *)((char *)v25 + v38 + 32);
          }
          while ( v35 < *v25 );
          v36 = *v25 == 0;
        }
        if ( v36 )
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
