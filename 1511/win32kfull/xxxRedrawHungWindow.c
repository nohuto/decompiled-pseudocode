/*
 * XREFs of xxxRedrawHungWindow @ 0x1C014D7BC
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C008C230 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C020B348 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0053484 (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     xxxInternalPaintDesktop @ 0x1C010C4A4 (xxxInternalPaintDesktop.c)
 *     ProcessHungWindow @ 0x1C014260C (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C0291584 (GreWatchVisRgnChange.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 EmptyRgn; // rax
  unsigned __int64 v7; // rsi
  HDC DCEx; // rax
  HDC v9; // rbx
  __int16 v10; // r8
  int v11; // eax
  __int64 i; // r14
  int v13; // ebx
  __int64 v14; // r8
  HDC v15; // rsi
  __int64 DesktopWindow; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  RECT v19; // xmm0
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  unsigned __int64 v23; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  HRGN v29; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v30[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v31[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v33[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v34; // [rsp+70h] [rbp+17h] BYREF

  if ( *((_QWORD *)a1 + 20) && (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( !a2 || IsHungWindow((__int64)a1) )
    {
      ProcessHungWindow((__int64)a1);
      return;
    }
    if ( !GetStyleWindow((__int64)a1, 2568) )
    {
      if ( *((_QWORD *)a1 + 20) <= 1uLL )
      {
        v34 = (RECT)*((_OWORD *)a1 + 7);
        v7 = GreCreateRectRgnIndirect(&v34);
        if ( !v7 )
          v7 = 1LL;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn(v5, v4);
        v7 = EmptyRgn;
        if ( !EmptyRgn )
        {
          v7 = 1LL;
          goto LABEL_10;
        }
        if ( !(unsigned int)GreCombineRgn(EmptyRgn, *((_QWORD *)a1 + 20), 0LL, 5LL) )
        {
          GreDeleteObject(v7);
          v7 = 1LL;
        }
      }
      if ( v7 != 1 && (unsigned int)GreCombineRgn(v7, v7, a2, 1LL) == 1 )
      {
        GreDeleteObject(v7);
        return;
      }
LABEL_10:
      v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v32;
      ++*((_DWORD *)a1 + 2);
      v32[1] = a1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, v7, 328833LL);
        v9 = DCEx;
        v10 = (*((_BYTE *)a1 + 40) & 0x40) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == gpqForeground;
        xxxDrawWindowFrame((__int64)a1, DCEx, v10 | 0x2000);
        _ReleaseDC(v9);
      }
      xxxInternalInvalidate(a1, (HRGN)v7, 0x485u);
      v34 = (RECT)*((_OWORD *)a1 + 7);
      xxxCalcClientRect((__int64)a1, (__int128 *)&v34.left, 1);
      SetRectRgnIndirect(ghrgnInv2, &v34);
      if ( v7 > 1 )
      {
        v11 = GreCombineRgn(v7, v7, ghrgnInv2, 1LL);
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            GreDeleteObject(v7);
            v7 = 0LL;
LABEL_42:
            v14 = 131LL;
            if ( (*((_BYTE *)a1 + 55) & 4) != 0 )
              v14 = 147LL;
            if ( (*((_BYTE *)a1 + 55) & 2) != 0 )
              v14 = (unsigned int)v14 | 8;
            v15 = (HDC)_GetDCEx(a1, v7, v14);
            GreWatchVisRgnChange(v15);
            if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 176LL) )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v31;
              v31[1] = DesktopWindow;
              if ( DesktopWindow )
                ++*(_DWORD *)(DesktopWindow + 8);
              xxxInternalPaintDesktop(DesktopWindow, v15, 1);
              ThreadUnlock1(v18, v17);
            }
            else
            {
              v20 = *((_DWORD *)a1 + 29);
              v21 = -*((_DWORD *)a1 + 28);
              v34 = (RECT)*((_OWORD *)a1 + 7);
              v19 = v34;
              v34.right += v21;
              v22 = -v20;
              v34.bottom += v22;
              v34.top += v22;
              v34.left = v21 + _mm_cvtsi128_si32((__m128i)v19);
              v23 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 128LL);
              if ( v23 )
              {
                if ( v23 <= 0x1F )
                  v23 = *(_QWORD *)(gpsi + 8 * v23 + 3688);
              }
              else if ( (*((_BYTE *)a1 + 42) & 1) != 0 && (*((_BYTE *)a1 + 45) & 2) != 0 )
              {
                v23 = *(_QWORD *)(gpsi + 3816LL);
              }
              else
              {
                v23 = *(_QWORD *)(gpsi + 3736LL);
              }
              ObjectOwner = GreGetObjectOwner(v23, 16LL);
              if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
              {
                v26 = (HBRUSH)v23;
              }
              else
              {
                BrushColor = GreGetBrushColor(v23);
                if ( BrushColor == -1 )
                  BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 3736LL));
                GreSetSolidBrush(ghbrHungApp, BrushColor);
                v26 = (HBRUSH)ghbrHungApp;
              }
              FillRect(v15, &v34, v26);
            }
            GreWatchVisRgnChange(v15);
            _ReleaseDC(v15);
            SetOrClrWF(1, a1, 0x108u, 1);
            SetOrClrWF(1, a1, 0x102u, 1);
            SetOrClrWF(1, a1, 0x120u, 1);
            ThreadUnlock1(v28, v27);
            return;
          }
        }
        else
        {
          GreDeleteObject(v7);
          v7 = 1LL;
        }
      }
      if ( v7 && (*((_BYTE *)a1 + 55) & 2) == 0 )
      {
        if ( v7 == 1 )
          v34 = (RECT)*((_OWORD *)a1 + 7);
        else
          GreGetRgnBox(v7, &v34);
        for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
        {
          if ( (*(_BYTE *)(i + 55) & 0x10) != 0 && ((*(_BYTE *)(i + 44) & 4) != 0 || !*(_QWORD *)(i + 160)) )
          {
            if ( (unsigned int)IntersectRect(v33, &v34.left, (int *)(i + 112)) )
            {
              v29 = (HRGN)v7;
              v13 = PhysicalToLogicalInPlaceRgn(i, &v29);
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
              xxxInternalInvalidate((struct tagWND *)i, v29, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
              if ( v13 )
                GreDeleteObject(v29);
            }
          }
        }
      }
      goto LABEL_42;
    }
  }
}
