/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00470AC
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z @ 0x1C0047418 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z.c)
 * Callees:
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C00194A0 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0046F24 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0046FD8 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0069CB4 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E014C (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // di
  unsigned int v3; // r14d
  struct CLegacyTokenBuffer **v4; // r15
  unsigned int v5; // r12d
  char *v6; // rax
  LONG v8; // ebx
  struct CLegacyTokenBuffer *v9; // rdi
  LONG v10; // eax
  __int64 v11; // r8
  int v12; // edx
  const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *v13; // rdi
  unsigned int v14; // r13d
  int v15; // r14d
  unsigned int v16; // r12d
  char *v17; // r15
  unsigned int v18; // ebx
  __int64 hPrivateData_high; // rax
  struct CLegacyTokenBuffer *v20; // rcx
  unsigned __int64 hPrivateData; // rdx
  struct CLegacyTokenBuffer **v23; // rax
  struct CLegacyTokenBuffer *v24; // rcx
  struct CLegacyTokenBuffer *v25; // rdx
  char v26; // [rsp+20h] [rbp-E0h]
  bool v27; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int v28; // [rsp+24h] [rbp-DCh]
  LONG PreviousState; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+2Ch] [rbp-D4h]
  int v31; // [rsp+30h] [rbp-D0h]
  _DWORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  _BYTE *v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+50h] [rbp-B0h]
  void *v36; // [rsp+58h] [rbp-A8h]
  _BYTE Src[2048]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 1;
  v28 = a2;
  v3 = 640;
  v26 = 1;
  v30 = 640;
  v4 = (struct CLegacyTokenBuffer **)((char *)this + 88);
  v5 = a2;
  v6 = (char *)this + 56;
  while ( 2 )
  {
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v8 = 0;
    if ( *v4 )
      goto LABEL_3;
    v23 = (struct CLegacyTokenBuffer **)((char *)this + 64);
    if ( *v23 == (struct CLegacyTokenBuffer *)v23 )
    {
      v8 = CLegacyTokenBuffer::Create(v4);
LABEL_3:
      if ( v8 < 0 )
        goto LABEL_21;
      goto LABEL_4;
    }
    v24 = *v23;
    v25 = *(struct CLegacyTokenBuffer **)*v23;
    if ( *((struct CLegacyTokenBuffer ***)*v23 + 1) != v23 || *((struct CLegacyTokenBuffer **)v25 + 1) != v24 )
      __fastfail(3u);
    *v23 = v25;
    *((_QWORD *)v25 + 1) = v23;
    --*((_DWORD *)this + 20);
    *v4 = v24;
LABEL_4:
    v9 = *v4;
    v8 = 0;
    if ( v3 > *((_DWORD *)*v4 + 526) )
      v8 = CLegacyTokenBuffer::Grow(*v4);
    v36 = (void *)*((_QWORD *)v9 + 262);
    if ( v8 < 0 )
      goto LABEL_20;
    v32[1] = *((_DWORD *)v9 + 526);
    v32[0] = v5;
    v34 = Src;
    v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))qword_1C0101218)(v32, 0LL);
    PreviousState = v10;
    v8 = v10;
    if ( v10 == -1073741789 )
    {
      v3 = 640;
      if ( v33 > 0x280 )
        v3 = v33;
      v8 = 0;
      v30 = v3;
      goto LABEL_20;
    }
    if ( v10 )
    {
      if ( v10 != 261 )
      {
        v2 = 0;
        v26 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v26 = 0;
    }
    v12 = 0;
    v13 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)Src;
    v14 = 0;
    v31 = 0;
    v15 = 0;
    v16 = 0;
    if ( !v35 )
      goto LABEL_17;
    v17 = (char *)v36;
    v18 = v28;
    do
    {
      if ( LODWORD(v13->hPrivateData) == 7 )
      {
        CTokenManager::ResolveCompositionHandleToken(this, v13 + 2, v11);
      }
      else
      {
        if ( LODWORD(v13->hPrivateData) != 2 )
        {
          memmove(v17, v13, HIDWORD(v13->hPrivateData));
          hPrivateData_high = HIDWORD(v13->hPrivateData);
          ++v31;
          v14 += hPrivateData_high;
          v17 += hPrivateData_high;
          goto LABEL_15;
        }
        if ( (v13[7].hPrivateData & 0x200000000000LL) != 0 && (HIDWORD(v13[7].hPrivateData) & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndendentFlipToken(
            this,
            v13[1].hPrivateData,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v13[2],
            v18);
        }
        else
        {
          hPrivateData = v13[1].hPrivateData;
          v27 = 0;
          CTokenManager::CreateFlipExToken(
            this,
            hPrivateData,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v13[2],
            &v27);
          if ( !v27 )
            goto LABEL_15;
        }
        ++v15;
      }
LABEL_15:
      ++v16;
      v13 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)((char *)v13 + HIDWORD(v13->hPrivateData));
    }
    while ( v16 < v35 );
    v8 = PreviousState;
    v4 = (struct CLegacyTokenBuffer **)((char *)this + 88);
    v12 = v31;
LABEL_17:
    v20 = *v4;
    *(_DWORD *)(*((_QWORD *)*v4 + 261) + 16LL) += v12;
    *(_DWORD *)(*((_QWORD *)v20 + 261) + 2068LL) += v14;
    *((_DWORD *)v20 + 526) -= v14;
    *((_QWORD *)v20 + 262) += v14;
    if ( v35 != v15 )
    {
      PreviousState = 0;
      ZwSetEvent(*((HANDLE *)this + 3), &PreviousState);
    }
    v5 = v28;
    v3 = v30;
LABEL_20:
    v2 = v26;
LABEL_21:
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    if ( v8 >= 0 && v2 )
    {
      v6 = (char *)this + 56;
      continue;
    }
    return (unsigned int)v8;
  }
}
