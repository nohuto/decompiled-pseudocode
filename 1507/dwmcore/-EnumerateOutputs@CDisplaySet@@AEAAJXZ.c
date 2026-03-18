/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800556B4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180057668 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18005769C (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?ReadGraphicsAccelerationCaps@CDisplay@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180057BBC (-ReadGraphicsAccelerationCaps@CDisplay@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ??0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x180057C88 (--0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERV.c)
 *     ?ReadStereoSupport@CDisplay@@AEAAJXZ @ 0x180058048 (-ReadStereoSupport@CDisplay@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v8; // rbp
  int updated; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  CDisplay *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  HMODULE LibraryW; // rax
  int v21; // eax
  int v22; // edi
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-58h]
  unsigned int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+80h] [rbp+8h]
  CDisplay *v27; // [rsp+88h] [rbp+10h] BYREF

  v27 = 0LL;
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
    return (unsigned int)v2;
  while ( 1 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 64LL) + 8LL * v4);
    v26 = *(_DWORD *)(v6 + 344);
    if ( *(_DWORD *)(v6 + 376) )
      break;
LABEL_3:
    if ( ++v4 >= *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 352) + 264LL * v5;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v8);
    v2 = updated;
    if ( updated < 0 )
    {
      v24 = 820;
      goto LABEL_61;
    }
    if ( DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)v8) )
      break;
LABEL_31:
    if ( ++v5 >= *(_DWORD *)(v6 + 376) )
      goto LABEL_3;
  }
  v10 = (_WORD *)(v8 + 196);
  v11 = 0LL;
  if ( v8 != -196 )
  {
    v12 = 0;
    v13 = 32LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v13;
    }
    while ( v13 );
    if ( v13 )
    {
      v11 = 32 - v13;
      goto LABEL_15;
    }
    v11 = 0LL;
  }
  v12 = -2147024809;
LABEL_15:
  if ( v12 < 0 )
    v14 = 0LL;
  else
    v14 = 2 * v11;
  if ( v12 < 0 )
  {
    v25 = 60;
LABEL_54:
    v22 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v25);
    goto LABEL_55;
  }
  if ( v14 < 2 )
  {
    v25 = 65;
    goto LABEL_54;
  }
  v15 = *(_DWORD *)(v8 + 192);
  if ( (v15 & 8) != 0 && !*(_QWORD *)(v8 + 104) )
  {
    v22 = -2003304442;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x4Au);
LABEL_55:
    v2 = v22;
    v24 = 830;
    goto LABEL_56;
  }
  if ( (v15 & 2) != 0 )
  {
    v3 = *((_QWORD *)this + 67);
    v2 = 0;
    if ( !v3 )
    {
      LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
      *((_QWORD *)this + 66) = LibraryW;
      if ( LibraryW )
        *((_QWORD *)this + 67) = GetProcAddress(LibraryW, "DwmIndirectOutput");
      v3 = *((_QWORD *)this + 67);
      if ( !v3 )
        v2 = -2147467259;
    }
    if ( v2 < 0 )
    {
      v24 = 834;
LABEL_50:
      v23 = v2;
      goto LABEL_62;
    }
  }
  v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          904LL);
  if ( v16 )
    v17 = (CDisplay *)CDisplay::CDisplay(v16, this, *((unsigned int *)this + 18), v4, v6, v8, v26, v3);
  else
    v17 = 0LL;
  v27 = v17;
  if ( !v17 )
  {
    v2 = -2147024882;
    v24 = 848;
    goto LABEL_50;
  }
  updated = CDisplay::ReadGraphicsAccelerationCaps(v17, *((const struct CDXGIEnumeration **)this + 2));
  v2 = updated;
  if ( updated < 0 )
  {
    v24 = 850;
    goto LABEL_61;
  }
  updated = CDisplay::ReadStereoSupport(v27);
  v2 = updated;
  if ( updated >= 0 )
  {
    v18 = *((_DWORD *)this + 18);
    v19 = v18 + 1;
    if ( v18 + 1 >= v18 )
    {
      v2 = 0;
      if ( v19 > *((_DWORD *)this + 17) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v27);
        v22 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
        v2 = v22;
        if ( v22 < 0 )
          goto LABEL_52;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v18) = v27;
        *((_DWORD *)this + 18) = v19;
      }
      v27 = 0LL;
      goto LABEL_31;
    }
    v22 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v2 = -2147024362;
LABEL_52:
    v24 = 854;
LABEL_56:
    v23 = v22;
    goto LABEL_62;
  }
  v24 = 852;
LABEL_61:
  v23 = updated;
LABEL_62:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
LABEL_4:
  if ( v27 )
    CMILRefCountBase::Release(v27);
  return (unsigned int)v2;
}
