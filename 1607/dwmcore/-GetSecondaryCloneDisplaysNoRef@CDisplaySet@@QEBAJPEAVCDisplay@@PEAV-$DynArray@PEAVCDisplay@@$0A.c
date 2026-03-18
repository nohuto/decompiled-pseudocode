/*
 * XREFs of ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x180161AE4
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDisplaySet::GetSecondaryCloneDisplaysNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v7; // eax
  __int64 i; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 300) )
  {
    v7 = *(_DWORD *)(a1 + 72) - 1;
    for ( i = v7; i >= 0; --i )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * i);
      v14 = v9;
      if ( *(_QWORD *)(v9 + 136) != a2 || v9 == a2 )
        continue;
      v10 = *(_DWORD *)(a3 + 24);
      v11 = v10 + 1;
      if ( v10 + 1 >= v10 )
      {
        v3 = 0;
        if ( v11 <= *(_DWORD *)(a3 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 24)) = v14;
          *(_DWORD *)(a3 + 24) = v11;
          continue;
        }
        v12 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x405u);
        return (unsigned int)v3;
      }
    }
  }
  return (unsigned int)v3;
}
