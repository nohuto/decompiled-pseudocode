/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18011AD74
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18010BED0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000A314 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADECC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADF9C (-AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AE270 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v15; // [rsp+20h] [rbp-18h]
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CWindowAssociationMapEntry *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, *((_QWORD *)a2 + 65), &v17) < 0 )
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
      *v10 = *((_QWORD *)a2 + 65);
      v11 = v10[3];
      if ( (v11 & 2) != 0 )
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v12 = v10[3] & 1LL;
      v13 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v10 + 3), (__int64)a2, v12);
      v8 = v13;
      if ( v13 < 0 )
      {
        v16 = 282;
      }
      else
      {
        v13 = CHwndBitmap::SetVisual(a2, 0LL);
        v8 = v13;
        if ( v13 < 0 )
        {
          v16 = 283;
        }
        else
        {
          v13 = CWindowManager::AddEntry(this, (struct CWindowAssociationMapEntry *)v10);
          v8 = v13;
          if ( v13 >= 0 )
            return v8;
          v16 = 285;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v16);
      CWindowAssociationMapEntry::`scalar deleting destructor'((CWindowAssociationMapEntry *)v10);
      return v8;
    }
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x117u);
  }
  else
  {
    v4 = v17;
    v5 = *((_QWORD *)v17 + 3);
    if ( (v5 & 2) != 0 )
      v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v6 = *((_QWORD *)v17 + 3) & 1LL;
    v7 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v17 + 24), (__int64)a2, v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      v15 = 273;
      goto LABEL_9;
    }
    v7 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v4 + 1));
    v8 = v7;
    if ( v7 < 0 )
    {
      v15 = 274;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v15);
    }
  }
  return v8;
}
