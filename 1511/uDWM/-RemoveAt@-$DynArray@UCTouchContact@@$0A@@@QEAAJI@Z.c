/*
 * XREFs of ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x180070340
 * Callers:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003F560 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTouchContact,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 112LL * (v4 + 1);
        v8 = v4++;
        v9 = 112 * v8;
        v10 = *(_OWORD *)(v7 + v6 + 16);
        *(_OWORD *)(v9 + v6) = *(_OWORD *)(v7 + v6);
        v11 = *(_OWORD *)(v7 + v6 + 32);
        *(_OWORD *)(v9 + v6 + 16) = v10;
        v12 = *(_OWORD *)(v7 + v6 + 48);
        *(_OWORD *)(v9 + v6 + 32) = v11;
        v13 = *(_OWORD *)(v7 + v6 + 64);
        *(_OWORD *)(v9 + v6 + 48) = v12;
        v14 = *(_OWORD *)(v7 + v6 + 80);
        *(_OWORD *)(v9 + v6 + 64) = v13;
        v15 = *(_OWORD *)(v7 + v6 + 96);
        *(_OWORD *)(v9 + v6 + 80) = v14;
        *(_OWORD *)(v9 + v6 + 96) = v15;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  return v3;
}
