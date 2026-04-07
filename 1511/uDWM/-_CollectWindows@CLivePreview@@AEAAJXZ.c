/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180071D60
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180072504 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800726C4 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
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
  int v12; // r10d
  CLivePreview *v13; // rcx
  const wchar_t **v14; // rsi
  int v15; // eax
  char v16; // dl
  char v17; // r8
  bool v18; // zf
  char v19; // al
  char v20; // al
  unsigned int v21; // ecx
  unsigned int v22; // edi
  __int64 v23; // r8
  char v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  int v33; // edi
  _QWORD v35[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  unsigned int v37; // [rsp+58h] [rbp-B0h]
  __m256i v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h]
  struct tagRECT rcDst; // [rsp+88h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  v3 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           *((_QWORD *)this + 34));
  *((_QWORD *)this + 69) = 0LL;
  v6 = WindowListForDesktop;
  v36 = 0LL;
  *(_OWORD *)&v35[1] = 0LL;
  Blink = (__int64)WindowListForDesktop->Blink;
  v8 = 0;
  v37 = 0;
  if ( (struct _LIST_ENTRY *)Blink == WindowListForDesktop )
    goto LABEL_72;
  while ( 1 )
  {
    if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v5, (const struct CWindowData *)Blink) )
      goto LABEL_68;
    *(_BYTE *)(Blink + 570) &= 0x3Fu;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v5, (const struct CWindowData *)Blink);
    v10 = MonitorFromWindow(*(HWND *)(Blink + 40), 0);
    v11 = *((_DWORD *)this + 138) < 0x1Eu;
    v35[0] = v10;
    if ( !v11 )
    {
      *(_BYTE *)(Blink + 570) |= 0xC0u;
      goto LABEL_61;
    }
    if ( IsTrulyMaximized )
    {
      if ( v10 )
      {
        v12 = 1;
        if ( *((_DWORD *)this + 78) )
        {
          do
          {
            v13 = (CLivePreview *)*((_QWORD *)this + 36);
            if ( *((_QWORD *)v13 + 5 * v2 + 4) == v35[0] )
            {
              if ( CLivePreview::_IsTrulyMaximized(v13, *((const struct CWindowData **)v13 + 5 * v2)) )
                goto LABEL_14;
              v12 = 1;
            }
            ++v2;
          }
          while ( v2 < *((_DWORD *)this + 78) );
        }
      }
      else
      {
LABEL_14:
        *(_BYTE *)(Blink + 570) |= 0xC0u;
        v12 = 1;
      }
      goto LABEL_31;
    }
    if ( GetClassNameW(*(HWND *)(Blink + 40), ClassName, 260) )
    {
      v14 = (const wchar_t **)off_1800AC8C0;
      while ( 1 )
      {
        v15 = _wcsicmp(*v14, ClassName);
        v12 = 1;
        if ( !v15 )
          break;
        ++v2;
        ++v14;
        if ( v2 >= 3 )
          goto LABEL_22;
      }
      *(_BYTE *)(Blink + 570) |= 0xC0u;
    }
    else
    {
      v12 = 1;
    }
LABEL_22:
    if ( (*(_BYTE *)(Blink + 570) & 0x40) != 0 )
      goto LABEL_31;
    if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
    {
      if ( *(_QWORD *)(Blink + 520) )
        goto LABEL_29;
      v18 = (*(_DWORD *)(Blink + 100) & 0x40000000) == 0;
    }
    else
    {
      if ( *(_QWORD *)(Blink + 352) )
        goto LABEL_29;
      v18 = (*(_DWORD *)(Blink + 100) & 0xC00000) == 12582912;
    }
    if ( !v18 )
LABEL_29:
      v16 = v12;
    *(_BYTE *)(Blink + 570) = v17 ^ (v17 ^ (v16 << 6)) & 0x40;
LABEL_31:
    v19 = *(_BYTE *)(Blink + 570);
    if ( v19 < 0 && (v19 & 0x40) != 0 )
    {
      v2 = 0;
    }
    else
    {
      *((_DWORD *)this + 138) += v12;
      v20 = *(_BYTE *)(Blink + 570);
      if ( v20 < 0 )
        goto LABEL_45;
      v21 = *((_DWORD *)this + 139);
      if ( v21 < 0xA )
      {
        v22 = 0;
        *((_DWORD *)this + 139) = v21 + 1;
        if ( !*((_DWORD *)this + 78) )
          goto LABEL_45;
        while ( 1 )
        {
          v23 = *(_QWORD *)(*((_QWORD *)this + 36) + 40LL * v22);
          if ( *(char *)(v23 + 570) >= 0 && *(_DWORD *)(v23 + 112) == v12 )
          {
            if ( IntersectRect(&rcDst, (const RECT *)(Blink + 48), (const RECT *)(v23 + 48))
              && EqualRect(&rcDst, (const RECT *)(Blink + 48)) )
            {
              --*((_DWORD *)this + 139);
              v12 = 1;
              *(_BYTE *)(Blink + 570) |= 0x80u;
              goto LABEL_45;
            }
            v12 = 1;
          }
          v22 += v12;
          if ( v22 >= *((_DWORD *)this + 78) )
            goto LABEL_45;
        }
      }
      *(_BYTE *)(Blink + 570) = v20 | 0x80;
LABEL_45:
      v24 = *(_BYTE *)(Blink + 570);
      v2 = 0;
      if ( (v24 & 0x40) == 0 && ((*(_DWORD *)(Blink + 112) - 8) & 0xFFFFFFFD) == 0 )
      {
        v25 = 0;
        if ( !v8 )
          goto LABEL_52;
        do
        {
          if ( v35[0] == *(_QWORD *)(v35[1] + 8LL * v25) )
            break;
          v25 += v12;
        }
        while ( v25 < v8 );
        if ( v25 < v8 )
        {
          *(_BYTE *)(Blink + 570) = v24 | 0x40;
        }
        else
        {
LABEL_52:
          v26 = v8 + 1;
          if ( v8 + 1 >= v8 )
          {
            if ( v26 > HIDWORD(v36) )
            {
              v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v35[1], 8u, v12, v35);
              if ( v28 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0xC0u);
              v8 = v37;
            }
            else
            {
              v27 = v8++;
              v37 = v26;
              *(_QWORD *)(v35[1] + 8 * v27) = v35[0];
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
      }
    }
LABEL_61:
    v39 = v35[0];
    v29 = *((unsigned int *)this + 78);
    v38.m256i_i64[0] = Blink;
    *(_OWORD *)&v38.m256i_u64[1] = 0LL;
    v38.m256i_i8[24] = IsTrulyMaximized;
    v30 = v29 + 1;
    if ( (int)v29 + 1 < (unsigned int)v29 )
      break;
    v3 = 0;
    if ( v30 > *((_DWORD *)this + 77) )
    {
      v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 0x28u, 1, &v38);
      v33 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0xC0u);
      v3 = v33;
      if ( v33 < 0 )
        goto LABEL_71;
      v2 = 0;
    }
    else
    {
      v5 = (CLivePreview *)(5 * v29);
      v31 = *((_QWORD *)this + 36);
      *(__m256i *)(v31 + 8LL * (_QWORD)v5) = v38;
      *(_QWORD *)(v31 + 8LL * (_QWORD)v5 + 32) = v39;
      *((_DWORD *)this + 78) = v30;
    }
LABEL_68:
    Blink = *(_QWORD *)(Blink + 8);
    if ( (struct _LIST_ENTRY *)Blink == v6 )
      goto LABEL_72;
  }
  v33 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_71:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x152u);
LABEL_72:
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v35[1]);
  return v3;
}
