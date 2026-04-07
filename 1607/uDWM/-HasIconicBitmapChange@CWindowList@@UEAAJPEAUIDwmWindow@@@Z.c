/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC40
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001B620 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800338D8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033B04 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180078EFC (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180082CB0 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // r15d
  char v6; // r14
  CWindowIconic **v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-10h]
  CWindowData *v19; // [rsp+70h] [rbp+40h] BYREF
  CWindowData **v20; // [rsp+78h] [rbp+48h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v19);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x1187u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
    if ( v19 && (*((int *)v19 + 28) < 8 || *((int *)v19 + 28) > 11) && !CWindowData::IsShellManaged(v19) )
    {
      if ( (*((_BYTE *)v19 + 578) & 1) == 0 && v6 )
      {
        v11 = (_QWORD *)((char *)this + 472);
        v12 = *((_DWORD *)this + 124);
        v13 = v12 + 1;
        if ( v12 + 1 >= v12 )
        {
          if ( v13 > *((_DWORD *)this + 123) )
          {
            v20 = &v19;
            v14 = DynArrayImpl<0>::Grow((__int64)this + 472, 8u, 1, 0, (unsigned __int64 *)&v20);
            if ( v14 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
            else
              *(_QWORD *)(*v11 + (unsigned int)(8 * (*((_DWORD *)this + 124))++)) = *v20;
          }
          else
          {
            *(_QWORD *)(*v11 + 8LL * *((unsigned int *)this + 124)) = v19;
            *((_DWORD *)this + 124) = v13;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
      }
      else if ( (*((_BYTE *)v19 + 578) & 1) != 0 && !v6 )
      {
        DynArray<CWindowData *,0>::Remove((char *)this + 472, &v19);
      }
      *((_BYTE *)v19 + 578) ^= (v6 ^ *((_BYTE *)v19 + 578)) & 1;
      v7 = (CWindowIconic **)v19;
      v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
      if ( *((_QWORD *)v19 + 52) )
      {
        *((_BYTE *)v19 + 578) &= 0xF5u;
        CWindowData::SetIconicBitmap((CWindowData *)v7, 0LL);
        v15 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)v7, 0);
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x33Bu);
        CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)v7);
        v16 = CWindowIconic::OnRepresentationTypeUpdated(v7[52]);
        if ( v16 < 0 )
        {
          v18 = 829;
LABEL_33:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v18);
          goto LABEL_10;
        }
      }
      v9 = *(_QWORD *)(v8 + 96);
      if ( v9 && *(CWindowIconic ***)(v9 + 72) == v7 )
      {
        *(_WORD *)(v8 + 89) = 0;
        *(_BYTE *)(v8 + 88) = 0;
        v17 = CIconicBitmapRegistry::RequestBitmap(
                (CIconicBitmapRegistry *)v8,
                (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL,
                0);
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x345u);
        CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
        v16 = CWindowIconic::OnRepresentationTypeUpdated(*(CWindowIconic **)(v8 + 96));
        if ( v16 < 0 )
        {
          v18 = 839;
          goto LABEL_33;
        }
      }
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
