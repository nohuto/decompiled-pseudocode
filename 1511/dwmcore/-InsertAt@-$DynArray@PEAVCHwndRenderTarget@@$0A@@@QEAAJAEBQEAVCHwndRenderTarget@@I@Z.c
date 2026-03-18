/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B2DB8
 * Callers:
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007566C (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CHwndRenderTarget *,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  _QWORD *v5; // r8
  unsigned int v6; // edx
  _QWORD *v7; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (_QWORD *)a2;
  v3 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1CDu);
  }
  else
  {
    ++*(_DWORD *)(a1 + 24);
    v5 = *(_QWORD **)a1;
    v6 = *(_DWORD *)(a1 + 24) - 1;
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      v9 = &v5[v6];
      do
        *v9-- = v5[--v6];
      while ( v6 );
    }
    v7 = v10;
    if ( v10 >= v5 && v10 < &v5[*(unsigned int *)(a1 + 24) - 1] )
      v7 = v10 + 1;
    *v5 = *v7;
  }
  return v4;
}
