/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A65C
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A148 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xx @ 0x180100478 (Template_xx.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     Template_nn @ 0x18014AB84 (Template_nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  int v6; // r15d
  __m128i *v7; // r14
  _DWORD *v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r8d
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  int v15; // eax
  int v16; // r9d
  int v17; // r9d
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // ebx
  _OWORD *v23; // rcx
  int v24; // eax
  char v25; // al
  __m128i v26; // xmm0
  __int64 v27; // rax
  int v28; // esi
  int v29; // edi
  int v30; // r14d
  int v31; // ebx
  HRGN RectRgn; // rax
  HRGN v33; // rdi
  signed int LastError; // eax
  DWORD v35; // edx
  unsigned int v36; // ecx
  DWORD v37; // r8d
  HRGN v38; // rax
  HRGN v39; // rbx
  signed int v40; // eax
  DWORD v41; // edx
  unsigned int v42; // ecx
  DWORD v43; // r8d
  signed int v44; // eax
  DWORD v45; // edx
  unsigned int v46; // ecx
  DWORD v47; // r8d
  signed int v48; // eax
  DWORD v49; // edx
  unsigned int v50; // ecx
  DWORD v51; // r8d
  unsigned int v53; // [rsp+20h] [rbp-50h]
  int x2; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = *a1;
  *(_QWORD *)(v2 + 40) = a2;
  *(_QWORD *)(v2 + 32) = 0LL;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v3 + 80))(a1) )
    return (unsigned int)v6;
  v7 = (__m128i *)(a2 + 16);
  *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *((_DWORD *)a1 + 32);
  *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *((_DWORD *)a1 + 33);
  *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_OWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  if ( !IntersectRect((LPRECT)(v2 + 80), (const RECT *)(v2 + 56), (const RECT *)(a2 + 16)) )
    return (unsigned int)v6;
  v8 = (_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 36);
  *(_OWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                  + 0x50);
  *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = a2 + 32;
  OffsetRect((LPRECT)(v2 + 96), v9, v10);
  if ( !IntersectRect((LPRECT)(v2 + 80), (const RECT *)(v2 + 56), (const RECT *)(v2 + 96)) )
    return (unsigned int)v6;
  OffsetRect((LPRECT)(v2 + 80), -*v8, -*(_DWORD *)(a2 + 36));
  v12 = *(__m128i **)(a2 + 48);
  v13 = *(__m128i *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  *(_QWORD *)(a2 + 40) = 0LL;
  *v7 = v13;
  if ( v12 )
  {
    v14 = *v12;
    v15 = *((_DWORD *)a1 + 32);
    v16 = _mm_cvtsi128_si32(v14);
    *(__m128i *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v14;
    v11 = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_DWORD *)v2 = v11;
    if ( v16 < 0 )
      v16 = 0;
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v16;
    v17 = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( v17 < 0 )
      v17 = 0;
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v17;
    if ( v11 >= v15 )
    {
      v11 = v15 - 1;
      *(_DWORD *)v2 = v15 - 1;
    }
    v18 = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    v19 = *((_DWORD *)a1 + 33);
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v18;
    if ( v18 >= v19 )
      *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v19 - 1;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                 + 0x14);
    *(_DWORD *)((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 0x10);
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xC);
    *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 8);
  }
  v20 = *((unsigned int *)a1 + 62);
  v21 = v20 + 1;
  if ( (int)v20 + 1 < (unsigned int)v20 )
  {
    v22 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v6 = -2147024362;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x225u);
    return (unsigned int)v6;
  }
  if ( v21 > *((_DWORD *)a1 + 61) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(a1 + 28), 48, 1, a2);
    v22 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_21;
    v8 = *(_DWORD **)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  }
  else
  {
    v23 = (_OWORD *)(a1[28] + 48 * v20);
    *v23 = *(_OWORD *)a2;
    v23[1] = *(_OWORD *)(a2 + 16);
    v23[2] = *(_OWORD *)(a2 + 32);
    *((_DWORD *)a1 + 62) = v21;
  }
  v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx((__int64)v23, &EVTDESC_REMOTEAPP_METADATA_STATS, a1 + 28, *((unsigned int *)a1 + 62));
    v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v25 & 0x20) != 0 )
    Template_nn((_DWORD)v23, v21, v11, (_DWORD)v8, v53, a2 + 16);
  v26 = *v7;
  v27 = *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  *(__m128i *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v7;
  v28 = *v8 + *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  v29 = *(_DWORD *)(v27 + 36) + *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  v30 = *v8 + _mm_cvtsi128_si32(v26);
  v31 = *(_DWORD *)(v27 + 36) + *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  SetLastError(0);
  RectRgn = CreateRectRgn(v30, v29, v28, v31);
  v33 = RectRgn;
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = CheckGUIHandleQuota(v36, v35, v37);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23Fu);
    return (unsigned int)v6;
  }
  if ( a1[25] )
  {
    SetLastError(0);
    if ( !CombineRgn((HRGN)a1[25], (HRGN)a1[25], v33, 2) )
    {
      v44 = GetLastError();
      v6 = v44;
      if ( v44 > 0 )
        v6 = (unsigned __int16)v44 | 0x80070000;
      if ( v6 >= 0 )
        v6 = CheckGUIHandleQuota(v46, v45, v47);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x24Bu);
      goto LABEL_57;
    }
  }
  else
  {
    a1[25] = (__int64)RectRgn;
    v33 = 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 48LL) )
  {
    SetLastError(0);
    v38 = CreateRectRgn(
            *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
            *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            *(_DWORD *)v2,
            *(_DWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
    *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v38;
    v39 = v38;
    if ( v38 )
    {
      if ( a1[27] )
      {
        SetLastError(0);
        if ( !CombineRgn((HRGN)a1[27], (HRGN)a1[27], v39, 2) )
        {
          v48 = GetLastError();
          v6 = v48;
          if ( v48 > 0 )
            v6 = (unsigned __int16)v48 | 0x80070000;
          if ( v6 >= 0 )
            v6 = CheckGUIHandleQuota(v50, v49, v51);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x262u);
        }
      }
      else
      {
        a1[27] = (__int64)v38;
        *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
      }
    }
    else
    {
      v40 = GetLastError();
      v6 = v40;
      if ( v40 > 0 )
        v6 = (unsigned __int16)v40 | 0x80070000;
      if ( v6 >= 0 )
        v6 = CheckGUIHandleQuota(v42, v41, v43);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x256u);
    }
  }
LABEL_57:
  if ( v33 )
    DeleteObject(v33);
  if ( *(_QWORD *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    DeleteObject(*(HGDIOBJ *)(((unsigned __int64)&x2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  return (unsigned int)v6;
}
