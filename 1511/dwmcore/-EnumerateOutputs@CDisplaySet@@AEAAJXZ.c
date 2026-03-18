/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18006FBEC
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800702C4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x18006C0F0 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18006C124 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800707F0 (--0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERV.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  __int64 v1; // rax
  int v3; // edi
  unsigned int v4; // r15d
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  int updated; // eax
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // eax
  HMODULE LibraryW; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ebx
  int v22; // r9d
  __int64 v23; // rsi
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+20h] [rbp-38h]
  int v27; // [rsp+A0h] [rbp+48h]
  __int64 v28; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+60h]

  v1 = *((_QWORD *)this + 2);
  v28 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( !*(_DWORD *)(v1 + 88) )
    return (unsigned int)v3;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 64LL) + 8LL * v4);
    v6 = 0LL;
    v27 = 0;
    if ( *(_DWORD *)(v5 + 376) )
      break;
LABEL_39:
    if ( ++v4 >= *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
      goto LABEL_54;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 352) + 264 * v6;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v7);
    v3 = updated;
    if ( updated < 0 )
      break;
    if ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)v7) )
      goto LABEL_38;
    v9 = (_WORD *)(v7 + 196);
    v29 = 0LL;
    v10 = 0LL;
    if ( v7 == -196 )
      goto LABEL_12;
    v11 = 0;
    v12 = 32LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v12;
    }
    while ( v12 );
    if ( !v12 )
    {
      v10 = 0LL;
      v29 = 0LL;
LABEL_12:
      v11 = -2147024809;
      goto LABEL_13;
    }
    v10 = 32 - v12;
    v29 = 32 - v12;
LABEL_13:
    if ( v11 < 0 )
      v13 = 0LL;
    else
      v13 = 2 * v10;
    if ( v11 < 0 )
    {
      v26 = 60;
LABEL_50:
      v21 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v26);
LABEL_51:
      v3 = v21;
      v25 = 826;
LABEL_46:
      v22 = v21;
      goto LABEL_53;
    }
    if ( v13 < 2 )
    {
      v26 = 65;
      goto LABEL_50;
    }
    v14 = *(_DWORD *)(v7 + 192);
    if ( (v14 & 8) != 0 && !*(_QWORD *)(v7 + 104) )
    {
      v21 = -2003304442;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x4Au);
      goto LABEL_51;
    }
    if ( (v14 & 2) != 0 )
    {
      v3 = 0;
      if ( !*((_QWORD *)this + 67) )
      {
        LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
        *((_QWORD *)this + 66) = LibraryW;
        if ( LibraryW )
          *((_QWORD *)this + 67) = GetProcAddress(LibraryW, "DwmIndirectOutput");
        if ( !*((_QWORD *)this + 67) )
          v3 = -2147467259;
      }
      if ( v3 < 0 )
      {
        v25 = 830;
LABEL_43:
        v22 = v3;
        goto LABEL_53;
      }
    }
    v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            312LL);
    if ( v16 )
    {
      v17 = CDisplay::CDisplay(v16, this);
      v28 = v17;
    }
    else
    {
      v17 = 0LL;
      v28 = 0LL;
    }
    if ( !v17 )
    {
      v3 = -2147024882;
      v25 = 844;
      goto LABEL_43;
    }
    v18 = *((_DWORD *)this + 18);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_45:
      v25 = 846;
      goto LABEL_46;
    }
    v3 = 0;
    if ( v19 > *((_DWORD *)this + 17) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 8LL, 1LL, &v28);
      v21 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      v3 = v21;
      if ( v21 < 0 )
        goto LABEL_45;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v18) = v28;
      *((_DWORD *)this + 18) = v19;
    }
    v28 = 0LL;
LABEL_38:
    v6 = (unsigned int)(v27 + 1);
    v27 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 376) )
      goto LABEL_39;
  }
  v25 = 816;
  v22 = updated;
LABEL_53:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v25);
LABEL_54:
  v23 = v28;
  if ( v28 && _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 8), 0xFFFFFFFF) == 1 && v23 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, 1LL);
  return (unsigned int)v3;
}
