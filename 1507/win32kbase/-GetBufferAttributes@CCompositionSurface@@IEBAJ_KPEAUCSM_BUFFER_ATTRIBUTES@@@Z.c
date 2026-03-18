/*
 * XREFs of ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0048CAC
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CCompositionSurface::GetBufferAttributes(
        CCompositionSurface *this,
        unsigned __int64 a2,
        struct CSM_BUFFER_ATTRIBUTES *a3)
{
  int Buffer; // ebx
  _OWORD *v4; // r11
  struct CCompositionBuffer *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *v13; // r11
  __int128 v14; // xmm0
  __int64 v15; // rax
  struct CCompositionBuffer *v17; // [rsp+48h] [rbp+20h] BYREF

  Buffer = CCompositionSurface::FindBuffer(this, a2, &v17);
  if ( Buffer < 0 )
  {
    memset(v4, 0, 0xA8uLL);
  }
  else
  {
    v5 = v17;
    v6 = *(_OWORD *)((char *)v17 + 56);
    *v4 = *(_OWORD *)((char *)v17 + 40);
    v7 = *(_OWORD *)((char *)v5 + 72);
    v4[1] = v6;
    v8 = *(_OWORD *)((char *)v5 + 88);
    v4[2] = v7;
    v9 = *(_OWORD *)((char *)v5 + 104);
    v4[3] = v8;
    v10 = *(_OWORD *)((char *)v5 + 120);
    v4[4] = v9;
    v11 = *(_OWORD *)((char *)v5 + 136);
    v4[5] = v10;
    v12 = *(_OWORD *)((char *)v5 + 168);
    v4[6] = v11;
    v13 = v4 + 8;
    *(v13 - 1) = *(_OWORD *)((char *)v5 + 152);
    v14 = *(_OWORD *)((char *)v5 + 184);
    v15 = *((_QWORD *)v5 + 25);
    *v13 = v12;
    v13[1] = v14;
    *((_QWORD *)v13 + 4) = v15;
  }
  return (unsigned int)Buffer;
}
