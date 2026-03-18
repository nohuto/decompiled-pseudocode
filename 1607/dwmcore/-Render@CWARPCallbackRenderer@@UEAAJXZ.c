/*
 * XREFs of ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180199320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z @ 0x180177B98 (-ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Render(CWARPCallbackRenderer *this)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  CMILRefCountBase *v16; // rcx
  __int64 v17; // rcx
  CMILRefCountBase *v18; // rcx
  CD2DContext *v19; // rcx
  _QWORD v21[2]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v22; // [rsp+48h] [rbp-19h] BYREF
  int v23; // [rsp+58h] [rbp-9h] BYREF
  __int64 v24; // [rsp+60h] [rbp-1h]
  int v25; // [rsp+68h] [rbp+7h]
  int v26; // [rsp+6Ch] [rbp+Bh]
  int v27; // [rsp+70h] [rbp+Fh]
  __int64 v28; // [rsp+78h] [rbp+17h]
  __int64 v29; // [rsp+80h] [rbp+1Fh]
  __int128 v30; // [rsp+88h] [rbp+27h]
  __int64 v31; // [rsp+C8h] [rbp+67h] BYREF

  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 7, 1u);
  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 8, 1u);
      v4 = 0;
      v5 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3);
      if ( *(_QWORD *)(v5 + 80) )
      {
        v21[0] = *(_QWORD *)(v5 + 80);
        v4 = 1;
      }
      v6 = *(_QWORD *)(v5 + 128);
      if ( v6 )
      {
        v7 = v4++;
        v21[v7] = v6;
      }
      if ( v4 )
      {
        v8 = 0LL;
        v22 = 0LL;
        v9 = v21;
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 )
          {
            v31 = 0LL;
            v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 72LL))(v10, &v31);
            v2 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x51u);
LABEL_25:
              Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v31);
              goto LABEL_27;
            }
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v31 + 120LL))(
                    v31,
                    *((_QWORD *)this + 5),
                    *((unsigned int *)this + 12),
                    *((unsigned int *)this + 13),
                    (char *)&v22 + 8 * v8);
            v2 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x56u);
              goto LABEL_25;
            }
            Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v31);
          }
          v8 = (unsigned int)(v8 + 1);
          ++v9;
          if ( (unsigned int)v8 >= v4 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 3) + 576LL)
                                                                        + 64LL))(
              *(_QWORD *)(*((_QWORD *)this + 3) + 576LL),
              0LL,
              2LL,
              &v22);
            break;
          }
        }
      }
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3);
      v26 = 0;
      v25 = 0;
      v29 = 0LL;
      v27 = 3840;
      v24 = v13 + 32;
      v28 = v13 + 64;
      v23 = 26;
      v30 = 0LL;
      v27 = *(_DWORD *)(v13 + 176);
      v26 = *(_DWORD *)(v13 + 180);
      if ( *(_BYTE *)(v13 + 352) )
        v29 = v13 + 184;
      if ( (*(_BYTE *)(v13 + 176) & 0x3C) != 0 )
        *(_QWORD *)&v30 = v13 + 224;
      v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4), &v23);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x5Eu);
        break;
      }
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3);
      --*(_DWORD *)(v15 + 16);
      v16 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v3);
      if ( v16 )
      {
        CMILRefCountBase::Release(v16);
        *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) = 0LL;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 22) );
LABEL_27:
    if ( v2 < 0 )
    {
      while ( (unsigned int)v3 < *((_DWORD *)this + 22) )
      {
        v17 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3);
        --*(_DWORD *)(v17 + 16);
        v18 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v3);
        if ( v18 )
        {
          CMILRefCountBase::Release(v18);
          *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) = 0LL;
        }
        v3 = (unsigned int)(v3 + 1);
      }
    }
  }
  *((_DWORD *)this + 22) = 0;
  v19 = (CD2DContext *)*((_QWORD *)this + 3);
  *((_BYTE *)this + 56) = 0;
  CD2DContext::ReturnWARPCallbackRenderer(v19, this);
  return (unsigned int)v2;
}
