/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40
 * Callers:
 *     CreateBitmapStrip @ 0x1C00FC5F0 (CreateBitmapStrip.c)
 * Callees:
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C0056220 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     ?PackFrameControls@@YAHHHH@Z @ 0x1C00E9524 (-PackFrameControls@@YAHHHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00F4884 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     CreateCaptionStrip @ 0x1C00FFA60 (CreateCaptionStrip.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CreateDPIBitmapStrip(int a1)
{
  int v1; // r13d
  __int64 *v3; // rsi
  __int64 v4; // r14
  unsigned int v5; // edi
  int FrameControlMetrics; // eax
  unsigned int v7; // edi
  RECT *v8; // r15
  int v9; // r12d
  int v10; // eax
  LONG bottom; // eax
  LONG right; // eax
  LONG top; // r8d
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax
  __int64 v19; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  int *v23; // rdi
  __int16 *v24; // r12
  int v25; // eax
  int *v26; // r15
  LONG v27; // r13d
  int v28; // r8d
  __int16 v29; // r9
  LONG v30; // ecx
  int v31; // eax
  __int64 v33; // rdx
  HBRUSH v34; // r8
  __int64 i; // rdx
  int v36; // [rsp+30h] [rbp-40h]
  LONG v37; // [rsp+34h] [rbp-3Ch]
  __int64 v38; // [rsp+38h] [rbp-38h]
  char v39[8]; // [rsp+40h] [rbp-30h] BYREF
  RECT v40; // [rsp+48h] [rbp-28h] BYREF
  LONG v41; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v36 = 0;
  v3 = (__int64 *)ghbmBits;
  if ( a1 )
    v3 = (__int64 *)ghbmBits96;
  v4 = gpsi + 5748LL;
  if ( a1 )
  {
    if ( *(_WORD *)(gpsi + 7286LL) == 96 )
    {
      for ( i = 2552LL; i < 2560; i += 4LL )
        *(_DWORD *)(i + gpsi) = *(_DWORD *)(i + gpsi - 388);
      return 1LL;
    }
  }
  else
  {
    v4 = gpsi + 4260LL;
  }
  v5 = 0;
  v38 = 93LL;
  do
  {
    FrameControlMetrics = GetFrameControlMetrics(v5++, v1, a1);
    v1 = FrameControlMetrics;
  }
  while ( v5 < 0x5D );
  v7 = 0;
  v8 = &v40;
  v9 = FrameControlMetrics;
  do
  {
    ++v7;
    v10 = PackFrameControls(v9, 0, a1);
    v9 += v1;
    v8->left = v7 * v10;
    v8 = (RECT *)((char *)v8 + 4);
  }
  while ( v7 < 5 );
  bottom = v41;
  if ( v40.bottom < v41 )
    bottom = v40.bottom;
  if ( v40.right >= bottom )
  {
    right = v41;
    if ( v40.bottom < v41 )
      right = v40.bottom;
  }
  else
  {
    right = v40.right;
  }
  top = v40.top;
  if ( v40.top < right )
  {
    v15 = v40.top;
  }
  else
  {
    v14 = v41;
    if ( v40.bottom < v41 )
      v14 = v40.bottom;
    if ( v40.right >= v14 )
    {
      v15 = v41;
      if ( v40.bottom < v41 )
        v15 = v40.bottom;
    }
    else
    {
      v15 = v40.right;
    }
  }
  if ( v40.left < v15 )
  {
    LODWORD(v19) = 0;
  }
  else
  {
    v16 = v41;
    if ( v40.bottom < v41 )
      v16 = v40.bottom;
    if ( v40.right >= v16 )
    {
      v17 = v41;
      if ( v40.bottom < v41 )
        v17 = v40.bottom;
    }
    else
    {
      v17 = v40.right;
    }
    if ( v40.top >= v17 )
    {
      v18 = v41;
      if ( v40.bottom < v41 )
        v18 = v40.bottom;
      if ( v40.right >= v18 )
      {
        top = v41;
        if ( v40.bottom < v41 )
          top = v40.bottom;
      }
      else
      {
        top = v40.right;
      }
    }
    LODWORD(v19) = 0;
    if ( top != v40.left )
    {
      do
        v19 = (unsigned int)(v19 + 1);
      while ( top != *(&v40.left + v19) );
    }
  }
  PackFrameControls((v19 + 1) * v1, 1, a1);
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), 0LL);
  v21 = CompatibleBitmapInternal;
  if ( CompatibleBitmapInternal )
  {
    GreSetBitmapOwner(CompatibleBitmapInternal, 0LL);
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 32LL), v21);
    if ( *v3 )
    {
      if ( !a1 )
        GreDeleteObject(ghbmCaption);
      GreDeleteObject(*v3);
      *v3 = 0LL;
    }
    if ( a1 || (ghbmCaption = CreateCaptionStrip()) != 0LL )
    {
      *v3 = v21;
      gpdaHDCBITSCreation = a1 == 0 ? 2 : 0;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
      v22 = 0LL;
      v23 = (int *)(v4 + 8);
      v24 = (__int16 *)&unk_1C02E2062;
      do
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = v23 - 2;
          v27 = *(v23 - 2);
          v28 = (unsigned __int16)*(v24 - 1);
          v29 = *v24;
          v37 = *(v23 - 1);
          v40.top = v37;
          v30 = v23[1] + v37;
          v40.left = v27;
          v40.right = v27 + v25;
          v40.bottom = v30;
          if ( v28 == 0xFFFF )
          {
            if ( (v29 & 1) != 0 )
            {
              if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
              {
                if ( (v29 & 0x100) != 0 )
                  v34 = *(HBRUSH *)(gpsi + 3720LL);
                else
                  v34 = *(HBRUSH *)(gpsi + 3712LL);
              }
              else if ( (v29 & 0x100) != 0 )
              {
                v34 = *(HBRUSH *)(gpsi + 3920LL);
              }
              else
              {
                v34 = *(HBRUSH *)(gpsi + 3912LL);
              }
              FillRect(*(HDC *)(gpDispInfo + 32LL), &v40, v34);
              DrawCaptionButtons(v27, v37, a1);
            }
            else if ( (v29 & 0x100) == 0 )
            {
              v33 = gcachedCaptions[0];
              if ( *(_QWORD *)(v22 + gcachedCaptions[0]) )
              {
                HMAssignmentUnlock(&gcachedCaptions[3 * v36]);
                v33 = gcachedCaptions[0];
              }
              ++v36;
              if ( a1 )
                *(_QWORD *)(v22 + v33 + 16) = v26;
              else
                *(_QWORD *)(v22 + v33 + 8) = v26;
              v22 += 24LL;
            }
          }
          else
          {
            DrawFrameControl(*(HDC *)(gpDispInfo + 32LL));
          }
        }
        else
        {
          *(_OWORD *)(v23 - 2) = *(_OWORD *)(v4 + 16LL * v23[1]);
        }
        v24 += 2;
        v23 += 4;
        --v38;
      }
      while ( v38 );
      v31 = *(_DWORD *)(v4 + 1016);
      if ( a1 )
      {
        *(_DWORD *)(gpsi + 2552LL) = v31;
        *(_DWORD *)(gpsi + 2556LL) = *(_DWORD *)(v4 + 1020);
      }
      else
      {
        *(_DWORD *)(gpsi + 2164LL) = v31;
        *(_DWORD *)(gpsi + 2168LL) = *(_DWORD *)(v4 + 1020);
      }
      gpdaHDCBITSCreation = -1;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v39);
      return 1LL;
    }
  }
  return 0LL;
}
