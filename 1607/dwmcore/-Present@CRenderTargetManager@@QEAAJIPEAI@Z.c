/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180043C7C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x180072D6C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x180074990 (-AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18016967C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  int v3; // ebx
  char v4; // r12
  char v5; // si
  __int64 v6; // r13
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 v10; // r12
  unsigned int v11; // esi
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  char v14; // al
  __int64 (__fastcall *v15)(_QWORD *, __int64); // rax
  char v16; // al
  __int64 v17; // rdx
  CHwndRenderTarget *v18; // rcx
  __int64 (__fastcall *v19)(CHwndRenderTarget *__hidden, bool, unsigned int); // rax
  int v20; // eax
  __int64 (__fastcall *v21)(_QWORD *, __int64); // rax
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // rax
  char v25; // cl
  char v26; // al
  int v27; // edx
  CD3DDeviceManager *v28; // rcx
  _BOOL8 v29; // r8
  __int64 v30; // rax
  bool v31; // si
  unsigned __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rdi
  CHwndRenderTarget *v35; // rcx
  void (__fastcall *v36)(CHwndRenderTarget *__hidden, unsigned __int64, bool); // rax
  int v37; // eax
  int v38; // edi
  int v40; // ecx
  int v41; // eax
  int v42; // edi
  unsigned int v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+90h] [rbp+8h]
  char v47; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v43 = *((_DWORD *)this + 12);
  v5 = 0;
  v44 = 0;
  v6 = 0LL;
  v47 = 0;
  v7 = 0;
  v8 = 2;
  if ( !v43 )
  {
LABEL_31:
    if ( v3 )
    {
      if ( v3 == 142213121 )
        goto LABEL_33;
      if ( v3 != 142213130 )
      {
        v8 = 1;
        goto LABEL_33;
      }
    }
    v8 = 3;
LABEL_33:
    CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v8, (__int64)a3);
    goto LABEL_34;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = 0;
    v12 = *(_QWORD **)(v10 + *((_QWORD *)this + 3));
    v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
    v14 = (char *)v13 == (char *)CHwndRenderTarget::IsOfType ? CHwndRenderTarget::IsOfType(v12, 38LL) : v13(v12, 38LL);
    if ( v14
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 54LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 45LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 43LL) )
    {
      break;
    }
LABEL_29:
    ++v7;
    v10 += 8LL;
    if ( v7 >= v43 )
    {
      v5 = v47;
      v4 = v44;
      goto LABEL_31;
    }
  }
  v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
  if ( (char *)v15 == (char *)CHwndRenderTarget::IsOfType )
    v16 = CHwndRenderTarget::IsOfType(v12, 38LL);
  else
    v16 = v15(v12, 38LL);
  if ( v16 && v7 < a2 )
  {
    v11 = a3[v6];
    v6 = (unsigned int)(v6 + 1);
  }
  LOBYTE(v17) = *((_BYTE *)this + 110);
  v18 = (CHwndRenderTarget *)(v12 + 14);
  v19 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, unsigned int))(v12[14] + 72LL);
  if ( v19 == CHwndRenderTarget::Present )
    v20 = CHwndRenderTarget::Present(v18, v17, v11);
  else
    v20 = v19(v18, v17, v11);
  v3 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x22Cu);
  v21 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
  if ( (char *)v21 == (char *)CHwndRenderTarget::IsOfType )
    v22 = CHwndRenderTarget::IsOfType(v12, 38LL);
  else
    v22 = v21(v12, 38LL);
  if ( v22 )
  {
    v24 = v12[92];
    if ( v24 )
    {
      v25 = v47;
      if ( *(_BYTE *)(v24 + 1086) )
        v25 = 1;
      v47 = v25;
    }
  }
  v26 = v44;
  if ( v3 == 142213130 )
    v26 = 1;
  v44 = v26;
  if ( v3 == -2003304442 || v3 == -2003304307 )
    goto LABEL_58;
  if ( v3 )
  {
    if ( v3 == 142213121 )
    {
      v27 = 2;
      goto LABEL_28;
    }
    if ( v3 != 142213130 )
    {
LABEL_58:
      v27 = 1;
      goto LABEL_28;
    }
  }
  v27 = 3;
LABEL_28:
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v27, v23);
  if ( v3 >= 0 )
    goto LABEL_29;
  if ( v3 != -2147024769 && v3 != -2147024882 && !IsOOM(v3) )
  {
    if ( v3 == -2003304442 || v3 == -2003304307 )
      v3 = 0;
    else
      MilUnexpectedError(v40, L"presentation error");
  }
  if ( v3 >= 0 )
    goto LABEL_29;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x23Du);
  v5 = v47;
  v4 = v44;
LABEL_34:
  v30 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 110) = 0;
  v31 = v5 == 0;
  v32 = *(_QWORD *)(v30 + 352);
  if ( *((_DWORD *)this + 12) )
  {
    v33 = *((unsigned int *)this + 12);
    v34 = 0LL;
    do
    {
      LOBYTE(v29) = v31;
      v35 = (CHwndRenderTarget *)(*(_QWORD *)(v34 + *((_QWORD *)this + 3)) + 112LL);
      v36 = *(void (__fastcall **)(CHwndRenderTarget *__hidden, unsigned __int64, bool))(*(_QWORD *)v35 + 80LL);
      if ( v36 == CHwndRenderTarget::AdvanceFrame )
        CHwndRenderTarget::AdvanceFrame(v35, v32, v31);
      else
        v36(v35, v32, v29);
      v34 += 8LL;
      --v33;
    }
    while ( v33 );
    v4 = v44;
  }
  v37 = CD3DDeviceManager::HandleAdvanceFrame(v28, v32, v31);
  v38 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x4EFu);
    v41 = CRenderTargetManager::HandlePresentErrors(this, v38);
    v42 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x258u);
    if ( !v3 || v3 >= 0 && v42 < 0 )
      v3 = v42;
  }
  if ( v4 )
    return 142213130;
  return (unsigned int)v3;
}
