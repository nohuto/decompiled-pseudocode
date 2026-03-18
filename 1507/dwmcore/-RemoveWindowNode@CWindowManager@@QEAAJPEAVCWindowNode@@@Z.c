/*
 * XREFs of ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18005C824
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18007CB00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180011E04 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18005C734 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  __int64 v2; // rbp
  unsigned int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned __int64 i; // rdi
  unsigned __int64 v12; // rax
  CHwndBitmap *v13; // rax
  int v14; // eax
  struct CWindowAssociationMapEntry *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 109);
  v15 = 0LL;
  Entry = CWindowManager::FindEntry(this, v2, &v15);
  if ( (Entry & 0x80000000) != 0 )
    return Entry;
  v5 = v15;
  v6 = (__int64 *)((char *)v15 + 24);
  v7 = *((_QWORD *)v15 + 3);
  if ( (v7 & 2) != 0 )
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v8 = *((_QWORD *)v15 + 3) & 1LL;
  if ( v8 )
  {
    for ( i = 0LL; ; ++i )
    {
      v12 = (*v6 & 2) != 0 ? *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL) : *v6 & 1;
      if ( i >= v12 )
        break;
      v13 = (CHwndBitmap *)CPtrArrayBase::operator[](v6, i);
      v14 = CHwndBitmap::SetVisual(v13, 0LL);
      Entry = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE8u);
        return Entry;
      }
    }
    goto LABEL_8;
  }
  if ( *((_QWORD *)v15 + 2) )
  {
LABEL_8:
    *((_QWORD *)v5 + 1) = 0LL;
    return Entry;
  }
  v9 = CWindowManager::RemoveEntry(this, v2);
  Entry = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF3u);
  return Entry;
}
