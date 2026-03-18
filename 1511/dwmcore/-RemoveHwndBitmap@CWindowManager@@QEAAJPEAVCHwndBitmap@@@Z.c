/*
 * XREFs of ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010498C
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18000F674 (--1CHwndBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18000F778 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800AB338 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800AB380 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  struct CWindowAssociationMapEntry *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 55), &v11);
  if ( Entry >= 0 )
  {
    v5 = v11;
    CPtrArrayBase::Remove((struct CWindowAssociationMapEntry *)((char *)v11 + 24), (__int64)a2);
    v6 = CHwndBitmap::SetVisual(a2, 0LL);
    Entry = v6;
    if ( v6 >= 0 )
    {
      if ( !*((_QWORD *)v5 + 1) && !*((_QWORD *)v5 + 2) )
      {
        v7 = *((_QWORD *)v5 + 3);
        if ( (v7 & 2) != 0 )
          v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v8 = *((_QWORD *)v5 + 3) & 1LL;
        if ( !v8 )
        {
          v9 = CWindowManager::RemoveEntry(this, *((_QWORD *)a2 + 55));
          Entry = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x147u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13Eu);
    }
  }
  return (unsigned int)Entry;
}
