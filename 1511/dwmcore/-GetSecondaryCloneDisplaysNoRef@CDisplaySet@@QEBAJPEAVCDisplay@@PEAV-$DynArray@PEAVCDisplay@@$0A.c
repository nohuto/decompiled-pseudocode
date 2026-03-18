/*
 * XREFs of ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18006F9C4
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetSecondaryCloneDisplaysNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 300) )
    return v3;
  v7 = *(_DWORD *)(a1 + 72) - 1;
  v8 = v7;
  if ( v7 < 0 )
    return v3;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v8);
    v15 = v9;
    if ( v9 == a2 || *(_QWORD *)(v9 + 136) != a2 )
      goto LABEL_4;
    v11 = *(_DWORD *)(a3 + 24);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
      break;
    v3 = 0;
    if ( v12 > *(_DWORD *)(a3 + 20) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8LL, 1LL, &v15);
      v14 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      v3 = v14;
      if ( v14 < 0 )
        goto LABEL_15;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * v11) = v15;
      *(_DWORD *)(a3 + 24) = v12;
    }
LABEL_4:
    if ( --v8 < 0 )
      return v3;
  }
  v14 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_15:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x415u);
  return v3;
}
