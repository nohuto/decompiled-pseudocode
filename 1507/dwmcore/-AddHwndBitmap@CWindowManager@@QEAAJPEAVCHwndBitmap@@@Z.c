/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E871C
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18010AFC0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180011E04 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C7BC (-AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18005CA38 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  struct CWindowAssociationMapEntry *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  unsigned int v17; // [rsp+20h] [rbp-18h]
  struct CWindowAssociationMapEntry *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, *((_QWORD *)a2 + 55), &v18) < 0 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     32LL);
    v10 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[3] = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      *v10 = *((_QWORD *)a2 + 55);
      v11 = v10[3];
      if ( (v11 & 2) != 0 )
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v12 = v10[3] & 1LL;
      v13 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v10 + 3), (__int64)a2, v12);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v14 = CHwndBitmap::SetVisual(a2, 0LL);
        v8 = v14;
        if ( v14 >= 0 )
        {
          v14 = CWindowManager::AddEntry(this, (struct CWindowAssociationMapEntry *)v10);
          v8 = v14;
          if ( v14 >= 0 )
            return v8;
          v17 = 285;
        }
        else
        {
          v17 = 283;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v17);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11Au);
      }
      CWindowAssociationMapEntry::`scalar deleting destructor'((CWindowAssociationMapEntry *)v10);
      return v8;
    }
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x117u);
  }
  else
  {
    v4 = v18;
    v5 = *((_QWORD *)v18 + 3);
    if ( (v5 & 2) != 0 )
      v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v6 = *((_QWORD *)v18 + 3) & 1LL;
    v7 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v18 + 24), (__int64)a2, v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 273;
LABEL_7:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v16);
      return v8;
    }
    v7 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v4 + 1));
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 274;
      goto LABEL_7;
    }
  }
  return v8;
}
