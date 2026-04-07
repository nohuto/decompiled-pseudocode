/*
 * XREFs of ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180003274
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800067FC (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall GetAnimationDuration(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 Theme; // r12
  int ThemeAnimationProperty; // esi
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v11; // r15
  _BYTE v13[88]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+20h] BYREF

  *a3 = 0;
  v3 = a1;
  v5 = a2;
  Theme = CDesktopManager::GetTheme(3LL);
  if ( Theme )
  {
    v17 = 0;
    ThemeAnimationProperty = GetThemeAnimationProperty(Theme, v3, v6, 1LL, &v17, 4, v13);
    if ( ThemeAnimationProperty >= 0 )
    {
      v9 = 0;
      v10 = 0;
      if ( v17 )
      {
        while ( ThemeAnimationProperty >= 0 )
        {
          v16 = 0;
          ThemeAnimationProperty = GetThemeAnimationTransform(Theme, v3, v5, v10, 0LL, 0, &v16);
          if ( ThemeAnimationProperty == -2147024662 )
          {
            v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v16);
            if ( v11 )
            {
              ThemeAnimationProperty = GetThemeAnimationTransform(Theme, a1, a2, v10, v11, v16, &v16);
              if ( ThemeAnimationProperty >= 0 )
              {
                if ( v10 )
                {
                  if ( v9 <= *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12) )
                    v9 = *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12);
                }
                else
                {
                  v9 = *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 12);
                }
              }
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v11);
            }
            else
            {
              ThemeAnimationProperty = -2147024882;
            }
            v3 = a1;
            v5 = a2;
          }
          if ( ++v10 >= v17 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        if ( ThemeAnimationProperty >= 0 )
          *a3 = v9;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)ThemeAnimationProperty;
}
