/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0019F9C
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001A2A0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0019E20 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0019ED4 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C001A438 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     NtGdiDdDDIGetPresentHistoryInternal @ 0x1C001CB30 (NtGdiDdDDIGetPresentHistoryInternal.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00F4498 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C00F4A88 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r13
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rdi
  unsigned int v11; // edx
  int v12; // r14d
  unsigned int v13; // r12d
  char *v14; // r15
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  char v20; // [rsp+20h] [rbp-E0h]
  bool v21; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int v22; // [rsp+24h] [rbp-DCh]
  LONG PreviousState; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+2Ch] [rbp-D4h]
  int v25; // [rsp+30h] [rbp-D0h]
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  _BYTE *v28; // [rsp+48h] [rbp-B8h]
  unsigned int v29; // [rsp+50h] [rbp-B0h]
  void *v30; // [rsp+58h] [rbp-A8h]
  _BYTE Src[2048]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 1;
  v24 = a2;
  v3 = 640;
  v20 = 1;
  v25 = 640;
  v4 = a2;
  do
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v6 = CTokenManager::EnsureCurrentLegacyTokenBuffer(this);
    if ( v6 < 0 )
      goto LABEL_21;
    v7 = *((_QWORD *)this + 15);
    v6 = 0;
    if ( v3 > *(_DWORD *)(v7 + 2104) )
      v6 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 15));
    v30 = *(void **)(v7 + 2096);
    if ( v6 < 0 )
      goto LABEL_21;
    v26[1] = *(_DWORD *)(v7 + 2104);
    v28 = Src;
    v26[0] = v4;
    v8 = NtGdiDdDDIGetPresentHistoryInternal(v26);
    v6 = v8;
    if ( v8 == -1073741789 )
    {
      v3 = 640;
      if ( v27 > 0x280 )
        v3 = v27;
      v6 = 0;
      v25 = v3;
      goto LABEL_21;
    }
    if ( v8 )
    {
      if ( v8 != 261 )
      {
        v2 = 0;
        v20 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v2 = 0;
      v20 = 0;
    }
    v9 = 0LL;
    v10 = (unsigned int *)Src;
    v11 = 0;
    PreviousState = 0;
    v12 = 0;
    v22 = 0;
    v13 = 0;
    if ( !v29 )
      goto LABEL_18;
    v14 = (char *)v30;
    v15 = v24;
    do
    {
      if ( *v10 == 7 )
      {
        CTokenManager::ResolveCompositionHandleToken(
          this,
          (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)v10 + 2,
          v9);
        goto LABEL_15;
      }
      if ( *v10 == 2 )
      {
        if ( (v10[15] & 0x2000) != 0 && (v10[15] & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndendentFlipToken(
            this,
            *((_QWORD *)v10 + 1),
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 4),
            v15);
          goto LABEL_30;
        }
        v16 = *((_QWORD *)v10 + 1);
        v21 = 0;
        CTokenManager::CreateFlipExToken(
          this,
          v16,
          (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 4),
          &v21);
        if ( v21 )
LABEL_30:
          ++v12;
LABEL_15:
        v11 = v22;
        goto LABEL_16;
      }
      memmove(v14, v10, v10[1]);
      v19 = v10[1];
      ++PreviousState;
      v11 = v19 + v22;
      v22 += v19;
      v14 += v19;
LABEL_16:
      ++v13;
      v10 = (unsigned int *)((char *)v10 + v10[1]);
    }
    while ( v13 < v29 );
    v3 = v25;
    v2 = v20;
    LODWORD(v9) = PreviousState;
LABEL_18:
    v17 = *((_QWORD *)this + 15);
    *(_DWORD *)(*(_QWORD *)(v17 + 2088) + 16LL) += v9;
    *(_DWORD *)(*(_QWORD *)(v17 + 2088) + 2068LL) += v11;
    *(_DWORD *)(v17 + 2104) -= v11;
    *(_QWORD *)(v17 + 2096) += v11;
    if ( v29 != v12 )
    {
      PreviousState = 0;
      ZwSetEvent(*((HANDLE *)this + 4), &PreviousState);
    }
    v4 = v24;
LABEL_21:
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
  }
  while ( v6 >= 0 && v2 );
  return (unsigned int)v6;
}
