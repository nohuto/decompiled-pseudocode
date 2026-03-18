/*
 * XREFs of ?Create@CChannelContext@@SAJIKPEAVCConnection@@PEAPEAV1@@Z @ 0x1800B45E4
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK@Z @ 0x18003BA24 (-OpenChannel@CComposition@@IEAAJIK@Z.c)
 * Callees:
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x180039470 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::Create(int a1, int a2, struct CConnection *a3, struct CChannelContext **a4)
{
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rdi

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v9 )
  {
    *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v9 = &CChannelContext::`vftable';
    *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 32) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_DWORD *)(v9 + 68) = 0;
    *(_DWORD *)(v9 + 72) = 0;
    *(_DWORD *)(v9 + 76) = 0;
    *(_DWORD *)(v9 + 16) = a1;
    *(_DWORD *)(v9 + 20) = a2;
    *(_DWORD *)(v9 + 8) = 1;
  }
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            72LL);
    v12 = (void (__fastcall ***)(_QWORD))v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v11 = &CResourceTable::`vftable';
      *(_DWORD *)(v11 + 8) = 0;
      *(_DWORD *)(v11 + 28) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 16) = &HANDLE_TABLE::`vftable';
      *(_DWORD *)(v11 + 32) = 1;
      *(_DWORD *)(v11 + 24) = 16;
      *(_DWORD *)(v11 + 48) = a1;
      *(_QWORD *)(v11 + 64) = v11 + 56;
      *(_QWORD *)(v11 + 56) = v11 + 56;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      (**v12)(v12);
      *(_QWORD *)(v9 + 24) = v12;
      *a4 = (struct CChannelContext *)v9;
      v9 = 0LL;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28u);
    }
    if ( v9 )
      CChannelContext::`vector deleting destructor'((CChannelContext *)v9, 1);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x25u);
  }
  return v8;
}
