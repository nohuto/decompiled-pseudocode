/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0017A20
 * Callers:
 *     CreateBitmapStrip @ 0x1C00D7F70 (CreateBitmapStrip.c)
 * Callees:
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C0017E00 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?PackFrameControls@@YAHHHH@Z @ 0x1C00EE320 (-PackFrameControls@@YAHHHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00FB7E0 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     CreateCaptionStrip @ 0x1C010BF40 (CreateCaptionStrip.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v20; // r13d
  int v21; // eax
  __int64 CompatibleBitmapInternal; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  int *v25; // rdi
  __int16 *v26; // r12
  int v27; // eax
  int *v28; // r15
  LONG v29; // r13d
  int v30; // r8d
  __int16 v31; // r9
  LONG v32; // ecx
  int v33; // eax
  __int64 v35; // rdx
  HBRUSH v36; // r8
  __int64 i; // rdx
  int v38; // [rsp+30h] [rbp-40h]
  LONG v39; // [rsp+34h] [rbp-3Ch]
  __int64 v40; // [rsp+38h] [rbp-38h]
  char v41[8]; // [rsp+40h] [rbp-30h] BYREF
  RECT v42; // [rsp+48h] [rbp-28h] BYREF
  LONG v43; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v38 = 0;
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
  v40 = 93LL;
  do
  {
    FrameControlMetrics = GetFrameControlMetrics(v5++, v1, a1);
    v1 = FrameControlMetrics;
  }
  while ( v5 < 0x5D );
  v7 = 0;
  v8 = &v42;
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
  bottom = v43;
  if ( v42.bottom < v43 )
    bottom = v42.bottom;
  if ( v42.right >= bottom )
  {
    right = v43;
    if ( v42.bottom < v43 )
      right = v42.bottom;
  }
  else
  {
    right = v42.right;
  }
  top = v42.top;
  if ( v42.top < right )
  {
    v15 = v42.top;
  }
  else
  {
    v14 = v43;
    if ( v42.bottom < v43 )
      v14 = v42.bottom;
    if ( v42.right >= v14 )
    {
      v15 = v43;
      if ( v42.bottom < v43 )
        v15 = v42.bottom;
    }
    else
    {
      v15 = v42.right;
    }
  }
  if ( v42.left < v15 )
  {
    LODWORD(v19) = 0;
  }
  else
  {
    v16 = v43;
    if ( v42.bottom < v43 )
      v16 = v42.bottom;
    if ( v42.right >= v16 )
    {
      v17 = v43;
      if ( v42.bottom < v43 )
        v17 = v42.bottom;
    }
    else
    {
      v17 = v42.right;
    }
    if ( v42.top >= v17 )
    {
      v18 = v43;
      if ( v42.bottom < v43 )
        v18 = v42.bottom;
      if ( v42.right >= v18 )
      {
        top = v43;
        if ( v42.bottom < v43 )
          top = v42.bottom;
      }
      else
      {
        top = v42.right;
      }
    }
    LODWORD(v19) = 0;
    if ( top != v42.left )
    {
      do
        v19 = (unsigned int)(v19 + 1);
      while ( top != *(&v42.left + v19) );
    }
  }
  v20 = (v19 + 1) * v1;
  v21 = PackFrameControls(v20, 1, a1);
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 24LL), v20, v21, 0, 0LL);
  v23 = CompatibleBitmapInternal;
  if ( CompatibleBitmapInternal )
  {
    GreSetBitmapOwner(CompatibleBitmapInternal, 0LL);
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 32LL), v23);
    if ( *v3 )
    {
      if ( !a1 )
        GreDeleteObject(ghbmCaption);
      GreDeleteObject(*v3);
      *v3 = 0LL;
    }
    if ( a1 || (ghbmCaption = CreateCaptionStrip()) != 0LL )
    {
      *v3 = v23;
      gpdaHDCBITSCreation = a1 == 0 ? 2 : 0;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
      v24 = 0LL;
      v25 = (int *)(v4 + 8);
      v26 = (__int16 *)&unk_1C02E1842;
      do
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = v25 - 2;
          v29 = *(v25 - 2);
          v30 = (unsigned __int16)*(v26 - 1);
          v31 = *v26;
          v39 = *(v25 - 1);
          v42.top = v39;
          v32 = v25[1] + v39;
          v42.left = v29;
          v42.right = v29 + v27;
          v42.bottom = v32;
          if ( v30 == 0xFFFF )
          {
            if ( (v31 & 1) != 0 )
            {
              if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
              {
                if ( (v31 & 0x100) != 0 )
                  v36 = *(HBRUSH *)(gpsi + 3720LL);
                else
                  v36 = *(HBRUSH *)(gpsi + 3712LL);
              }
              else if ( (v31 & 0x100) != 0 )
              {
                v36 = *(HBRUSH *)(gpsi + 3920LL);
              }
              else
              {
                v36 = *(HBRUSH *)(gpsi + 3912LL);
              }
              FillRect(*(HDC *)(gpDispInfo + 32LL), &v42, v36);
              DrawCaptionButtons(v29, v39, a1);
            }
            else if ( (v31 & 0x100) == 0 )
            {
              v35 = gcachedCaptions[0];
              if ( *(_QWORD *)(v24 + gcachedCaptions[0]) )
              {
                HMAssignmentUnlock(&gcachedCaptions[3 * v38]);
                v35 = gcachedCaptions[0];
              }
              ++v38;
              if ( a1 )
                *(_QWORD *)(v24 + v35 + 16) = v28;
              else
                *(_QWORD *)(v24 + v35 + 8) = v28;
              v24 += 24LL;
            }
          }
          else
          {
            DrawFrameControl(*(HDC *)(gpDispInfo + 32LL));
          }
        }
        else
        {
          *(_OWORD *)(v25 - 2) = *(_OWORD *)(v4 + 16LL * v25[1]);
        }
        v26 += 2;
        v25 += 4;
        --v40;
      }
      while ( v40 );
      v33 = *(_DWORD *)(v4 + 1016);
      if ( a1 )
      {
        *(_DWORD *)(gpsi + 2552LL) = v33;
        *(_DWORD *)(gpsi + 2556LL) = *(_DWORD *)(v4 + 1020);
      }
      else
      {
        *(_DWORD *)(gpsi + 2164LL) = v33;
        *(_DWORD *)(gpsi + 2168LL) = *(_DWORD *)(v4 + 1020);
      }
      gpdaHDCBITSCreation = -1;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
      return 1LL;
    }
  }
  return 0LL;
}
