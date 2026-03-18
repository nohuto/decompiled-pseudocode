/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100
 * Callers:
 *     GetResizeBorderWidthInternal @ 0x1C006C188 (GetResizeBorderWidthInternal.c)
 *     AdjustWindowRectExInternal @ 0x1C006D828 (AdjustWindowRectExInternal.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C006F3E4 (GetWindowFrameMetricInternal.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     _SystemParametersInfoForDpi @ 0x1C01CEA40 (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C01D92C4 (GetWindowNCMetricsForDpi.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 * Callees:
 *     GetDpiDepSysMetCacheMetricSlot @ 0x1C006E95C (GetDpiDepSysMetCacheMetricSlot.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  INT v4; // edx
  INT v6; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *DPIMETRICSForDpi; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // esi
  int v31; // edi
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v37; // ebx
  int v38; // edi
  int v39; // eax

  v2 = a1;
  if ( (unsigned int)GetDpiDepSysMetCacheMetricSlot(a1) == -1 )
  {
    if ( (v2 & 0x80000000) == 0LL && v2 < 0x61 )
      return *(unsigned int *)(gpsi + 4 * v2 + 1880);
    goto LABEL_5;
  }
  if ( v4 <= 0 )
  {
LABEL_5:
    UserSetLastError(87LL);
    return 0LL;
  }
  v6 = EngMulDiv(*(_DWORD *)(gpsi + 4 * v2 + 2268), v4, 96);
  v7 = (unsigned int)(v2 - 31);
  if ( (unsigned int)v7 <= 0x29 )
  {
    v8 = 0x30001400001LL;
    if ( _bittest64(&v8, v7) )
    {
      DPIMETRICSForDpi = (_DWORD *)GetDPIMETRICSForDpi();
      v10 = DPIMETRICSForDpi;
      switch ( (_DWORD)v2 )
      {
        case 0x1F:
          if ( v6 <= (int)(DPIMETRICSForDpi[19] + ScaleSystemMetricForDPIWithoutCache(46LL, a2)) )
            v6 = v10[19] + ScaleSystemMetricForDPIWithoutCache(46LL, a2);
          break;
        case 0x35:
          if ( v6 <= (int)(DPIMETRICSForDpi[21] + ScaleSystemMetricForDPIWithoutCache(46LL, a2)) )
            v6 = v10[21] + ScaleSystemMetricForDPIWithoutCache(46LL, a2);
          break;
        case 0x37:
          if ( v6 <= (int)(DPIMETRICSForDpi[13] + ScaleSystemMetricForDPIWithoutCache(46LL, a2) + DPIMETRICSForDpi[15]) )
            v6 = v10[13] + ScaleSystemMetricForDPIWithoutCache(46LL, a2) + v10[15];
          break;
        default:
          if ( (unsigned int)(v2 - 71) <= 1 )
            v6 = DPIMETRICSForDpi[15] + DPIMETRICSForDpi[13] - 1;
          break;
      }
      return (unsigned int)v6;
    }
  }
  if ( (int)v2 > 38 )
  {
    v20 = v2 - 39;
    if ( !v20 )
    {
      v19 = 12;
      goto LABEL_77;
    }
    v21 = v20 - 10;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 2;
            if ( v25 )
            {
              v26 = v25 - 4;
              if ( v26 )
              {
                if ( v26 == 34 )
                {
                  v27 = 100;
                  if ( v6 < 100 )
                    v27 = v6;
                  if ( v27 <= 0 )
                  {
                    return 0;
                  }
                  else if ( v6 >= 100 )
                  {
                    return 100;
                  }
                }
                return (unsigned int)v6;
              }
              v28 = ScaleSystemMetricForDPIWithoutCache(8LL, a2);
              v13 = 31LL;
              v12 = 2 * v28;
              return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
            }
          }
          goto LABEL_66;
        }
        v11 = 53LL;
LABEL_38:
        v12 = ScaleSystemMetricForDPIWithoutCache(v11, a2);
        v13 = 6LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
      }
      v29 = ScaleSystemMetricForDPIWithoutCache(46LL, a2);
      v30 = 12;
      v31 = ScaleSystemMetricForDPIWithoutCache(31LL, a2) - v29;
      v32 = ScaleSystemMetricForDPIWithoutCache(12LL, a2);
      v33 = a2;
      if ( v31 < v32 / 2 )
      {
        v34 = ScaleSystemMetricForDPIWithoutCache(46LL, a2);
        v35 = 31LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, a2) - v34);
      }
    }
    else
    {
      v37 = ScaleSystemMetricForDPIWithoutCache(45LL, a2);
      v30 = 11;
      v38 = ScaleSystemMetricForDPIWithoutCache(30LL, a2) - v37;
      v39 = ScaleSystemMetricForDPIWithoutCache(11LL, a2);
      v33 = a2;
      if ( v38 < v39 / 2 )
      {
        v34 = ScaleSystemMetricForDPIWithoutCache(45LL, a2);
        v35 = 30LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, a2) - v34);
      }
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v30, v33) / 2);
  }
  if ( (_DWORD)v2 == 38 )
  {
    v19 = 11;
LABEL_77:
    if ( v6 > (int)ScaleSystemMetricForDPIWithoutCache(v19, a2) )
      return (unsigned int)v6;
    return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v19, a2);
  }
  if ( (int)v2 > 15 )
  {
    if ( (int)v2 < 20 )
      return (unsigned int)v6;
    if ( (int)v2 <= 21 )
    {
LABEL_47:
      if ( v6 <= (int)(4 * ScaleSystemMetricForDPIWithoutCache(46LL, a2)) )
      {
        v18 = 46LL;
        return (unsigned int)(4 * ScaleSystemMetricForDPIWithoutCache(v18, a2));
      }
      return (unsigned int)v6;
    }
    if ( (_DWORD)v2 != 30 )
    {
      if ( (_DWORD)v2 == 32 )
      {
        v16 = EngMulDiv(*(_DWORD *)(gpsi + 5520LL), a2, 96) + 1;
        v17 = ScaleSystemMetricForDPIWithoutCache(5LL, a2);
        v13 = 45LL;
        v12 = v16 * v17;
      }
      else
      {
        if ( (_DWORD)v2 != 33 )
          return (unsigned int)v6;
        v14 = EngMulDiv(*(_DWORD *)(gpsi + 5520LL), a2, 96) + 1;
        v15 = ScaleSystemMetricForDPIWithoutCache(6LL, a2);
        v13 = 46LL;
        v12 = v14 * v15;
      }
      return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, a2) + v12);
    }
    goto LABEL_66;
  }
  if ( (_DWORD)v2 == 15 )
  {
    v11 = 55LL;
    goto LABEL_38;
  }
  if ( (int)v2 < 2 )
    return (unsigned int)v6;
  if ( (int)v2 > 3 )
  {
    if ( (_DWORD)v2 != 4 )
    {
      if ( (int)v2 <= 8 )
        return (unsigned int)v6;
      if ( (int)v2 > 10 )
      {
        if ( (unsigned int)(v2 - 13) <= 1 )
        {
          if ( (unsigned __int16)a2 >= 0x90u )
          {
            if ( (unsigned __int16)a2 >= 0xC0u )
            {
              if ( (unsigned __int16)a2 >= 0x120u )
                return (unsigned int)((unsigned __int16)a2 < 0x180u ? 96 : 128);
              else
                return 64;
            }
            else
            {
              return 48;
            }
          }
          else
          {
            return 32;
          }
        }
        return (unsigned int)v6;
      }
      goto LABEL_47;
    }
    v11 = 31LL;
    goto LABEL_38;
  }
LABEL_66:
  if ( v6 <= (int)(4 * ScaleSystemMetricForDPIWithoutCache(45LL, a2)) )
  {
    v18 = 45LL;
    return (unsigned int)(4 * ScaleSystemMetricForDPIWithoutCache(v18, a2));
  }
  return (unsigned int)v6;
}
