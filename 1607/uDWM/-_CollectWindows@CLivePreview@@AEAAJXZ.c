/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180073B90
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007431C (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800744DC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CLivePreview *v5; // rcx
  struct _LIST_ENTRY *v6; // r13
  __int64 Blink; // rbx
  unsigned int v8; // r15d
  bool IsTrulyMaximized; // r12
  HMONITOR v10; // rax
  bool v11; // cf
  CLivePreview *v12; // rcx
  const wchar_t **v13; // rsi
  bool v14; // di
  bool v15; // zf
  char v16; // al
  char v17; // al
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // r8
  char v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  int v30; // edi
  _QWORD v32[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h]
  unsigned int v34; // [rsp+58h] [rbp-B0h]
  __m256i v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  struct tagRECT rcDst; // [rsp+88h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  v3 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           *((_QWORD *)this + 34));
  *((_QWORD *)this + 69) = 0LL;
  v6 = WindowListForDesktop;
  v33 = 0LL;
  *(_OWORD *)&v32[1] = 0LL;
  Blink = (__int64)WindowListForDesktop->Blink;
  v8 = 0;
  v34 = 0;
  if ( (struct _LIST_ENTRY *)Blink == WindowListForDesktop )
    goto LABEL_68;
  while ( 1 )
  {
    if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v5, (const struct CWindowData *)Blink) )
      goto LABEL_64;
    *(_BYTE *)(Blink + 578) &= 0x3Fu;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v5, (const struct CWindowData *)Blink);
    v10 = MonitorFromWindow(*(HWND *)(Blink + 40), 0);
    v11 = *((_DWORD *)this + 138) < 0x1Eu;
    v32[0] = v10;
    if ( !v11 )
    {
      *(_BYTE *)(Blink + 578) |= 0xC0u;
      goto LABEL_57;
    }
    if ( !IsTrulyMaximized )
    {
      if ( GetClassNameW(*(HWND *)(Blink + 40), ClassName, 260) )
      {
        v13 = (const wchar_t **)&off_1800A18C0;
        while ( _wcsicmp(*v13, ClassName) )
        {
          ++v2;
          ++v13;
          if ( v2 >= 3 )
            goto LABEL_19;
        }
        *(_BYTE *)(Blink + 578) |= 0xC0u;
      }
LABEL_19:
      if ( (*(_BYTE *)(Blink + 578) & 0x40) != 0 )
        goto LABEL_28;
      v14 = *(char *)(Blink + 104) < 0;
      if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
      {
        if ( *(_QWORD *)(Blink + 528) )
          goto LABEL_26;
        v15 = (*(_DWORD *)(Blink + 100) & 0x40000000) == 0;
      }
      else
      {
        if ( *(_QWORD *)(Blink + 352) )
          goto LABEL_26;
        v15 = (*(_DWORD *)(Blink + 100) & 0xC00000) == 12582912;
      }
      if ( v15 )
      {
LABEL_27:
        *(_BYTE *)(Blink + 578) &= ~0x40u;
        *(_BYTE *)(Blink + 578) |= v14 << 6;
        goto LABEL_28;
      }
LABEL_26:
      v14 = 1;
      goto LABEL_27;
    }
    if ( !v10 )
      goto LABEL_10;
    if ( *((_DWORD *)this + 78) )
    {
      while ( 1 )
      {
        v12 = (CLivePreview *)*((_QWORD *)this + 36);
        if ( *((_QWORD *)v12 + 5 * v2 + 4) == v32[0]
          && CLivePreview::_IsTrulyMaximized(v12, *((const struct CWindowData **)v12 + 5 * v2)) )
        {
          break;
        }
        if ( ++v2 >= *((_DWORD *)this + 78) )
          goto LABEL_28;
      }
LABEL_10:
      *(_BYTE *)(Blink + 578) |= 0xC0u;
    }
LABEL_28:
    v16 = *(_BYTE *)(Blink + 578);
    if ( v16 < 0 && (v16 & 0x40) != 0 )
    {
      v2 = 0;
    }
    else
    {
      ++*((_DWORD *)this + 138);
      v17 = *(_BYTE *)(Blink + 578);
      if ( v17 >= 0 )
      {
        v18 = *((_DWORD *)this + 139);
        if ( v18 >= 0xA )
        {
          *(_BYTE *)(Blink + 578) = v17 | 0x80;
        }
        else
        {
          v19 = 0;
          *((_DWORD *)this + 139) = v18 + 1;
          if ( *((_DWORD *)this + 78) )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)(*((_QWORD *)this + 36) + 40LL * v19);
              if ( *(char *)(v20 + 578) >= 0
                && *(_DWORD *)(v20 + 112) == 1
                && IntersectRect(&rcDst, (const RECT *)(Blink + 48), (const RECT *)(v20 + 48))
                && EqualRect(&rcDst, (const RECT *)(Blink + 48)) )
              {
                break;
              }
              if ( ++v19 >= *((_DWORD *)this + 78) )
                goto LABEL_41;
            }
            --*((_DWORD *)this + 139);
            *(_BYTE *)(Blink + 578) |= 0x80u;
          }
        }
      }
LABEL_41:
      v21 = *(_BYTE *)(Blink + 578);
      v2 = 0;
      if ( (v21 & 0x40) == 0 && ((*(_DWORD *)(Blink + 112) - 8) & 0xFFFFFFFD) == 0 )
      {
        v22 = 0;
        if ( !v8 )
          goto LABEL_48;
        do
        {
          if ( v32[0] == *(_QWORD *)(v32[1] + 8LL * v22) )
            break;
          ++v22;
        }
        while ( v22 < v8 );
        if ( v22 < v8 )
        {
          *(_BYTE *)(Blink + 578) = v21 | 0x40;
        }
        else
        {
LABEL_48:
          v23 = v8 + 1;
          if ( v8 + 1 >= v8 )
          {
            if ( v23 > HIDWORD(v33) )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v32[1], 8u, 1, v32);
              if ( v25 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xC0u);
              v8 = v34;
            }
            else
            {
              v24 = v8++;
              v34 = v23;
              *(_QWORD *)(v32[1] + 8 * v24) = v32[0];
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
      }
    }
LABEL_57:
    v36 = v32[0];
    v26 = *((unsigned int *)this + 78);
    v35.m256i_i64[0] = Blink;
    *(_OWORD *)&v35.m256i_u64[1] = 0LL;
    v35.m256i_i8[24] = IsTrulyMaximized;
    v27 = v26 + 1;
    if ( (int)v26 + 1 < (unsigned int)v26 )
      break;
    v3 = 0;
    if ( v27 > *((_DWORD *)this + 77) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 0x28u, 1, &v35);
      v30 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0xC0u);
      v3 = v30;
      if ( v30 < 0 )
        goto LABEL_67;
      v2 = 0;
    }
    else
    {
      v5 = (CLivePreview *)(5 * v26);
      v28 = *((_QWORD *)this + 36);
      *(__m256i *)(v28 + 8LL * (_QWORD)v5) = v35;
      *(_QWORD *)(v28 + 8LL * (_QWORD)v5 + 32) = v36;
      *((_DWORD *)this + 78) = v27;
    }
LABEL_64:
    Blink = *(_QWORD *)(Blink + 8);
    if ( (struct _LIST_ENTRY *)Blink == v6 )
      goto LABEL_68;
  }
  v30 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_67:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x152u);
LABEL_68:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v32[1]);
  return v3;
}
