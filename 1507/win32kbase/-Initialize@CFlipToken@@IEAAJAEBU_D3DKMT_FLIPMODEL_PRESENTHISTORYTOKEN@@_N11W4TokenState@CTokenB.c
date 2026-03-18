/*
 * XREFs of ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0047AB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0048CAC (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CFlipToken::Initialize(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  unsigned int v7; // edi
  int BufferAttributes; // esi
  __int64 v9; // rbp
  __int64 v10; // r13
  bool v11; // r12
  _OWORD *v12; // rcx
  _DWORD *v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 v16; // [rsp+20h] [rbp-F8h]
  _BYTE v17[64]; // [rsp+30h] [rbp-E8h] BYREF
  int v18; // [rsp+70h] [rbp-A8h]

  *(_DWORD *)(a1 + 24) = 2;
  v7 = 0;
  BufferAttributes = CRegion::Create((struct CRegion **)(a1 + 80));
  v9 = 6LL;
  if ( BufferAttributes < 0 )
  {
    *(_DWORD *)(a1 + 24) = 6;
  }
  else
  {
    BufferAttributes = -1073741811;
    if ( ((*(_DWORD *)(a2 + 44) >> 7) & 3) != 2 )
      BufferAttributes = 0;
    if ( BufferAttributes >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      v11 = 0;
      v16 = *(_QWORD *)(a1 + 40);
      BufferAttributes = CPushLock::AcquireLockShared((CPushLock *)(v10 + 32));
      if ( BufferAttributes >= 0 )
      {
        BufferAttributes = CCompositionSurface::GetBufferAttributes(
                             (CCompositionSurface *)(v10 + 24),
                             v16,
                             (struct CSM_BUFFER_ATTRIBUTES *)v17);
        if ( BufferAttributes >= 0 )
          v11 = v18 != 0;
        CPushLock::ReleaseLock((CPushLock *)(v10 + 32));
      }
      if ( BufferAttributes >= 0 )
      {
        *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 40);
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
        *(_QWORD *)(a1 + 112) = *(_QWORD *)a2;
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 28);
        *(_BYTE *)(a1 + 104) = v11;
        if ( !IsRectEmptyInl((const struct tagRECT *)(a2 + 84)) )
        {
          *(_DWORD *)(a1 + 52) = 1;
          *(_OWORD *)(a1 + 56) = *v12;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
        }
        v13 = (_DWORD *)(a1 + 196);
        *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 788);
        *(_BYTE *)(a1 + 125) = (*(_BYTE *)(a2 + 44) & 2) != 0;
        *(_BYTE *)(a1 + 144) = (*(_BYTE *)(a2 + 44) & 8) != 0;
        *(_BYTE *)(a1 + 145) = (*(_BYTE *)(a2 + 44) & 0x10) != 0;
        *(_BYTE *)(a1 + 124) = (*(_BYTE *)(a2 + 44) & 0x20) != 0;
        *(_DWORD *)(a1 + 148) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
        *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 112);
        *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 116);
        *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 120);
        *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 124);
        *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 128);
        *(_OWORD *)(a1 + 156) = *(_OWORD *)(a2 + 724);
        *(_OWORD *)(a1 + 172) = *(_OWORD *)(a2 + 748);
        *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 740);
        *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 744);
        *(_BYTE *)(a1 + 220) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
        *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 24);
        *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 800);
        *(_DWORD *)(a1 + 252) = *(_DWORD *)(a2 + 796);
        *(_BYTE *)(a1 + 222) = a5;
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + a2 - a1 + 568);
          ++v13;
          --v9;
        }
        while ( v9 );
        if ( !*(_QWORD *)(a2 + 32) )
          *(_BYTE *)(a1 + 97) = 1;
        if ( a3 )
        {
          *(_BYTE *)(a1 + 90) = 1;
          *(_QWORD *)(a1 + 112) = 0LL;
        }
        if ( a4 )
        {
          *(_BYTE *)(a1 + 221) = 1;
          *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 64);
        }
        v14 = *(_DWORD *)(a2 + 804);
        if ( v14 )
        {
          if ( v14 > 0x10 )
          {
            BufferAttributes = -1073741811;
          }
          else
          {
            do
              CRegion::AddRect(*(CRegion **)(a1 + 80), (const struct tagRECT *)(16LL * v7++ + a2 + 808));
            while ( v7 < *(_DWORD *)(a2 + 804) );
          }
        }
      }
    }
  }
  CFlipToken::TraceStateChanged((CFlipToken *)a1);
  return (unsigned int)BufferAttributes;
}
