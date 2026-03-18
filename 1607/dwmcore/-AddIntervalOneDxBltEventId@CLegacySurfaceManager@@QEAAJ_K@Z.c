/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800377F4
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  int v2; // ebx
  _QWORD *v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v8; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 31);
  for ( i = 0; i < *((_DWORD *)this + 68); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i == *((_DWORD *)this + 68) )
  {
    v5 = *((_DWORD *)this + 68);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v6 <= *((_DWORD *)this + 67) )
      {
        *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * v5) = v9;
        *((_DWORD *)this + 68) = v6;
        return (unsigned int)v2;
      }
      v8 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 248, 8LL, 1LL, &v9);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x304u);
  }
  return (unsigned int)v2;
}
