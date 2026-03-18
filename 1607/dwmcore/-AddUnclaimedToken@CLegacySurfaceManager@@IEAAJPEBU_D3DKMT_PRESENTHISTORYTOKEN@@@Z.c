/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180120220
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *v4; // rdi
  SIZE_T v5; // rdx
  int v6; // ebx
  __int64 (*v7)(void); // rax
  LPVOID v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  v4 = 0LL;
  v5 = *((unsigned int *)a2 + 1);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( (char *)v7 == (char *)WPF::ProcessHeapImpl::Alloc )
      v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v5);
    else
      v8 = (LPVOID)v7();
    v4 = v8;
    if ( !v8 )
      v6 = -2147024882;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8Au);
  }
  else
  {
    memcpy_0(v4, a2, *((unsigned int *)a2 + 1));
    v9 = (_QWORD *)((char *)this + 104);
    *((_QWORD *)&v14 + 1) = v4;
    v10 = *((unsigned int *)this + 32);
    v11 = v10 + 1;
    if ( (int)v10 + 1 >= (unsigned int)v10 )
    {
      v6 = 0;
      if ( v11 <= *((_DWORD *)this + 31) )
      {
        *(_OWORD *)(*v9 + 16 * v10) = v14;
        *((_DWORD *)this + 32) = v11;
        return (unsigned int)v6;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v14);
      v6 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v6 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8Fu);
  }
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v6;
}
