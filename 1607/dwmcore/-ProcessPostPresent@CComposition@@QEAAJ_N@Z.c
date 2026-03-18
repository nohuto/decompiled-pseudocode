/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180043C7C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180036F54 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800A8F40 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18011F740 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  char v4; // r13
  CComposition *i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // ebx
  __int64 j; // r14
  __int64 v10; // r14
  char v11; // r15
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al
  _BYTE *v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rsi
  __int64 v24; // r15
  int v25; // eax
  int v26; // ebp
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  int Buffer; // eax
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  unsigned int v36; // [rsp+20h] [rbp-48h]
  CComposition *v37; // [rsp+70h] [rbp+8h] BYREF
  char v38; // [rsp+78h] [rbp+10h]
  HANDLE hEvent; // [rsp+80h] [rbp+18h] BYREF

  v38 = a2;
  v37 = this;
  v2 = *((_QWORD *)this + 5);
  v3 = 0LL;
  v4 = a2;
  for ( i = this; (unsigned int)v3 < *(_DWORD *)(v2 + 368); v3 = (unsigned int)(v3 + 1) )
  {
    v28 = *(_QWORD *)(v2 + 344);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v28 + 8 * v3), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v2 + 368) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2 + 344, 8LL);
  v7 = *((_QWORD *)i + 5);
  v8 = 0;
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v7 + 336); j = (unsigned int)(j + 1) )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 8 * j);
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
    v26 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x2C2u);
    if ( !v8 || v8 >= 0 && v26 < 0 )
      v8 = v26;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  *(_DWORD *)(v7 + 336) = 0;
  if ( v8 < 0 )
  {
    v36 = 1473;
    goto LABEL_54;
  }
  v10 = *((_QWORD *)i + 4);
  v11 = 0;
  v12 = 0LL;
  if ( *(_DWORD *)(v10 + 48) )
  {
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8 * v12);
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL);
      if ( v14 == CHwndRenderTarget::IsOfType )
        v15 = CHwndRenderTarget::IsOfType(v13, 38LL);
      else
        v15 = v14(v13, 38LL);
      v16 = *(_BYTE **)(*(_QWORD *)(v10 + 24) + 8 * v12);
      if ( v15 )
      {
        v16[760] = 0;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 48LL))(v16, 55LL) )
      {
        v29 = *(_QWORD *)(v10 + 24);
        v30 = *(_QWORD *)(v29 + 8 * v12);
        if ( v4 )
        {
          if ( (*(_BYTE *)(v30 + 512) & 3) != 0 )
          {
            if ( *(_QWORD *)(v30 + 528)
              || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(*(CIndirectSwapchainRenderTarget **)(v29 + 8 * v12)),
                  v32 = Buffer,
                  Buffer >= 0) )
            {
              v33 = CIndirectSwapchainRenderTarget::Present((CIndirectSwapchainRenderTarget *)(v30 + 112), 0, 0);
              v32 = v33;
              if ( v33 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x10Du);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0x109u);
            }
            if ( v32 == 142213130 )
              v11 = 1;
          }
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v10 + 48) );
    i = v37;
    if ( v11 )
      SetEvent(*(HANDLE *)(*((_QWORD *)v37 + 64) + 96LL));
  }
  v17 = *((_QWORD *)i + 44);
  if ( !v17 )
    goto LABEL_18;
  v18 = (_QWORD *)*((_QWORD *)i + 63);
  v37 = (CComposition *)*((_QWORD *)i + 44);
  v8 = 0;
  v19 = NtDCompositionConfirmFrame(*v18, &v37);
  if ( v19 < 0 )
  {
    v8 = v19 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19 | 0x10000000, 0x8Eu);
  }
  if ( v8 < 0 )
  {
    v36 = 1487;
LABEL_54:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v36);
    goto LABEL_19;
  }
  v20 = *((_QWORD *)i + 43);
  if ( !v20 )
    goto LABEL_32;
  if ( v4 )
  {
    *(_QWORD *)(*(_QWORD *)v20 + 8LL) = 0LL;
LABEL_32:
    v27 = CKernelTransport::DiscardFrame(*((CKernelTransport **)i + 63), v17);
    v8 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x5E1u);
      goto LABEL_19;
    }
  }
LABEL_18:
  if ( *((_DWORD *)i + 184) )
  {
    v23 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)i + 89) + 8 * v23));
      v23 = (unsigned int)(v23 + 1);
    }
    while ( (unsigned int)v23 < *((_DWORD *)i + 184) );
    v4 = v38;
    *((_DWORD *)i + 184) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)i + 712, 8LL);
  }
LABEL_19:
  v21 = *((_QWORD *)i + 65);
  if ( v21 )
  {
    LOBYTE(v6) = v4 == 0;
    v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 24) + 96LL))(*(_QWORD *)(v21 + 24), v6);
    v35 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x5EDu);
    if ( !v8 || v8 >= 0 && v35 < 0 )
      return (unsigned int)v35;
  }
  return (unsigned int)v8;
}
