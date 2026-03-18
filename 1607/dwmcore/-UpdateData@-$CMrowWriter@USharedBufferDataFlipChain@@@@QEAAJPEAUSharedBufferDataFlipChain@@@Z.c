/*
 * XREFs of ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800A9470
 * Callers:
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AA678 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800AA3EC (-Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMrowWriter<SharedBufferDataFlipChain>::UpdateData(
        __int64 a1,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rbx
  __int16 v4; // cx
  int v5; // eax
  unsigned int v6; // edi
  signed __int32 v8; // [rsp+50h] [rbp+8h]
  signed __int32 v9; // [rsp+50h] [rbp+8h]
  signed __int32 v10; // [rsp+60h] [rbp+18h]
  signed __int32 v11; // [rsp+60h] [rbp+18h]
  signed __int32 v12; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v8 = *(_DWORD *)(v2 + 24);
    LOWORD(v10) = v8;
    HIWORD(v10) = -1;
    if ( HIWORD(v8) != 0xFFFF )
    {
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v10, v8);
      v4 = *(_WORD *)(v2 + 24);
      if ( v12 == v8 )
      {
        if ( v4 != (_WORD)v8 )
          AssertW(
            0LL,
            L"pData->m_Indices.Read == indicesOriginal.Read",
            L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
            L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
            0x1C0u);
      }
      else if ( v4 != HIWORD(v8) )
      {
        AssertW(
          0LL,
          L"pData->m_Indices.Read == indicesOriginal.Pending",
          L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
          L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
          0x1C5u);
      }
    }
    if ( *(_WORD *)(v2 + 26) != 0xFFFF )
      AssertW(
        0LL,
        L"pData->m_Indices.Pending == NoData",
        L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
        L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
        0x1C9u);
    v9 = *(_DWORD *)(v2 + 24);
    LOWORD(v11) = v9;
    v5 = SharedBufferDataFlipChain::Copy((SharedBufferDataFlipChain *)(v2 + 96LL * ((_WORD)v9 == 0) + 32), a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1D4u);
    }
    else
    {
      HIWORD(v11) = (_WORD)v9 == 0;
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v11, v9);
    }
  }
  else
  {
    v6 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x1AAu);
  }
  return v6;
}
