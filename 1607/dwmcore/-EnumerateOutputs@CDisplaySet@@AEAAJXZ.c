/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180035F84
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ??0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x18003482C (--0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800B3674 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800B36A8 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  unsigned __int64 v1; // r9
  int v3; // ebx
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  __int64 v7; // r15
  int v8; // r13d
  __int64 v10; // rsi
  int updated; // eax
  _WORD *v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // edx
  HMODULE LibraryW; // rax
  int v24; // eax
  int v25; // edi
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-48h]
  unsigned int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v1) = 0;
  v29 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
    return (unsigned int)v3;
  while ( 1 )
  {
    v6 = v1;
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 64LL) + 8LL * v5);
    v8 = *(_DWORD *)(v7 + 344);
    if ( *(_DWORD *)(v7 + 392) > (unsigned int)v1 )
      break;
LABEL_3:
    if ( ++v5 >= *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 368) + 272LL * v6;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v10);
    v3 = updated;
    if ( updated < 0 )
    {
      v27 = 781;
      v26 = updated;
      goto LABEL_56;
    }
    if ( DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)v10) )
      break;
LABEL_29:
    if ( ++v6 >= *(_DWORD *)(v7 + 392) )
      goto LABEL_3;
  }
  v12 = (_WORD *)(v10 + 196);
  v13 = (unsigned int)v1;
  if ( v10 != -196 )
  {
    v14 = v1;
    v15 = (unsigned int)(v1 + 32);
    do
    {
      if ( *v12 == (_WORD)v1 )
        break;
      ++v12;
      --v15;
    }
    while ( v15 );
    if ( v15 )
    {
      v13 = (unsigned int)(v1 + 32) - v15;
      goto LABEL_15;
    }
    v13 = v1;
  }
  v14 = -2147024809;
LABEL_15:
  if ( v14 < 0 )
    v16 = v1;
  else
    v16 = 2 * v13;
  if ( v14 < 0 )
  {
    v28 = 60;
    goto LABEL_53;
  }
  if ( v16 < 2 )
  {
    v28 = 65;
LABEL_53:
    v25 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v28);
    goto LABEL_54;
  }
  v17 = *(_DWORD *)(v10 + 192);
  if ( (v17 & 8) != 0 && *(_QWORD *)(v10 + 104) == v1 )
  {
    v25 = -2003304442;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x4Au);
LABEL_54:
    v3 = v25;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x317u);
    goto LABEL_4;
  }
  if ( (v17 & 2) != 0 )
  {
    v4 = *((_QWORD *)this + 67);
    v3 = v1;
    if ( !v4 )
    {
      LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
      *((_QWORD *)this + 66) = LibraryW;
      if ( LibraryW )
        *((_QWORD *)this + 67) = GetProcAddress(LibraryW, "DwmIndirectOutput");
      v4 = *((_QWORD *)this + 67);
      if ( !v4 )
        v3 = -2147467259;
    }
    if ( v3 < 0 )
    {
      v27 = 795;
      goto LABEL_50;
    }
  }
  v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          312LL);
  LODWORD(v1) = 0;
  if ( v18 )
  {
    v20 = CDisplay::CDisplay(v18, (__int64)this, v19, 0LL, v7, (_QWORD *)v10, v8, v4);
    LODWORD(v1) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  v29 = v20;
  if ( v20 )
  {
    v21 = *((_DWORD *)this + 18);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v3 = 0;
      if ( v22 <= *((_DWORD *)this + 17) )
      {
        *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v21) = v29;
        *((_DWORD *)this + 18) = v22;
LABEL_28:
        v29 = 0LL;
        goto LABEL_29;
      }
      v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 8LL, 1LL, &v29);
      LODWORD(v1) = 0;
      v3 = v24;
      if ( v24 >= 0 )
      {
LABEL_46:
        if ( v3 < 0 )
        {
          v27 = 811;
          goto LABEL_50;
        }
        goto LABEL_28;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    }
    LODWORD(v1) = 0;
    goto LABEL_46;
  }
  v3 = -2147024882;
  v27 = 809;
LABEL_50:
  v26 = v3;
LABEL_56:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v27);
LABEL_4:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  return (unsigned int)v3;
}
