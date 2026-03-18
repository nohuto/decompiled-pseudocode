/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800691B0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18006C51C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x1800EE690 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEBF8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180148DEC (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, char a2)
{
  __int64 v2; // rsi
  char v3; // r13
  CComposition *v4; // rbx
  unsigned int i; // ebp
  __int64 v6; // rsi
  int v7; // ebp
  unsigned int v8; // r14d
  __int64 v9; // r14
  unsigned int v10; // r15d
  char v11; // r12
  char v12; // bl
  __int64 v13; // r13
  __int64 v14; // rdi
  bool (__fastcall *v15)(__int64, int); // rsi
  bool v16; // al
  bool v17; // zf
  __int64 v18; // rax
  CComposition *v19; // rdi
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // r15
  int v28; // eax
  int v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  int Buffer; // eax
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  CComposition *v39; // [rsp+70h] [rbp+8h] BYREF
  char v40; // [rsp+78h] [rbp+10h]
  HANDLE hEvent; // [rsp+80h] [rbp+18h] BYREF

  v40 = a2;
  v39 = this;
  v2 = *((_QWORD *)this + 5);
  v3 = a2;
  v4 = this;
  for ( i = 0; i < *(_DWORD *)(v2 + 368); ++i )
  {
    v31 = *(_QWORD *)(v2 + 344);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v31 + 8LL * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v2 + 368) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v2 + 344), 8u);
  v6 = *((_QWORD *)v4 + 5);
  v7 = 0;
  LODWORD(hEvent) = 0;
  v8 = 0;
  if ( *(_DWORD *)(v6 + 336) )
  {
    do
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 8LL * v8);
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
      v29 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x2BEu);
      if ( !v7 || v7 >= 0 && v29 < 0 )
        v7 = v29;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      ++v8;
    }
    while ( v8 < *(_DWORD *)(v6 + 336) );
    LODWORD(hEvent) = v7;
  }
  *(_DWORD *)(v6 + 336) = 0;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6EDu);
    goto LABEL_21;
  }
  v9 = *((_QWORD *)v4 + 4);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(v9 + 48) )
  {
    v12 = v40;
    do
    {
      v13 = 8LL * v10;
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(v9 + 24));
      v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 48LL);
      if ( v15 == CHwndRenderTarget::IsOfType )
        v16 = CHwndRenderTarget::IsOfType(v14, 36);
      else
        v16 = v15(*(_QWORD *)(v13 + *(_QWORD *)(v9 + 24)), 36);
      v17 = !v16;
      v18 = *(_QWORD *)(v9 + 24);
      if ( v17 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v13 + v18) + 48LL))(
               *(_QWORD *)(v13 + v18),
               50LL) )
        {
          v32 = *(_QWORD *)(v9 + 24);
          v33 = *(_QWORD *)(v13 + v32);
          if ( v12 )
          {
            if ( (*(_BYTE *)(v33 + 416) & 3) != 0 )
            {
              if ( *(_QWORD *)(v33 + 432)
                || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(*(CIndirectSwapchainRenderTarget **)(v13 + v32)),
                    v35 = Buffer,
                    Buffer >= 0) )
              {
                v36 = CIndirectSwapchainRenderTarget::Present((CIndirectSwapchainRenderTarget *)(v33 + 40), 0, 0);
                v35 = v36;
                if ( v36 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x122u);
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0x11Eu);
              }
              if ( v35 == 142213130 )
                v11 = 1;
            }
          }
        }
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)(v13 + v18) + 574LL) = 0;
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)(v9 + 48) );
    v4 = v39;
    v7 = (int)hEvent;
    if ( v11 )
      SetEvent(*(HANDLE *)(*((_QWORD *)v39 + 63) + 88LL));
    v3 = v40;
  }
  v19 = (CComposition *)*((_QWORD *)v4 + 44);
  if ( !v19 )
    goto LABEL_20;
  v20 = (_QWORD *)*((_QWORD *)v4 + 62);
  v39 = (CComposition *)*((_QWORD *)v4 + 44);
  v7 = 0;
  v21 = NtDCompositionConfirmFrame(*v20, &v39);
  if ( v21 < 0 )
  {
    v7 = v21 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21 | 0x10000000, 0x8Eu);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6FBu);
    goto LABEL_21;
  }
  v22 = *((_QWORD *)v4 + 43);
  if ( !v22 )
    goto LABEL_24;
  if ( v3 )
  {
    *(_QWORD *)(*(_QWORD *)v22 + 8LL) = 0LL;
LABEL_24:
    v25 = (_QWORD *)*((_QWORD *)v4 + 62);
    v39 = v19;
    v7 = 0;
    v26 = NtDCompositionDiscardFrame(*v25, &v39);
    if ( v26 < 0 )
    {
      v7 = v26 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26 | 0x10000000, 0xA2u);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x70Du);
      goto LABEL_21;
    }
  }
LABEL_20:
  if ( *((_DWORD *)v4 + 182) )
  {
    v30 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)v4 + 88) + 8 * v30));
      v30 = (unsigned int)(v30 + 1);
    }
    while ( (unsigned int)v30 < *((_DWORD *)v4 + 182) );
    *((_DWORD *)v4 + 182) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 88, 8u);
  }
LABEL_21:
  v23 = *((_QWORD *)v4 + 64);
  if ( v23 )
  {
    v37 = (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(v23 + 24) + 96LL))(*(_QWORD *)(v23 + 24), v3 == 0);
    v38 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x719u);
    if ( !v7 || v7 >= 0 && v38 < 0 )
      return (unsigned int)v38;
  }
  return (unsigned int)v7;
}
