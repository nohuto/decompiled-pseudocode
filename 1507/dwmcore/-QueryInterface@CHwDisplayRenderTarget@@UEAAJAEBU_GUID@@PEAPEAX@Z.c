/*
 * XREFs of ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044480
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009ACE0 (-QueryInterface@CHwDisplayRenderTarget@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwDisplayRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009ACF0 (-QueryInterface@CHwDisplayRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044D20 (-HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::QueryInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  char *v3; // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *__hidden, const struct _GUID *, void **); // rsi
  int Interface; // eax

  v3 = (char *)this + 120;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, const struct _GUID *, void **))(*(_QWORD *)v3 + 32LL);
      if ( v7 == CHwDisplayRenderTarget::HrFindInterface )
        Interface = CHwDisplayRenderTarget::HrFindInterface((CHwDisplayRenderTarget *)((char *)this + 120), a2, a3);
      else
        Interface = v7((CHwDisplayRenderTarget *)((char *)this + 120), a2, a3);
      v5 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v5;
}
