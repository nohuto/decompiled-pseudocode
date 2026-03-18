/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B916C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180108D20 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180108DF0 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // ebx
  int v15; // eax
  char v16; // al
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  int v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 360;
  *((_DWORD *)this + 96) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 45, 1u);
  v3 = *((_QWORD *)this + 2);
  v30 = 4;
  *(_QWORD *)&v31 = *(_QWORD *)(v3 + 472);
  *((_QWORD *)&v31 + 1) = *(_QWORD *)(v3 + 312);
  v4 = *((unsigned int *)v1 + 6);
  v5 = v4 + 4;
  if ( (int)v4 + 4 < (unsigned int)v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1E1u);
    return v7;
  }
  if ( v5 > *((_DWORD *)v1 + 5) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 4, &v30);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_10;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)v1 + v4) = 4;
    *((_DWORD *)v1 + 6) = v5;
  }
  v8 = *((unsigned int *)v1 + 6);
  v9 = v8 + 16;
  if ( (int)v8 + 16 < (unsigned int)v8 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1E2u);
    return v7;
  }
  v7 = 0;
  if ( v9 > *((_DWORD *)v1 + 5) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 16, &v31);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    v7 = v10;
    if ( v10 < 0 )
      goto LABEL_19;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v1 + v8) = v31;
    *((_DWORD *)v1 + 6) = v9;
  }
  if ( (*((_BYTE *)this + 392) & 4) == 0 )
  {
    v12 = *((unsigned int *)v1 + 6);
    v30 = 3;
    v13 = v12 + 4;
    if ( (int)v12 + 4 < (unsigned int)v12 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_29:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1E8u);
      return v7;
    }
    v7 = 0;
    if ( v13 > *((_DWORD *)v1 + 5) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 4, &v30);
      v14 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      v7 = v14;
      if ( v14 < 0 )
        goto LABEL_29;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v1 + v12) = 3;
      *((_DWORD *)v1 + 6) = v13;
    }
  }
  v16 = *((_BYTE *)this + 392);
  if ( (v16 & 2) == 0 )
    goto LABEL_33;
  v17 = (v16 & 8) == 0;
  v18 = *((unsigned int *)v1 + 6);
  v19 = v18 + 4;
  if ( !v17 )
  {
    v30 = 2;
    if ( v19 < (unsigned int)v18 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_39:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1F0u);
      return v7;
    }
    v7 = 0;
    if ( v19 <= *((_DWORD *)v1 + 5) )
    {
      *(_DWORD *)(*(_QWORD *)v1 + v18) = 2;
LABEL_32:
      *((_DWORD *)v1 + 6) = v19;
      goto LABEL_33;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 4, &v30);
    v20 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    v7 = v20;
    if ( v20 < 0 )
      goto LABEL_39;
    goto LABEL_33;
  }
  v30 = 1;
  if ( v19 < (unsigned int)v18 )
  {
    v26 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
    goto LABEL_47;
  }
  v7 = 0;
  if ( v19 <= *((_DWORD *)v1 + 5) )
  {
    *(_DWORD *)(*(_QWORD *)v1 + v18) = 1;
    goto LABEL_32;
  }
  v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 4, &v30);
  v26 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
  v7 = v26;
  if ( v26 < 0 )
  {
LABEL_47:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1F5u);
    return v7;
  }
LABEL_33:
  if ( (*((_BYTE *)this + 392) & 1) == 0 )
    return v7;
  v22 = *((unsigned int *)v1 + 6);
  v30 = 0;
  v23 = v22 + 4;
  if ( (int)v22 + 4 < (unsigned int)v22 )
  {
    v24 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
    goto LABEL_53;
  }
  v7 = 0;
  if ( v23 <= *((_DWORD *)v1 + 5) )
  {
    *(_DWORD *)(*(_QWORD *)v1 + v22) = 0;
    *((_DWORD *)v1 + 6) = v23;
    return v7;
  }
  v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v1, 1, 4, &v30);
  v24 = v28;
  if ( v28 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
  v7 = v24;
  if ( v24 < 0 )
LABEL_53:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1FCu);
  return v7;
}
