/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800597C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180009660 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A7828 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     Template_xxffffffffffffffff @ 0x180113CD8 (Template_xxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  CVisual *v4; // rbp
  CInteraction *v9; // rcx
  __int128 v10; // xmm1
  __int64 result; // rax
  _OWORD *v12; // rax
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _OWORD *v14; // rax
  void *InputHandle; // rax
  int v16; // r15d
  int v17; // edx
  int v18; // ecx
  int v19; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (CVisual *)*((_QWORD *)this + 3);
  v9 = (CInteraction *)*((_QWORD *)v4 + 50);
  if ( v9 )
  {
    InputHandle = CInteraction::GetInputHandle(v9);
    v16 = (int)InputHandle;
    if ( InputHandle )
    {
      if ( memcmp_0(a2, (char *)this + 40, 0x40uLL) )
      {
        CVisual::GetInputLuid(v4, &v19);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxffffffffffffffff(
            v18,
            v17,
            v16,
            v19,
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 1),
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 3),
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a2 + 5),
            *((_DWORD *)a2 + 6),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)a2 + 8),
            *((_DWORD *)a2 + 9),
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 12),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15));
        *((_BYTE *)this + 264) |= 4u;
      }
    }
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  v10 = *((_OWORD *)a2 + 3);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * (a3 & 1);
  *(_OWORD *)((char *)this + 88) = v10;
  if ( a4 )
  {
    v12 = (_OWORD *)*((_QWORD *)this + 13);
    if ( v12 )
    {
      *v12 = *(_OWORD *)a4;
      v12[1] = *((_OWORD *)a4 + 1);
      v12[2] = *((_OWORD *)a4 + 2);
      v12[3] = *((_OWORD *)a4 + 3);
    }
    else
    {
      v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v13 == WPF::ProcessHeapImpl::Alloc )
        v14 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
      else
        v14 = (_OWORD *)v13(WPF::g_pProcessHeap, 64LL);
      if ( !v14 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return 2147942414LL;
      }
      *v14 = *(_OWORD *)a4;
      v14[1] = *((_OWORD *)a4 + 1);
      v14[2] = *((_OWORD *)a4 + 2);
      v14[3] = *((_OWORD *)a4 + 3);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, (signed __int64)v14, 0LL) )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _OWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v14);
    }
  }
  result = 0LL;
  *((_QWORD *)this + 14) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  if ( *((_BYTE *)this + 260) )
    *((_QWORD *)this + 28) = 0LL;
  return result;
}
