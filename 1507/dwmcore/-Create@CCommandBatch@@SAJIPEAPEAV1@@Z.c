/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650
 * Callers:
 *     ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18004E490 (-MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800500A0 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031330 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1800DEC28 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *, size_t); // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  _QWORD *v8; // rax
  void *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rax
  void (__fastcall *v12)(WPF::ProcessHeapImpl *, void *); // rbp
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // edx

  v3 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v4 = (_QWORD *)v3(WPF::g_pProcessHeap, 56LL);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = v4;
    v6 = 0;
    *v4 = v4;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 12) = 8;
    v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v7 == WPF::ProcessHeapImpl::Alloc )
      v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x1024uLL);
    else
      v8 = (_QWORD *)v7(WPF::g_pProcessHeap, 4132LL);
    v9 = v8;
    if ( v8 )
    {
      v8[1] = 0LL;
      v8[2] = 0LL;
      *v8 = &CDataStreamBlock::`vftable';
      v8[3] = 4096LL;
      v10 = *((_DWORD *)v5 + 6);
      if ( v10 + 4132 < v10 )
      {
        *((_DWORD *)v5 + 6) = -1;
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1EFu);
      }
      else
      {
        *((_DWORD *)v5 + 6) = v10 + 4132;
        v11 = v5[2];
        if ( v11 )
        {
          v14 = (_QWORD *)v5[1];
          v15 = (_QWORD *)(v11 + 8);
          *v15 = v5;
          v15[1] = v14;
          if ( (_QWORD *)*v14 != v5 )
            __fastfail(3u);
          *v14 = v15;
          v5[1] = v15;
        }
        v5[2] = v9;
        v9 = 0LL;
      }
    }
    else
    {
      v9 = 0LL;
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1ECu);
    }
    v12 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v12 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v9);
    else
      v12(WPF::g_pProcessHeap, v9);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x142u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x28u);
      CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v5, v16);
    }
    else
    {
      *a2 = (struct CCommandBatch *)v5;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x26u);
  }
  return (unsigned int)v6;
}
