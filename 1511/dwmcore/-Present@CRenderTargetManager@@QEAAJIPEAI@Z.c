/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18009DFE8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18007B964 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18013EF28 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  int v3; // esi
  char v4; // di
  int v5; // ebp
  unsigned int v6; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // r14d
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(_QWORD, __int64); // rbx
  char v13; // al
  __int64 (__fastcall *v14)(_QWORD *, __int64); // rbx
  char v15; // al
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(CHwndRenderTarget *__hidden, bool, unsigned int); // rsi
  int v18; // eax
  __int64 (__fastcall *v19)(_QWORD *, __int64); // rbx
  char v20; // al
  __int64 v21; // rax
  char v22; // cl
  char v23; // r14
  __int64 v24; // rdx
  int v25; // ecx
  CD3DDeviceManager *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // r14
  int v32; // eax
  int v33; // ebx
  char v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+34h] [rbp-64h]
  unsigned int v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+A0h] [rbp+8h]
  int v42; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v35 = 0;
  v5 = 0;
  v39 = 0;
  v6 = 0;
  v36 = 0;
  v37 = *((_DWORD *)this + 12);
  v8 = 2;
  if ( v37 )
  {
    v9 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      v10 = 0;
      v11 = *(_QWORD **)(v9 + *((_QWORD *)this + 3));
      v12 = *(__int64 (__fastcall **)(_QWORD, __int64))(*v11 + 48LL);
      if ( v12 == CHwndRenderTarget::IsOfType )
        v13 = CHwndRenderTarget::IsOfType(*(_QWORD *)(v9 + *((_QWORD *)this + 3)), 37LL);
      else
        v13 = v12(*(_QWORD *)(v9 + *((_QWORD *)this + 3)), 37LL);
      if ( !v13
        && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 53LL)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 44LL)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 42LL) )
      {
        goto LABEL_49;
      }
      v14 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL);
      if ( (char *)v14 == (char *)CHwndRenderTarget::IsOfType )
        v15 = CHwndRenderTarget::IsOfType(v11, 37LL);
      else
        v15 = v14(v11, 37LL);
      if ( v15 && v6 < a2 )
      {
        v36 = v5 + 1;
        v10 = a3[v5];
      }
      v17 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, unsigned int))(v11[5] + 72LL);
      if ( v17 == CHwndRenderTarget::Present )
      {
        v18 = CHwndRenderTarget::Present((CHwndRenderTarget *)(v11 + 5), *((_BYTE *)this + 110), v10);
      }
      else
      {
        LOBYTE(v16) = *((_BYTE *)this + 110);
        v18 = v17((CHwndRenderTarget *)(v11 + 5), v16, v10);
      }
      v42 = v18;
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1F6u);
      v19 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL);
      if ( (char *)v19 == (char *)CHwndRenderTarget::IsOfType )
        v20 = CHwndRenderTarget::IsOfType(v11, 37LL);
      else
        v20 = v19(v11, 37LL);
      if ( v20 )
      {
        v21 = v11[68];
        if ( v21 )
        {
          v22 = v39;
          if ( *(_BYTE *)(v21 + 838) )
            v22 = 1;
          v39 = v22;
        }
      }
      v23 = v35;
      if ( v3 == 142213130 )
        v23 = 1;
      v35 = v23;
      if ( v3 == -2003304442 || v3 == -2003304307 )
      {
LABEL_36:
        v24 = 1LL;
        goto LABEL_37;
      }
      if ( v3 )
      {
        if ( v3 == 142213121 )
        {
          v24 = 2LL;
          goto LABEL_37;
        }
        if ( v3 != 142213130 )
          goto LABEL_36;
      }
      v24 = 3LL;
LABEL_37:
      CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v24);
      if ( v3 < 0 )
      {
        if ( v3 != -2147024769 && v3 != -2147024882 && !IsOOM(v3) )
        {
          if ( v3 == -2003304442 || v3 == -2003304307 )
          {
            v3 = 0;
            v42 = 0;
          }
          else
          {
            MilUnexpectedError(v25, L"presentation error");
          }
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x207u);
          v4 = v39;
          goto LABEL_58;
        }
      }
      v5 = v36;
LABEL_49:
      v9 = v38 + 8;
      ++v6;
      v38 += 8LL;
      if ( v6 >= v37 )
      {
        v4 = v39;
        break;
      }
    }
  }
  if ( !v3 )
  {
LABEL_54:
    v8 = 3;
    goto LABEL_57;
  }
  if ( v3 != 142213121 )
  {
    if ( v3 != 142213130 )
    {
      v8 = 1;
      goto LABEL_57;
    }
    goto LABEL_54;
  }
LABEL_57:
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v8);
  v42 = v3;
LABEL_58:
  v28 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 110) = 0;
  v29 = *(_QWORD *)(v28 + 352);
  if ( *((_DWORD *)this + 12) )
  {
    v30 = *((unsigned int *)this + 12);
    v31 = 0LL;
    do
    {
      LOBYTE(v27) = v4 == 0;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v31 + *((_QWORD *)this + 3)) + 40LL)
                                                        + 88LL))(
        *(_QWORD *)(v31 + *((_QWORD *)this + 3)) + 40LL,
        v29,
        v27);
      v31 += 8LL;
      --v30;
    }
    while ( v30 );
    v3 = v42;
  }
  v32 = CD3DDeviceManager::HandleAdvanceFrame(v26, v29, v4 == 0);
  v33 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x507u);
    CRenderTargetManager::HandlePresentErrors(this, v33);
    v3 = v33;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x223u);
  }
  if ( v35 )
    return 142213130;
  return (unsigned int)v3;
}
