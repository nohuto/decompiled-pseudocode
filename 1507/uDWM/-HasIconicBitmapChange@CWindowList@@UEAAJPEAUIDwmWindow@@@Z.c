/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A920
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FA84 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007AA98 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebp
  char v6; // di
  CWindowIconic **v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  struct CWindowData *v18; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v18);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x141Cu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
    if ( v18 && (*((int *)v18 + 28) < 8 || *((int *)v18 + 28) > 11) && (*((_BYTE *)v18 + 557) & 2) == 0 )
    {
      if ( (*((_BYTE *)v18 + 554) & 1) == 0 && v6 )
      {
        v11 = *((_DWORD *)this + 124);
        v12 = v11 + 1;
        if ( v11 + 1 < v11 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else if ( v12 > *((_DWORD *)this + 123) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 472, 8u, 1, &v18);
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 59) + 8LL * v11) = v18;
          *((_DWORD *)this + 124) = v12;
        }
      }
      else if ( (*((_BYTE *)v18 + 554) & 1) != 0 && !v6 )
      {
        DynArray<CWindowData *,0>::Remove((__int64 *)this + 59, (__int64 *)&v18);
      }
      *((_BYTE *)v18 + 554) ^= (v6 ^ *((_BYTE *)v18 + 554)) & 1;
      v7 = (CWindowIconic **)v18;
      v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
      if ( *((_QWORD *)v18 + 49) )
      {
        *((_BYTE *)v18 + 554) &= 0xF5u;
        CWindowData::SetIconicBitmap((CWindowData *)v7, 0LL);
        v14 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)v7, 0);
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x33Bu);
        CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)v7);
        v15 = CWindowIconic::OnRepresentationTypeUpdated(v7[49]);
        if ( v15 < 0 )
        {
          v17 = 829;
LABEL_32:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, v17);
          goto LABEL_10;
        }
      }
      v9 = *(_QWORD *)(v8 + 96);
      if ( v9 && *(CWindowIconic ***)(v9 + 72) == v7 )
      {
        *(_WORD *)(v8 + 89) = 0;
        *(_BYTE *)(v8 + 88) = 0;
        v16 = CIconicBitmapRegistry::RequestBitmap(
                (CIconicBitmapRegistry *)v8,
                (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL,
                0);
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x345u);
        CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v8, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
        v15 = CWindowIconic::OnRepresentationTypeUpdated(*(CWindowIconic **)(v8 + 96));
        if ( v15 < 0 )
        {
          v17 = 839;
          goto LABEL_32;
        }
      }
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
