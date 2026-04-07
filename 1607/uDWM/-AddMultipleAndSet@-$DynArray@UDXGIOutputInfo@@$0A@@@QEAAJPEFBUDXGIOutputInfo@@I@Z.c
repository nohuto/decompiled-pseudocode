/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x18003E984
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18003E674 (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *(_DWORD *)(a1 + 20) )
    {
      v8 = 272 * v2;
      v9 = 2LL;
      v10 = (_OWORD *)(*(_QWORD *)a1 + v8);
      do
      {
        *v10 = *a2;
        v10[1] = a2[1];
        v10[2] = a2[2];
        v10[3] = a2[3];
        v10[4] = a2[4];
        v10[5] = a2[5];
        v10[6] = a2[6];
        v10 += 8;
        v11 = a2[7];
        a2 += 8;
        *(v10 - 1) = v11;
        --v9;
      }
      while ( v9 );
      *v10 = *a2;
      *(_DWORD *)(a1 + 24) = v4;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x110u, 1, a2);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
  }
  return v5;
}
