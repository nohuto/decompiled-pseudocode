/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18008D248 (-IsOOM@@YA_NJ@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x18008DD30 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x1800DE5CC (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  bool *v5; // r13
  __int64 v6; // rdx
  int v7; // r14d
  unsigned int v8; // r15d
  bool v9; // cc
  char *v11; // rdi
  __int64 v12; // r15
  char v13; // r12
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(CHwndRenderTarget *__hidden, bool, bool *); // r14
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // eax
  __int64 v21; // rdi
  __int64 *v22; // r9
  __int64 v23; // xmm0_8
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // r8
  __int64 *v29; // r9
  __int64 v30; // xmm0_8
  __int64 v31; // rcx
  int v32; // r9d
  int v33; // eax
  char v34; // al
  unsigned int v35; // eax
  const struct _TlgProvider_t *v36; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  unsigned int v38; // [rsp+20h] [rbp-30h]
  __int128 v39; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+40h] [rbp-10h]
  unsigned int v41; // [rsp+48h] [rbp-8h]
  bool v42; // [rsp+90h] [rbp+40h] BYREF
  bool *v43; // [rsp+98h] [rbp+48h]
  unsigned int v44; // [rsp+A0h] [rbp+50h]

  v43 = a2;
  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  v5 = a2;
  v41 = 0;
  v6 = 0LL;
  v7 = 0;
  v40 = 0LL;
  v8 = 0;
  v9 = *(_DWORD *)(v3 + 1032) <= 2;
  v44 = 0;
  v39 = 0LL;
  if ( v9 || *((_BYTE *)this + 116) )
  {
    v11 = (char *)this + 24;
    goto LABEL_3;
  }
  v21 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v6 = v8 + 1;
      v22 = (__int64 *)(*((_QWORD *)this + 9) + 8 * v21);
      if ( (unsigned int)v6 < v8 )
        break;
      v7 = 0;
      if ( (unsigned int)v6 > v4 )
      {
        v25 = DynArrayImpl<1>::AddMultipleAndSet(&v39, 8LL, a3, v22);
        v26 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
        v7 = v26;
        if ( v26 < 0 )
          goto LABEL_36;
        v8 = v41;
        v4 = HIDWORD(v40);
      }
      else
      {
        v23 = *v22;
        v24 = v8++;
        v41 = v6;
        *(_QWORD *)(v39 + 8 * v24) = v23;
      }
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= *((_DWORD *)this + 24) )
        goto LABEL_30;
    }
    v26 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_36:
    v38 = 186;
    goto LABEL_39;
  }
LABEL_30:
  v27 = 0LL;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_45:
    v34 = *((_BYTE *)this + 104);
    v11 = (char *)&v39;
    v5 = v43;
    *((_BYTE *)this + 104) = 0;
    *v5 = v34;
LABEL_3:
    v12 = 0LL;
    if ( !*((_DWORD *)v11 + 6) )
      goto LABEL_15;
    while ( 1 )
    {
      v13 = *((_BYTE *)this + 117);
      v14 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v12);
      v42 = 0;
      v15 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, bool *))(*(_QWORD *)(v14 + 40) + 56LL);
      if ( v15 == CHwndRenderTarget::Render )
      {
        v16 = CHwndRenderTarget::Render((CHwndRenderTarget *)(v14 + 40), v13, &v42);
      }
      else
      {
        LOBYTE(v6) = v13;
        v16 = v15((CHwndRenderTarget *)(v14 + 40), v6, &v42);
      }
      v18 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v16, 0xCFu);
      v7 = v18;
      if ( v18 < 0 )
      {
        v35 = CComposition::RenderingStatusFromHr(v17, (unsigned int)v18);
        CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v35);
        if ( v18 == -2147024882 || IsOOM(v18) )
        {
          Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v36);
          DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
            Manager,
            L"RenderTarget",
            L"Render: Encountered low memory condition",
            v18);
        }
        else
        {
          if ( v18 == -2003304442 || v18 == -2003304307 )
          {
            v7 = 0;
            v44 = v18;
            v6 = (unsigned int)v18;
            goto LABEL_10;
          }
          MilUnexpectedErrorWithAsimovEvent((int)v36, L"intermediate rendering error");
        }
      }
      v6 = v44;
LABEL_10:
      if ( v7 < 0 )
      {
        v38 = 222;
        v32 = v7;
        goto LABEL_57;
      }
      v12 = (unsigned int)(v12 + 1);
      *v5 |= v42;
      if ( (unsigned int)v12 >= *((_DWORD *)v11 + 6) )
      {
        if ( (int)v6 < 0 )
        {
          *((_DWORD *)this + 28) += 2;
          if ( *((_DWORD *)this + 28) > 0xAu )
            RaiseFailFastException(0LL, 0LL, 0);
        }
        else
        {
          v19 = *((_DWORD *)this + 28);
          if ( v19 )
            *((_DWORD *)this + 28) = v19 - 1;
        }
        goto LABEL_15;
      }
    }
  }
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v27) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v27)) )
      goto LABEL_44;
    v6 = v8 + 1;
    v29 = (__int64 *)(*((_QWORD *)this + 3) + 8 * v27);
    if ( (unsigned int)v6 < v8 )
      break;
    v7 = 0;
    if ( (unsigned int)v6 > v4 )
    {
      v33 = DynArrayImpl<1>::AddMultipleAndSet(&v39, 8LL, v28, v29);
      v26 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC0u);
      v7 = v26;
      if ( v26 < 0 )
        goto LABEL_38;
      v8 = v41;
      v4 = HIDWORD(v40);
    }
    else
    {
      v30 = *v29;
      v31 = v8++;
      v41 = v6;
      *(_QWORD *)(v39 + 8 * v31) = v30;
    }
LABEL_44:
    v27 = (unsigned int)(v27 + 1);
    if ( (unsigned int)v27 >= *((_DWORD *)this + 12) )
      goto LABEL_45;
  }
  v26 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v7 = -2147024362;
LABEL_38:
  v38 = 193;
LABEL_39:
  v32 = v26;
LABEL_57:
  MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v32, v38);
LABEL_15:
  if ( !*((_DWORD *)this + 14) )
    *(_WORD *)((char *)this + 117) = 0;
  if ( (_QWORD)v39 != *((_QWORD *)&v39 + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v39);
  return (unsigned int)v7;
}
