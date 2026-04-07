/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800385F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x180050552 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  struct CWindowData *v5; // rsi
  int v6; // ebp
  struct CWindowData *v7; // rbx
  int v8; // edi
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  int v13; // r15d
  int v14; // r12d
  int v15; // r13d
  int v16; // eax
  CVisual *v18; // rcx
  CWindowIconic *v19; // rcx
  unsigned int i; // ebx
  CThumbnailVisual *v21; // rcx
  CThumbnailVisual *v22; // rcx
  __int64 v23; // rax
  CWindowData *v24; // rax
  CWindowData *v25; // rax
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-58h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v24 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1232LL);
  if ( !v24 || (v25 = CWindowData::CWindowData(v24), (v7 = v25) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    goto LABEL_34;
  }
  *((_QWORD *)v25 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v25);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v26 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v26;
  if ( v26 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x56Eu);
  if ( v6 < 0 )
  {
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x848u);
    goto LABEL_10;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 112LL))(a2, (__int64)v5 + 236);
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 120LL))(a2);
    v9 = *((float *)v5 + 43);
    v10 = (float)*((int *)v5 + 59);
    *((_DWORD *)v5 + 67) = v8;
    LODWORD(v27) = (int)ceilf_0(v10 * v9);
    v11 = ceilf_0((float)*((int *)v5 + 60) * v9);
    v12 = *((float *)v5 + 44);
    v13 = (int)v11;
    DWORD1(v27) = (int)v11;
    v14 = (int)ceilf_0((float)*((int *)v5 + 61) * v12);
    DWORD2(v27) = v14;
    v15 = (int)ceilf_0((float)*((int *)v5 + 62) * v12);
    HIDWORD(v27) = v15;
    v16 = (int)ceilf_0((float)v8 * v9);
    if ( *((_DWORD *)v5 + 16) != (_DWORD)v27
      || *((_DWORD *)v5 + 17) != v13
      || *((_DWORD *)v5 + 18) != v14
      || *((_DWORD *)v5 + 19) != v15
      || *((_DWORD *)v5 + 24) != v16 )
    {
      v18 = (CVisual *)*((_QWORD *)v5 + 48);
      *((_DWORD *)v5 + 24) = v16;
      *((_OWORD *)v5 + 4) = v27;
      if ( v18 )
        CVisual::SetDirtyFlags(v18, 0x2000);
      v19 = (CWindowIconic *)*((_QWORD *)v5 + 52);
      if ( v19 )
        CWindowIconic::UpdateSizeOrMargins(v19, 0);
      for ( i = 0; i < *((_DWORD *)v5 + 130); ++i )
      {
        v22 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 62) + 8LL * i) + 88LL);
        if ( v22 )
        {
          v23 = *((_QWORD *)v22 + 44);
          if ( v23 )
          {
            if ( *(_DWORD *)(v23 + 77) )
              CThumbnailVisual::SetDirtyFlags(v22, 0x4000);
          }
        }
      }
      if ( *((_DWORD *)v5 + 122) )
      {
        do
        {
          v21 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 58) + 8LL * v4) + 88LL);
          if ( v21 )
            CThumbnailVisual::SetDirtyFlags(v21, 4096);
          ++v4;
        }
        while ( v4 < *((_DWORD *)v5 + 122) );
      }
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
