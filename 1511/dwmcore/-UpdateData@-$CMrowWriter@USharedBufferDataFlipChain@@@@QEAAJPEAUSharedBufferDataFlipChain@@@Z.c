/*
 * XREFs of ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800AE7F0
 * Callers:
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AE480 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800AE614 (-Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMrowWriter<SharedBufferDataFlipChain>::UpdateData(
        __int64 a1,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int16 v5; // cx
  int v6; // eax
  signed __int32 v8; // [rsp+60h] [rbp+30h]
  signed __int32 v9; // [rsp+60h] [rbp+30h]
  signed __int32 v10; // [rsp+70h] [rbp+40h]
  signed __int32 v11; // [rsp+70h] [rbp+40h]
  signed __int32 v12; // [rsp+78h] [rbp+48h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v8 = *(_DWORD *)(v2 + 24);
    LOWORD(v10) = v8;
    HIWORD(v10) = -1;
    if ( HIWORD(v8) != 0xFFFF )
    {
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v10, v8);
      v5 = *(_WORD *)(v2 + 24);
      if ( v12 == v8 )
      {
        if ( v5 != (_WORD)v8 )
          AssertW(
            0LL,
            L"pData->m_Indices.Read == indicesOriginal.Read",
            L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
            L"windows\\dwm\\common\\shared\\mrow.h",
            0x1C0u);
      }
      else if ( v5 != HIWORD(v8) )
      {
        AssertW(
          0LL,
          L"pData->m_Indices.Read == indicesOriginal.Pending",
          L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
          L"windows\\dwm\\common\\shared\\mrow.h",
          0x1C5u);
      }
    }
    if ( *(_WORD *)(v2 + 26) != 0xFFFF )
      AssertW(
        0LL,
        L"pData->m_Indices.Pending == NoData",
        L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
        L"windows\\dwm\\common\\shared\\mrow.h",
        0x1C9u);
    v9 = *(_DWORD *)(v2 + 24);
    LOWORD(v11) = v9;
    v6 = SharedBufferDataFlipChain::Copy((SharedBufferDataFlipChain *)(v2 + 96LL * ((_WORD)v9 == 0) + 32), a2);
    v4 = v6;
    if ( v6 >= 0 )
    {
      HIWORD(v11) = (_WORD)v9 == 0;
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v11, v9);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1D4u);
    }
  }
  else
  {
    v4 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x1AAu);
  }
  return v4;
}
