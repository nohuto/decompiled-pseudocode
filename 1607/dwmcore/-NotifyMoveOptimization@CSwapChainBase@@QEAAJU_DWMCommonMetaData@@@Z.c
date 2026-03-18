/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017AC80
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017A7A4 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xx @ 0x18011436C (Template_xx.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     Template_nn @ 0x18017B17C (Template_nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  int v6; // r15d
  __m128i *v7; // rdi
  _DWORD *v8; // rsi
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
  _OWORD *v22; // rcx
  int v23; // eax
  char v24; // al
  __m128i v25; // xmm0
  int v26; // edi
  int v27; // ebx
  int v28; // r14d
  int v29; // esi
  HRGN RectRgn; // rax
  HRGN v31; // rdi
  signed int LastError; // eax
  DWORD v33; // edx
  unsigned int v34; // ecx
  DWORD v35; // r8d
  HRGN v36; // rax
  HRGN v37; // rbx
  signed int v38; // eax
  DWORD v39; // edx
  unsigned int v40; // ecx
  DWORD v41; // r8d
  signed int v42; // eax
  DWORD v43; // edx
  unsigned int v44; // ecx
  DWORD v45; // r8d
  signed int v46; // eax
  DWORD v47; // edx
  unsigned int v48; // ecx
  DWORD v49; // r8d
  unsigned int v51; // [rsp+20h] [rbp-50h]
  int y2; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = *a1;
  *(_QWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v3 + 80))(a1) )
    return (unsigned int)v6;
  v7 = (__m128i *)(a2 + 16);
  *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *((_DWORD *)a1 + 32);
  *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = *((_DWORD *)a1 + 33);
  *(_QWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  *(_OWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  if ( !IntersectRect((LPRECT)(v2 + 64), (const RECT *)(v2 + 40), (const RECT *)(a2 + 16)) )
    return (unsigned int)v6;
  v8 = (_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 36);
  *(_OWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                  + 0x40);
  OffsetRect((LPRECT)(v2 + 80), v9, v10);
  if ( !IntersectRect((LPRECT)(v2 + 64), (const RECT *)(v2 + 40), (const RECT *)(v2 + 80)) )
    return (unsigned int)v6;
  OffsetRect((LPRECT)(v2 + 64), -*v8, -*(_DWORD *)(a2 + 36));
  v12 = *(__m128i **)(a2 + 48);
  v13 = *(__m128i *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *v7 = v13;
  if ( v12 )
  {
    v14 = *v12;
    v15 = *((_DWORD *)a1 + 32);
    v16 = _mm_cvtsi128_si32(v14);
    *(__m128i *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v14;
    v11 = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v11;
    if ( v16 < 0 )
      v16 = 0;
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v16;
    v17 = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( v17 < 0 )
      v17 = 0;
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v17;
    if ( v11 >= v15 )
    {
      v11 = v15 - 1;
      *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v15 - 1;
    }
    v18 = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    v19 = *((_DWORD *)a1 + 33);
    *(_DWORD *)v2 = v18;
    if ( v18 >= v19 )
      *(_DWORD *)v2 = v19 - 1;
  }
  else
  {
    *(_DWORD *)((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 0x14);
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                 + 0x10);
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xC);
    *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 8);
  }
  v20 = *((unsigned int *)a1 + 62);
  v21 = v20 + 1;
  if ( (int)v20 + 1 >= (unsigned int)v20 )
  {
    if ( v21 <= *((_DWORD *)a1 + 61) )
    {
      v22 = (_OWORD *)(a1[28] + 48 * v20);
      *v22 = *(_OWORD *)a2;
      v22[1] = *(_OWORD *)(a2 + 16);
      v22[2] = *(_OWORD *)(a2 + 32);
      *((_DWORD *)a1 + 62) = v21;
      goto LABEL_21;
    }
    v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(a1 + 28), 0x30u, 1, a2);
    v6 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x225u);
    return (unsigned int)v6;
  }
LABEL_21:
  v24 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx((__int64)v22, &EVTDESC_REMOTEAPP_METADATA_STATS, a1 + 28, *((unsigned int *)a1 + 62));
    v24 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v24 & 0x20) != 0 )
    Template_nn((_DWORD)v22, v21, v11, a2 + 32, v51, a2 + 16);
  v25 = *v7;
  *(__m128i *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v7;
  v26 = *(_DWORD *)(a2 + 36) + *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  v27 = *(_DWORD *)(a2 + 36) + *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  v28 = *v8 + _mm_cvtsi128_si32(v25);
  v29 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  SetLastError(0);
  RectRgn = CreateRectRgn(v28, v26, v29, v27);
  v31 = RectRgn;
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = CheckGUIHandleQuota(v34, v33, v35);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23Fu);
    return (unsigned int)v6;
  }
  if ( a1[25] )
  {
    SetLastError(0);
    if ( !CombineRgn((HRGN)a1[25], (HRGN)a1[25], v31, 2) )
    {
      v42 = GetLastError();
      v6 = v42;
      if ( v42 > 0 )
        v6 = (unsigned __int16)v42 | 0x80070000;
      if ( v6 >= 0 )
        v6 = CheckGUIHandleQuota(v44, v43, v45);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x24Bu);
      goto LABEL_54;
    }
  }
  else
  {
    a1[25] = (__int64)RectRgn;
    v31 = 0LL;
  }
  if ( *(_QWORD *)(a2 + 48) )
  {
    SetLastError(0);
    v36 = CreateRectRgn(
            *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
            *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            *(_DWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            *(_DWORD *)v2);
    *(_QWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v36;
    v37 = v36;
    if ( v36 )
    {
      if ( a1[27] )
      {
        SetLastError(0);
        if ( !CombineRgn((HRGN)a1[27], (HRGN)a1[27], v37, 2) )
        {
          v46 = GetLastError();
          v6 = v46;
          if ( v46 > 0 )
            v6 = (unsigned __int16)v46 | 0x80070000;
          if ( v6 >= 0 )
            v6 = CheckGUIHandleQuota(v48, v47, v49);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x262u);
        }
      }
      else
      {
        a1[27] = (__int64)v36;
        *(_QWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
      }
    }
    else
    {
      v38 = GetLastError();
      v6 = v38;
      if ( v38 > 0 )
        v6 = (unsigned __int16)v38 | 0x80070000;
      if ( v6 >= 0 )
        v6 = CheckGUIHandleQuota(v40, v39, v41);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x256u);
    }
  }
LABEL_54:
  if ( v31 )
    DeleteObject(v31);
  if ( *(_QWORD *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    DeleteObject(*(HGDIOBJ *)(((unsigned __int64)&y2 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  return (unsigned int)v6;
}
