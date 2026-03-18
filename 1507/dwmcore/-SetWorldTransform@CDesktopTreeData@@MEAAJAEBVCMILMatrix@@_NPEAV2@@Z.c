/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180059D20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000BA6C (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxffffffffffffffff @ 0x1800998F0 (Template_xxffffffffffffffff.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
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
  void *InputHandle; // rax
  int v14; // r15d
  int v15; // edx
  int v16; // ecx
  LPVOID (__fastcall *v17)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _OWORD *v18; // rax
  int v19; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (CVisual *)*((_QWORD *)this + 3);
  v9 = (CInteraction *)*((_QWORD *)v4 + 52);
  if ( v9 )
  {
    InputHandle = CInteraction::GetInputHandle(v9);
    v14 = (int)InputHandle;
    if ( InputHandle )
    {
      if ( memcmp_0(a2, (char *)this + 40, 0x40uLL) )
      {
        CVisual::GetInputLuid(v4, &v19);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxffffffffffffffff(
            v16,
            v15,
            v14,
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
  if ( !a4 )
    goto LABEL_3;
  v12 = (_OWORD *)*((_QWORD *)this + 13);
  if ( v12 )
  {
    *v12 = *(_OWORD *)a4;
    v12[1] = *((_OWORD *)a4 + 1);
    v12[2] = *((_OWORD *)a4 + 2);
    v12[3] = *((_OWORD *)a4 + 3);
LABEL_3:
    result = 0LL;
    *((_QWORD *)this + 14) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
    return result;
  }
  v17 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v17 == WPF::ProcessHeapImpl::Alloc )
    v18 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
  else
    v18 = (_OWORD *)v17(WPF::g_pProcessHeap, 64LL);
  if ( v18 )
  {
    *v18 = *(_OWORD *)a4;
    v18[1] = *((_OWORD *)a4 + 1);
    v18[2] = *((_OWORD *)a4 + 2);
    v18[3] = *((_OWORD *)a4 + 3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, (signed __int64)v18, 0LL) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _OWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v18);
    goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
  return 2147942414LL;
}
