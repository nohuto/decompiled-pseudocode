/*
 * XREFs of ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18011F8BC
 * Callers:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180072D1C (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8B18 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180137900 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::SetTargetOcclusion(
        CIndirectSwapchainRenderTarget *this,
        struct CRenderTarget *a2,
        char a3)
{
  unsigned int v3; // ebx
  char *v5; // r10
  unsigned int v6; // ecx
  struct CRenderTarget **v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  struct CRenderTarget *v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v13 = a2;
  if ( !a3 )
  {
    DynArray<CBaseExpression *,1>::Remove((char *)this + 432, &v13);
    return v3;
  }
  v5 = (char *)this + 432;
  v6 = 0;
  v7 = *(struct CRenderTarget ***)v5;
  if ( !*((_DWORD *)v5 + 6) )
  {
LABEL_5:
    v8 = *((_DWORD *)v5 + 6);
    v9 = v8 + 1;
    if ( v8 + 1 >= v8 )
    {
      if ( v9 <= *((_DWORD *)v5 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL * *((unsigned int *)v5 + 6)) = v13;
        *((_DWORD *)v5 + 6) = v9;
LABEL_12:
        *((_BYTE *)this + 512) |= 2u;
        v11 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x123u);
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8u, 1, &v13);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x121u);
      return v3;
    }
    goto LABEL_12;
  }
  while ( a2 != *v7 )
  {
    ++v6;
    ++v7;
    if ( v6 >= *((_DWORD *)v5 + 6) )
      goto LABEL_5;
  }
  return v3;
}
