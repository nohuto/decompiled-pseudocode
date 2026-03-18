/*
 * XREFs of ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18010BED0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18011AD74 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdate(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_HWNDBITMAP *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *((_QWORD *)a3 + 1);
  if ( v3 == *((_QWORD *)this + 65) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x199u);
  }
  else
  {
    *((_QWORD *)this + 65) = v3;
    v4 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 544) = 1;
    v5 = CWindowManager::AddHwndBitmap(*(CWindowManager **)(v4 + 48), this);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x195u);
  }
  return v6;
}
