/*
 * XREFs of ?Create@CDecodedBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x180153498
 * Callers:
 *     ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x180152744 (-Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDecodedBitmap::Create(const struct _GUID *a1, struct _LUID a2, struct CDecodedBitmap **a3)
{
  unsigned int v5; // esi
  __int64 v6; // rax
  struct CDecodedBitmap *v7; // rdi

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  v7 = (struct CDecodedBitmap *)v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CDecodedBitmap::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(struct _GUID *)(v6 + 16) = *a1;
    *(_DWORD *)(v6 + 56) = -1;
    *(struct _LUID *)(v6 + 32) = a2;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = v7;
  if ( v7 )
  {
    (**(void (__fastcall ***)(struct CDecodedBitmap *))v7)(v7);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17u);
  }
  return v5;
}
