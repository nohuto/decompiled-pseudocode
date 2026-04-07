/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18003AE10
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180024B70 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rbx
  DWORD v7; // r15d
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  RGNDATA *v9; // rax
  RGNDATA *v10; // rdi
  unsigned __int128 v11; // xmm1
  LONG v12; // edx
  LONG *p_right; // rax
  LONG v14; // r9d
  __int64 v15; // r8
  LONG v16; // r10d
  LONG v17; // r11d
  HRGN Region; // rax
  signed int v19; // ebp
  void (__fastcall *v20)(WPF::ProcessHeapImpl *, void *); // rsi
  signed int LastError; // eax
  unsigned __int128 v23; // [rsp+30h] [rbp-38h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xC5u);
    return 2147942934LL;
  }
  else
  {
    v7 = v3 + 36;
    if ( (int)v3 + 36 < (unsigned int)v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xC6u);
      return 2147942934LL;
    }
    else
    {
      v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v8 == WPF::ProcessHeapImpl::Alloc )
        v9 = (RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
      else
        v9 = (RGNDATA *)v8(WPF::g_pProcessHeap, v7);
      v10 = v9;
      if ( v9 )
      {
        v11 = (unsigned __int128)*Src;
        if ( a2 > 1 )
        {
          v12 = HIDWORD(*(unsigned __int128 *)Src);
          p_right = &Src[1].right;
          v14 = *(_QWORD *)&Src->right;
          v15 = a2 - 1;
          v16 = HIDWORD(*(_QWORD *)&Src->left);
          v17 = (LONG)*Src;
          do
          {
            if ( *(p_right - 2) < v17 )
              v17 = *(p_right - 2);
            if ( *(p_right - 1) < v16 )
              v16 = *(p_right - 1);
            if ( *p_right > v14 )
              v14 = *p_right;
            if ( p_right[1] > v12 )
              v12 = p_right[1];
            p_right += 4;
            --v15;
          }
          while ( v15 );
          *((_QWORD *)&v23 + 1) = __PAIR64__(v12, v14);
          *(_QWORD *)&v23 = __PAIR64__(v16, v17);
          v11 = v23;
        }
        v10->rdh.dwSize = 32;
        v10->rdh.iType = 1;
        v10->rdh.nCount = a2;
        v10->rdh.nRgnSize = v3;
        v10->rdh.rcBound = (RECT)v11;
        memcpy_0(v10->Buffer, Src, (unsigned int)v3);
        SetLastError(0);
        Region = ExtCreateRegion(0LL, v7, v10);
        if ( Region )
        {
          *a3 = Region;
          v19 = 0;
        }
        else
        {
          LastError = GetLastError();
          v19 = LastError;
          if ( LastError > 0 )
            v19 = (unsigned __int16)LastError | 0x80070000;
          if ( v19 >= 0 )
            v19 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xEAu);
        }
        v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v20 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v10);
        else
          v20(WPF::g_pProcessHeap, v10);
        return (unsigned int)v19;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xCFu);
        return 2147942414LL;
      }
    }
  }
}
