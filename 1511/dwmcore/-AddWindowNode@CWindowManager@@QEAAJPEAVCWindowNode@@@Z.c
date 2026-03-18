/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AB50C
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180063284 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000F778 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800AB338 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z @ 0x1800AB408 (-AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AB6E8 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  int Entry; // edi
  struct CWindowAssociationMapEntry *v5; // rax
  struct CWindowAssociationMapEntry *v6; // rbx
  int v7; // eax
  struct CWindowAssociationMapEntry *v9; // rbp
  unsigned __int64 i; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  CHwndBitmap *v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  struct CWindowAssociationMapEntry *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 103), &v16);
  if ( Entry >= 0 )
  {
    v9 = v16;
    for ( i = 0LL; ; ++i )
    {
      v11 = *((_QWORD *)v9 + 3);
      v12 = (v11 & 2) != 0 ? *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)v9 + 3) & 1LL;
      if ( i >= v12 )
        break;
      v13 = (CHwndBitmap *)CPtrArrayBase::operator[]((__int64 *)v9 + 3, i);
      v14 = CHwndBitmap::SetVisual(v13, a2);
      Entry = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB3u);
        return (unsigned int)Entry;
      }
    }
    *((_QWORD *)v9 + 1) = a2;
  }
  else
  {
    v5 = (struct CWindowAssociationMapEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                WPF::g_pProcessHeap,
                                                32LL);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 3) = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      *(_QWORD *)v6 = *((_QWORD *)a2 + 103);
      *((_QWORD *)v6 + 1) = a2;
      v7 = CWindowManager::AddEntry(this, v6);
      Entry = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
        CWindowAssociationMapEntry::`scalar deleting destructor'(v6, v15);
      }
    }
    else
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBBu);
    }
  }
  return (unsigned int)Entry;
}
