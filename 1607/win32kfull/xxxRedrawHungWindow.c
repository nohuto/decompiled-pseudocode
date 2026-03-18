/*
 * XREFs of xxxRedrawHungWindow @ 0x1C00D52D8
 * Callers:
 *     xxxHungAppDemon @ 0x1C0059550 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C005B290 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C0100C4C (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C0290508 (GreWatchVisRgnChange.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 EmptyRgn; // rax
  unsigned __int64 v5; // rsi
  HDC DCEx; // rax
  HDC v7; // rbx
  __int16 v8; // r8
  int v9; // eax
  __int64 i; // r14
  int v11; // ebx
  __int64 v12; // r8
  HDC v13; // rsi
  __int64 DesktopWindow; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  RECT v17; // xmm0
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  unsigned __int64 v21; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  HRGN v27; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v29[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v30[3]; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v31[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v32; // [rsp+70h] [rbp+17h] BYREF

  if ( *((_QWORD *)a1 + 20) && (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( !a2 || IsHungWindow((__int64)a1) )
    {
      ProcessHungWindow(a1);
      return;
    }
    if ( !GetStyleWindow((__int64)a1, 2568) )
    {
      if ( *((_QWORD *)a1 + 20) <= 1uLL )
      {
        v32 = (RECT)*((_OWORD *)a1 + 7);
        v5 = GreCreateRectRgnIndirect(&v32);
        if ( !v5 )
          v5 = 1LL;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn();
        v5 = EmptyRgn;
        if ( !EmptyRgn )
        {
          v5 = 1LL;
          goto LABEL_11;
        }
        if ( !(unsigned int)GreCombineRgn(EmptyRgn, *((_QWORD *)a1 + 20), 0LL, 5LL) )
        {
          GreDeleteObject(v5);
          v5 = 1LL;
        }
      }
      if ( v5 != 1 && (unsigned int)GreCombineRgn(v5, v5, a2, 1LL) == 1 )
      {
        GreDeleteObject(v5);
        return;
      }
LABEL_11:
      v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v29;
      ++*((_DWORD *)a1 + 2);
      v29[1] = a1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, v5, 328833LL);
        v7 = DCEx;
        v8 = (*((_BYTE *)a1 + 40) & 0x40) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == gpqForeground;
        xxxDrawWindowFrame((__int64)a1, DCEx, v8 | 0x2000);
        _ReleaseDC(v7);
      }
      xxxInternalInvalidate(a1, (HRGN)v5, 0x485u);
      v32 = (RECT)*((_OWORD *)a1 + 7);
      xxxCalcClientRect((__int64)a1, (__int128 *)&v32.left, 1);
      SetRectRgnIndirect(ghrgnInv2, &v32);
      if ( v5 > 1 )
      {
        v9 = GreCombineRgn(v5, v5, ghrgnInv2, 1LL);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            GreDeleteObject(v5);
            v5 = 0LL;
LABEL_43:
            v12 = 131LL;
            if ( (*((_BYTE *)a1 + 55) & 4) != 0 )
              v12 = 147LL;
            if ( (*((_BYTE *)a1 + 55) & 2) != 0 )
              v12 = (unsigned int)v12 | 8;
            v13 = (HDC)_GetDCEx(a1, v5, v12);
            GreWatchVisRgnChange(v13);
            if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 176LL) )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v30;
              v30[1] = DesktopWindow;
              if ( DesktopWindow )
                ++*(_DWORD *)(DesktopWindow + 8);
              xxxInternalPaintDesktop(DesktopWindow, v13, 1LL);
              ThreadUnlock1(v16, v15);
            }
            else
            {
              v18 = *((_DWORD *)a1 + 29);
              v19 = -*((_DWORD *)a1 + 28);
              v32 = (RECT)*((_OWORD *)a1 + 7);
              v17 = v32;
              v32.right += v19;
              v20 = -v18;
              v32.bottom += v20;
              v32.top += v20;
              v32.left = v19 + _mm_cvtsi128_si32((__m128i)v17);
              v21 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 128LL);
              if ( v21 )
              {
                if ( v21 <= 0x1F )
                  v21 = *(_QWORD *)(gpsi + 8 * v21 + 5080);
              }
              else if ( (*((_BYTE *)a1 + 42) & 1) != 0 && (*((_BYTE *)a1 + 45) & 2) != 0 )
              {
                v21 = *(_QWORD *)(gpsi + 5208LL);
              }
              else
              {
                v21 = *(_QWORD *)(gpsi + 5128LL);
              }
              ObjectOwner = GreGetObjectOwner(v21, 16LL);
              if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
              {
                v24 = (HBRUSH)v21;
              }
              else
              {
                BrushColor = GreGetBrushColor(v21);
                if ( BrushColor == -1 )
                  BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 5128LL));
                GreSetSolidBrush(ghbrHungApp, BrushColor);
                v24 = (HBRUSH)ghbrHungApp;
              }
              FillRect(v13, &v32, v24);
            }
            GreWatchVisRgnChange(v13);
            _ReleaseDC(v13);
            SetOrClrWF(1, a1, 0x108u, 1);
            SetOrClrWF(1, a1, 0x102u, 1);
            SetOrClrWF(1, a1, 0x120u, 1);
            ThreadUnlock1(v26, v25);
            return;
          }
        }
        else
        {
          GreDeleteObject(v5);
          v5 = 1LL;
        }
      }
      if ( v5 && (*((_BYTE *)a1 + 55) & 2) == 0 )
      {
        if ( v5 == 1 )
          v32 = (RECT)*((_OWORD *)a1 + 7);
        else
          GreGetRgnBox(v5, &v32);
        for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
        {
          if ( (*(_BYTE *)(i + 55) & 0x10) != 0 && ((*(_BYTE *)(i + 44) & 4) != 0 || !*(_QWORD *)(i + 160)) )
          {
            if ( (unsigned int)IntersectRect(v31, &v32.left, (int *)(i + 112)) )
            {
              v27 = (HRGN)v5;
              v11 = PhysicalToLogicalInPlaceRgn(i, &v27);
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
              xxxInternalInvalidate((struct tagWND *)i, v27, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
              if ( v11 )
                GreDeleteObject(v27);
            }
          }
        }
      }
      goto LABEL_43;
    }
  }
}
