/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007B250
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800B6448 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x1800FB654 (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2, __int64 a3)
{
  int v3; // ebp
  int v4; // r12d
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  char *v9; // rdi
  __int64 v10; // rsi
  char v11; // bp
  __int64 v12; // r14
  __int64 (__fastcall *v13)(CHwndRenderTarget *__hidden, bool, bool *); // r15
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax
  __int64 v19; // rsi
  unsigned int v20; // edx
  __int64 *v21; // r9
  __int64 v22; // xmm0_8
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned int v30; // edx
  __int64 *v31; // r9
  __int64 v32; // xmm0_8
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edi
  unsigned int v36; // eax
  const struct _TlgProvider_t *v37; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  __int128 v39; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+40h] [rbp-48h]
  unsigned int v41; // [rsp+48h] [rbp-40h]
  int v42; // [rsp+90h] [rbp+8h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+18h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v41 = 0;
  v6 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( *(int *)(*((_QWORD *)this + 2) + 1000LL) <= 2 || *((_BYTE *)this + 109) )
  {
    v9 = (char *)this + 24;
    goto LABEL_3;
  }
  v19 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v20 = v5 + 1;
      v21 = (__int64 *)(*((_QWORD *)this + 9) + 8 * v19);
      if ( v5 + 1 < v5 )
        break;
      v3 = 0;
      if ( v20 > v6 )
      {
        v24 = DynArrayImpl<1>::AddMultipleAndSet(&v39, 8LL, a3, v21);
        v25 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
        v3 = v25;
        if ( v25 < 0 )
          goto LABEL_36;
        v5 = v41;
        v6 = HIDWORD(v40);
      }
      else
      {
        v22 = *v21;
        v23 = v5++;
        v41 = v20;
        *(_QWORD *)(v39 + 8 * v23) = v22;
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= *((_DWORD *)this + 24) )
        goto LABEL_30;
    }
    v25 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v25, 0xBDu);
    goto LABEL_14;
  }
LABEL_30:
  v26 = 0LL;
  v42 = 0;
  if ( !*((_DWORD *)this + 12) )
  {
LABEL_42:
    v9 = (char *)&v39;
    *a2 = *((_BYTE *)this + 108);
    *((_BYTE *)this + 108) = 0;
LABEL_3:
    v10 = 0LL;
    if ( *((_DWORD *)v9 + 6) )
    {
      do
      {
        v11 = *((_BYTE *)this + 110);
        v12 = *(_QWORD *)(*(_QWORD *)v9 + 8 * v10);
        LOBYTE(v42) = 0;
        v13 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, bool *))(*(_QWORD *)(v12 + 40) + 56LL);
        if ( v13 == CHwndRenderTarget::Render )
          v14 = CHwndRenderTarget::Render((CHwndRenderTarget *)(v12 + 40), v11, (bool *)&v42);
        else
          v14 = v13((CHwndRenderTarget *)(v12 + 40), v11, (bool *)&v42);
        v16 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v14, 0xD2u);
        v3 = v16;
        if ( v16 < 0 )
        {
          v36 = CComposition::RenderingStatusFromHr(v15, (unsigned int)v16);
          CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v36);
          if ( v16 == -2147024882 || IsOOM(v16) )
          {
            Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v37);
            DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
              Manager,
              L"RenderTarget",
              L"Render: Encountered low memory condition",
              v16);
          }
          else if ( v16 == -2003304442 || v16 == -2003304307 )
          {
            v3 = 0;
            v4 = v16;
          }
          else
          {
            MilUnexpectedErrorWithAsimovEvent((int)v37, L"intermediate rendering error");
          }
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v3, 0xE1u);
          goto LABEL_14;
        }
        *a2 |= v42;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *((_DWORD *)v9 + 6) );
      if ( v4 < 0 )
      {
        *((_DWORD *)this + 26) += 2;
        if ( *((_DWORD *)this + 26) > 0xAu )
          RaiseFailFastException(0LL, 0LL, 0);
      }
      else
      {
        v17 = *((_DWORD *)this + 26);
        if ( v17 )
          *((_DWORD *)this + 26) = v17 - 1;
      }
    }
    goto LABEL_14;
  }
  while ( 1 )
  {
    v27 = 8 * v26;
    v28 = *((_QWORD *)this + 3);
    v43 = v27;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + v28) + 136LL))(*(_QWORD *)(v27 + v28)) )
      goto LABEL_41;
    v30 = v5 + 1;
    v31 = (__int64 *)(*((_QWORD *)this + 3) + v43);
    if ( v5 + 1 < v5 )
      break;
    v3 = 0;
    if ( v30 > v6 )
    {
      v34 = DynArrayImpl<1>::AddMultipleAndSet(&v39, 8LL, v29, v31);
      v35 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
      v3 = v35;
      if ( v35 < 0 )
        goto LABEL_44;
      v5 = v41;
      v6 = HIDWORD(v40);
    }
    else
    {
      v32 = *v31;
      v33 = v5++;
      v41 = v30;
      *(_QWORD *)(v39 + 8 * v33) = v32;
    }
LABEL_41:
    v26 = (unsigned int)(v42 + 1);
    v42 = v26;
    if ( (unsigned int)v26 >= *((_DWORD *)this + 12) )
      goto LABEL_42;
  }
  v35 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_44:
  MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v35, 0xC4u);
LABEL_14:
  if ( !*((_DWORD *)this + 14) )
    *((_WORD *)this + 55) = 0;
  if ( (_QWORD)v39 != *((_QWORD *)&v39 + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v39);
  return (unsigned int)v3;
}
