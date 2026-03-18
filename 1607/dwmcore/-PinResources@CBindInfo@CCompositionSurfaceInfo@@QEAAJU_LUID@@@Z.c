/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801523F0
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x18012CEFC (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172D4C (-PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::PinResources(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned __int64 v2; // rbp
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rsi
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rax
  __int64 i; // rsi
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v2 = *((unsigned int *)this + 14);
  v3 = 0;
  if ( (_DWORD)v2 && a2 == *((_QWORD *)this + 16) )
  {
    if ( *((_BYTE *)this + 172) )
      return (unsigned int)v3;
    v5 = 8 * v2;
    if ( !is_mul_ok(v2, 8uLL) )
      v5 = -1LL;
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           v5);
    *((_QWORD *)this + 22) = v6;
    if ( v6 )
    {
      *((_DWORD *)this + 46) = 0;
      v7 = 0;
      v8 = 0LL;
      while ( 1 )
      {
        v9 = *(_DWORD **)(v8 + *((_QWORD *)this + 4));
        if ( !v9[68] )
        {
          v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 80LL))(
                  v9,
                  *((_QWORD *)this + 22) + 8LL * *((unsigned int *)this + 46),
                  0LL);
          v3 = v10;
          if ( v10 < 0 )
          {
            v16 = 1187;
            goto LABEL_17;
          }
          if ( *(_QWORD *)(v8 + *((_QWORD *)this + 22)) )
            ++*((_DWORD *)this + 46);
        }
        ++v7;
        v8 += 8LL;
        if ( v7 >= (unsigned int)v2 )
        {
          if ( !*((_DWORD *)this + 46) )
          {
            v3 = -2147467259;
            MilInstrumentationCheckHR(0x14u, &dword_1801C77A0, 2u, -2147467259, 0x4B0u);
            goto LABEL_25;
          }
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL))(*(_QWORD *)(*(_QWORD *)this + 24LL));
          v10 = CD3DDeviceManager::PinResources(
                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                  (const struct _GUID *)(v12 + 252),
                  *(struct _LUID *)((char *)this + 128),
                  *((struct IDXGIResource ***)this + 22),
                  *((_DWORD *)this + 46));
          v3 = v10;
          if ( v10 >= 0 )
          {
            *((_BYTE *)this + 172) = 1;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              Template_x(
                *(unsigned int *)(*(_QWORD *)this + 40LL),
                &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
                *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
            goto LABEL_24;
          }
          v16 = 1208;
LABEL_17:
          v11 = v10;
          goto LABEL_23;
        }
      }
    }
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801C77A0, 2u, -2147024882, 0x492u);
    goto LABEL_25;
  }
  v3 = -2003292412;
  v16 = 1216;
  v11 = -2003292412;
LABEL_23:
  MilInstrumentationCheckHR(0x14u, &dword_1801C77A0, 2u, v11, v16);
LABEL_24:
  if ( v3 < 0 )
  {
LABEL_25:
    if ( *((_QWORD *)this + 22) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * i);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( *((_QWORD *)this + 22) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        *((_QWORD *)this + 22) = 0LL;
      }
      *((_DWORD *)this + 46) = 0;
    }
  }
  return (unsigned int)v3;
}
