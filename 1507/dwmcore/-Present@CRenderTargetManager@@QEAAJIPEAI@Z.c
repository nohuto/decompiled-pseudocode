/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18006C51C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAXI_N@Z @ 0x18004B510 (-AdvanceFrame@CHwndRenderTarget@@UEAAXI_N@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18008D248 (-IsOOM@@YA_NJ@Z.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18009381C (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18012908C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r14
  int v5; // esi
  char v6; // r15
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned int v11; // r12d
  _QWORD *v12; // r15
  __int64 (__fastcall *v13)(_QWORD, __int64); // rdi
  char v14; // al
  __int64 (__fastcall *v15)(_QWORD *, __int64); // rdi
  char v16; // al
  char v17; // bp
  __int64 (__fastcall *v18)(CHwndRenderTarget *__hidden, bool, unsigned int); // rsi
  int v19; // eax
  __int64 (__fastcall *v20)(_QWORD *, __int64); // rdi
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  CD3DDeviceManager *v24; // rcx
  bool v25; // bp
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // r12d
  __int64 v29; // r15
  void (__fastcall *v30)(CHwndRenderTarget *__hidden, unsigned int, bool); // r13
  int v31; // eax
  int v32; // edi
  int v34; // ecx
  int v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+34h] [rbp-64h]
  unsigned int v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+A0h] [rbp+8h]
  char v42; // [rsp+B8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v42 = 0;
  v39 = 0;
  v7 = 0;
  v36 = 0;
  v8 = 1;
  v37 = *((_DWORD *)this + 12);
  v9 = 0;
  if ( !v37 )
  {
LABEL_29:
    if ( v5 )
    {
      if ( v5 == 142213121 )
      {
        v8 = 2;
        goto LABEL_31;
      }
      if ( v5 != 142213130 )
        goto LABEL_31;
    }
    v8 = 3;
LABEL_31:
    CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v8);
    v35 = v5;
    goto LABEL_32;
  }
  v10 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    v11 = 0;
    v12 = *(_QWORD **)(v10 + *((_QWORD *)this + 3));
    v13 = *(__int64 (__fastcall **)(_QWORD, __int64))(*v12 + 48LL);
    if ( v13 == CHwndRenderTarget::IsOfType )
      v14 = CHwndRenderTarget::IsOfType(*(_QWORD *)(v10 + *((_QWORD *)this + 3)), 36LL);
    else
      v14 = v13(*(_QWORD *)(v10 + *((_QWORD *)this + 3)), 36LL);
    if ( !v14
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 49LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 40LL) )
    {
      v6 = v39;
      goto LABEL_27;
    }
    v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
    if ( (char *)v15 == (char *)CHwndRenderTarget::IsOfType )
      v16 = CHwndRenderTarget::IsOfType(v12, 36LL);
    else
      v16 = v15(v12, 36LL);
    if ( v16 && v9 < a2 )
    {
      v36 = v7 + 1;
      v11 = a3[v7];
    }
    v17 = *((_BYTE *)this + 117);
    v18 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, unsigned int))(v12[5] + 72LL);
    if ( v18 == CHwndRenderTarget::Present )
      v19 = CHwndRenderTarget::Present((CHwndRenderTarget *)(v12 + 5), v17, v11);
    else
      v19 = v18((CHwndRenderTarget *)(v12 + 5), v17, v11);
    v35 = v19;
    v5 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1F2u);
    v20 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
    if ( (char *)v20 == (char *)CHwndRenderTarget::IsOfType )
      v21 = CHwndRenderTarget::IsOfType(v12, 36LL);
    else
      v21 = v20(v12, 36LL);
    if ( v21 && (v22 = v12[69]) != 0 && *(_BYTE *)(v22 + 822) )
    {
      v6 = 1;
      v39 = 1;
    }
    else
    {
      v6 = v39;
    }
    if ( v5 == 142213130 )
      v42 = 1;
    if ( v5 )
    {
      if ( v5 == 142213121 )
      {
        v23 = 2LL;
        goto LABEL_25;
      }
      if ( v5 != 142213130 )
      {
        v23 = 1LL;
        goto LABEL_25;
      }
    }
    v23 = 3LL;
LABEL_25:
    CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v23);
    if ( v5 < 0 )
    {
      if ( v5 != -2147024769 && v5 != -2147024882 && !IsOOM(v5) )
      {
        if ( v5 == -2003304442 || v5 == -2003304307 )
        {
          v5 = 0;
          v35 = 0;
        }
        else
        {
          MilUnexpectedError(v34, L"presentation error");
        }
      }
      if ( v5 < 0 )
        break;
    }
    v7 = v36;
LABEL_27:
    v10 = v38 + 8;
    ++v9;
    v38 += 8LL;
    if ( v9 >= v37 )
    {
      v8 = 1;
      goto LABEL_29;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x203u);
LABEL_32:
  if ( *((_BYTE *)this + 118) )
  {
    CRenderTargetManager::ForceFullRender(this);
    *((_BYTE *)this + 118) = 0;
  }
  *((_BYTE *)this + 117) = 0;
  v25 = v6 == 0;
  ++*((_DWORD *)this + 27);
  v26 = *((_DWORD *)this + 12);
  if ( v26 )
  {
    v27 = v26;
    do
    {
      v28 = *((_DWORD *)this + 27);
      v29 = *(_QWORD *)(v4 + *((_QWORD *)this + 3));
      v30 = *(void (__fastcall **)(CHwndRenderTarget *__hidden, unsigned int, bool))(*(_QWORD *)(v29 + 40) + 88LL);
      if ( v30 == CHwndRenderTarget::AdvanceFrame )
        CHwndRenderTarget::AdvanceFrame((CHwndRenderTarget *)(v29 + 40), v28, v25);
      else
        v30((CHwndRenderTarget *)(v29 + 40), v28, v25);
      v4 += 8LL;
      --v27;
    }
    while ( v27 );
    v5 = v35;
  }
  v31 = CD3DDeviceManager::HandleAdvanceFrame(v24, *((_DWORD *)this + 27), v25);
  v32 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x508u);
    CRenderTargetManager::HandlePresentErrors(this, v32);
    v5 = v32;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x22Cu);
  }
  if ( v42 )
    return 142213130LL;
  else
    return (unsigned int)v5;
}
