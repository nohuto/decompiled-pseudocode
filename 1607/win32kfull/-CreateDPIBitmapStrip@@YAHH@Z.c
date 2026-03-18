/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84
 * Callers:
 *     CreateBitmapStrip @ 0x1C00BA210 (CreateBitmapStrip.c)
 * Callees:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C006125C (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     ?PackFrameControls@@YAHHHH@Z @ 0x1C010C734 (-PackFrameControls@@YAHHHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C011D5A8 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     CreateCaptionStrip @ 0x1C012D450 (CreateCaptionStrip.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  unsigned __int16 *v24; // r12
  int v25; // eax
  int *v26; // r15
  LONG v27; // r13d
  int v28; // r8d
  unsigned int v29; // r9d
  LONG v30; // ecx
  __int64 v32; // rdx
  HBRUSH v33; // r8
  __int64 i; // rdx
  int v35; // [rsp+30h] [rbp-40h]
  LONG v36; // [rsp+34h] [rbp-3Ch]
  __int64 v37; // [rsp+38h] [rbp-38h]
  char v38[8]; // [rsp+40h] [rbp-30h] BYREF
  RECT v39; // [rsp+48h] [rbp-28h] BYREF
  LONG v40; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v35 = 0;
  v3 = (__int64 *)ghbmBits;
  if ( a1 )
    v3 = (__int64 *)ghbmBits96;
  v4 = gpsi + 7140LL;
  if ( a1 )
  {
    if ( *(_WORD *)(gpsi + 8678LL) == 96 )
    {
      for ( i = 2552LL; i < 2560; i += 4LL )
        *(_DWORD *)(i + gpsi) = *(_DWORD *)(i + gpsi - 388);
      return 1LL;
    }
  }
  else
  {
    v4 = gpsi + 5652LL;
  }
  v5 = 0;
  v37 = 93LL;
  do
  {
    FrameControlMetrics = GetFrameControlMetrics(v5++, v1, a1);
    v1 = FrameControlMetrics;
  }
  while ( v5 < 0x5D );
  v7 = 0;
  v8 = &v39;
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
  bottom = v40;
  if ( v39.bottom < v40 )
    bottom = v39.bottom;
  if ( v39.right >= bottom )
  {
    right = v40;
    if ( v39.bottom < v40 )
      right = v39.bottom;
  }
  else
  {
    right = v39.right;
  }
  top = v39.top;
  if ( v39.top < right )
  {
    v15 = v39.top;
  }
  else
  {
    v14 = v40;
    if ( v39.bottom < v40 )
      v14 = v39.bottom;
    if ( v39.right >= v14 )
    {
      v15 = v40;
      if ( v39.bottom < v40 )
        v15 = v39.bottom;
    }
    else
    {
      v15 = v39.right;
    }
  }
  if ( v39.left < v15 )
  {
    LODWORD(v19) = 0;
  }
  else
  {
    v16 = v40;
    if ( v39.bottom < v40 )
      v16 = v39.bottom;
    if ( v39.right >= v16 )
    {
      v17 = v40;
      if ( v39.bottom < v40 )
        v17 = v39.bottom;
    }
    else
    {
      v17 = v39.right;
    }
    if ( v39.top >= v17 )
    {
      v18 = v40;
      if ( v39.bottom < v40 )
        v18 = v39.bottom;
      if ( v39.right >= v18 )
      {
        top = v40;
        if ( v39.bottom < v40 )
          top = v39.bottom;
      }
      else
      {
        top = v39.right;
      }
    }
    LODWORD(v19) = 0;
    if ( top != v39.left )
    {
      do
        v19 = (unsigned int)(v19 + 1);
      while ( top != *(&v39.left + v19) );
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
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v38);
      v22 = 0LL;
      v23 = (int *)(v4 + 8);
      v24 = (unsigned __int16 *)&unk_1C02E8402;
      do
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = v23 - 2;
          v27 = *(v23 - 2);
          v28 = *(v24 - 1);
          v29 = *v24;
          v36 = *(v23 - 1);
          v39.top = v36;
          v30 = v23[1] + v36;
          v39.left = v27;
          v39.right = v27 + v25;
          v39.bottom = v30;
          if ( v28 == 0xFFFF )
          {
            if ( (v29 & 1) != 0 )
            {
              if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
              {
                if ( (v29 & 0x100) != 0 )
                  v33 = *(HBRUSH *)(gpsi + 5112LL);
                else
                  v33 = *(HBRUSH *)(gpsi + 5104LL);
              }
              else if ( (v29 & 0x100) != 0 )
              {
                v33 = *(HBRUSH *)(gpsi + 5312LL);
              }
              else
              {
                v33 = *(HBRUSH *)(gpsi + 5304LL);
              }
              FillRect(*(HDC *)(gpDispInfo + 32LL), &v39, v33);
              DrawCaptionButtons(v27, v36, a1);
            }
            else if ( (v29 & 0x100) == 0 )
            {
              v32 = gcachedCaptions[0];
              if ( *(_QWORD *)(v22 + gcachedCaptions[0]) )
              {
                HMAssignmentUnlock(&gcachedCaptions[3 * v35]);
                v32 = gcachedCaptions[0];
              }
              ++v35;
              if ( a1 )
                *(_QWORD *)(v22 + v32 + 16) = v26;
              else
                *(_QWORD *)(v22 + v32 + 8) = v26;
              v22 += 24LL;
            }
          }
          else
          {
            DrawFrameControl(*(HDC *)(gpDispInfo + 32LL), &v39, v28, v29);
          }
        }
        else
        {
          *(_OWORD *)(v23 - 2) = *(_OWORD *)(v4 + 16LL * v23[1]);
        }
        v24 += 2;
        v23 += 4;
        --v37;
      }
      while ( v37 );
      if ( a1 )
      {
        *(_DWORD *)(gpsi + 2552LL) = *(_DWORD *)(v4 + 1016);
        *(_DWORD *)(gpsi + 2556LL) = *(_DWORD *)(v4 + 1020);
      }
      else
      {
        SetDpiDepSysMet(71LL, *(unsigned int *)(v4 + 1016));
        SetDpiDepSysMet(72LL, *(unsigned int *)(v4 + 1020));
      }
      gpdaHDCBITSCreation = -1;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v38);
      return 1LL;
    }
  }
  return 0LL;
}
