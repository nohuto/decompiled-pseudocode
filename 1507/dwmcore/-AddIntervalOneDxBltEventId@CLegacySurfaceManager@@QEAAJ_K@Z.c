/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800EFBE4
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180062648 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
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
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x300u);
      return v2;
    }
    if ( v6 > *((_DWORD *)this + 67) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8u, 1, &v10);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
      v2 = v7;
      if ( v7 < 0 )
        goto LABEL_12;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) = v10;
      *((_DWORD *)this + 68) = v6;
    }
  }
  return v2;
}
