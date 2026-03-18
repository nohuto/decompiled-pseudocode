/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800A5D00
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v3; // r8
  unsigned int i; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
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
  if ( i != *((_DWORD *)this + 68) )
    return v2;
  v6 = *((_DWORD *)this + 68);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v2 = -2147024362;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x300u);
    return v2;
  }
  if ( v7 <= *((_DWORD *)this + 67) )
  {
    *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) = v10;
    *((_DWORD *)this + 68) = v7;
    return v2;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8, 1, &v10);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  v2 = v8;
  if ( v8 < 0 )
    goto LABEL_10;
  return v2;
}
