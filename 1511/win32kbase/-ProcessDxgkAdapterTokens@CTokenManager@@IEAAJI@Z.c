/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C003D07C (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C003CBA8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C003CC5C (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C007E33C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0084594 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E2094 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // si
  unsigned int v3; // r14d
  struct CLegacyTokenBuffer **v4; // r15
  unsigned int v5; // r12d
  char *v6; // rax
  LONG v8; // ebx
  struct CLegacyTokenBuffer *v9; // rsi
  LONG v10; // eax
  int v11; // edx
  const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *v12; // rsi
  unsigned int v13; // r13d
  int v14; // r14d
  unsigned int v15; // r12d
  char *v16; // r15
  unsigned int v17; // ebx
  __int64 hPrivateData_high; // rax
  struct CLegacyTokenBuffer *v19; // rcx
  struct CLegacyTokenBuffer **v21; // rax
  struct CLegacyTokenBuffer *v22; // rcx
  struct CLegacyTokenBuffer *v23; // rdx
  unsigned __int64 hPrivateData; // rdx
  char v25; // [rsp+20h] [rbp-E0h]
  bool v26; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int v27; // [rsp+24h] [rbp-DCh]
  LONG PreviousState; // [rsp+28h] [rbp-D8h] BYREF
  int v29; // [rsp+2Ch] [rbp-D4h]
  int v30; // [rsp+30h] [rbp-D0h]
  _DWORD v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-C0h]
  _BYTE *v33; // [rsp+48h] [rbp-B8h]
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  void *v35; // [rsp+58h] [rbp-A8h]
  _BYTE Src[2048]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 1;
  v27 = a2;
  v3 = 640;
  v25 = 1;
  v29 = 640;
  v4 = (struct CLegacyTokenBuffer **)((char *)this + 120);
  v5 = a2;
  v6 = (char *)this + 64;
  while ( 2 )
  {
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v8 = 0;
    *(_QWORD *)this = KeGetCurrentThread();
    if ( *v4 )
      goto LABEL_3;
    v21 = (struct CLegacyTokenBuffer **)((char *)this + 96);
    if ( *v21 == (struct CLegacyTokenBuffer *)v21 )
    {
      v8 = CLegacyTokenBuffer::Create(v4);
LABEL_3:
      if ( v8 < 0 )
        goto LABEL_21;
      goto LABEL_4;
    }
    v22 = *v21;
    v23 = *(struct CLegacyTokenBuffer **)*v21;
    if ( *((struct CLegacyTokenBuffer ***)*v21 + 1) != v21 || *((struct CLegacyTokenBuffer **)v23 + 1) != v22 )
      __fastfail(3u);
    *v21 = v23;
    *((_QWORD *)v23 + 1) = v21;
    --*((_DWORD *)this + 28);
    *v4 = v22;
LABEL_4:
    v9 = *v4;
    v8 = 0;
    if ( v3 > *((_DWORD *)*v4 + 526) )
      v8 = CLegacyTokenBuffer::Grow(*v4);
    v35 = (void *)*((_QWORD *)v9 + 262);
    if ( v8 < 0 )
      goto LABEL_20;
    v31[1] = *((_DWORD *)v9 + 526);
    v31[0] = v5;
    v33 = Src;
    v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))qword_1C0104038)(v31, 0LL);
    PreviousState = v10;
    v8 = v10;
    if ( v10 == -1073741789 )
    {
      v3 = 640;
      if ( v32 > 0x280 )
        v3 = v32;
      v8 = 0;
      v29 = v3;
      goto LABEL_20;
    }
    if ( v10 )
    {
      if ( v10 != 261 )
      {
        v2 = 0;
        v25 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v25 = 0;
    }
    v11 = 0;
    v12 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)Src;
    v13 = 0;
    v30 = 0;
    v14 = 0;
    v15 = 0;
    if ( !v34 )
      goto LABEL_17;
    v16 = (char *)v35;
    v17 = v27;
    do
    {
      if ( LODWORD(v12->hPrivateData) == 7 )
      {
        CTokenManager::ResolveCompositionHandleToken(this, v12 + 2);
      }
      else
      {
        if ( LODWORD(v12->hPrivateData) != 2 )
        {
          memmove(v16, v12, HIDWORD(v12->hPrivateData));
          hPrivateData_high = HIDWORD(v12->hPrivateData);
          ++v30;
          v13 += hPrivateData_high;
          v16 += hPrivateData_high;
          goto LABEL_15;
        }
        if ( (v12[7].hPrivateData & 0x200000000000LL) != 0 && (HIDWORD(v12[7].hPrivateData) & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndendentFlipToken(
            this,
            v12[1].hPrivateData,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v12[2],
            v17);
        }
        else
        {
          hPrivateData = v12[1].hPrivateData;
          v26 = 0;
          CTokenManager::CreateFlipExToken(
            this,
            hPrivateData,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v12[2],
            &v26);
          if ( !v26 )
            goto LABEL_15;
        }
        ++v14;
      }
LABEL_15:
      ++v15;
      v12 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)((char *)v12 + HIDWORD(v12->hPrivateData));
    }
    while ( v15 < v34 );
    v8 = PreviousState;
    v4 = (struct CLegacyTokenBuffer **)((char *)this + 120);
    v11 = v30;
LABEL_17:
    v19 = *v4;
    *(_DWORD *)(*((_QWORD *)*v4 + 261) + 16LL) += v11;
    *(_DWORD *)(*((_QWORD *)v19 + 261) + 2068LL) += v13;
    *((_DWORD *)v19 + 526) -= v13;
    *((_QWORD *)v19 + 262) += v13;
    if ( v34 != v14 )
    {
      PreviousState = 0;
      ZwSetEvent(*((HANDLE *)this + 4), &PreviousState);
    }
    v5 = v27;
    v3 = v29;
LABEL_20:
    v2 = v25;
LABEL_21:
    *(_QWORD *)this = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 64);
    if ( v8 >= 0 && v2 )
    {
      v6 = (char *)this + 64;
      continue;
    }
    return (unsigned int)v8;
  }
}
