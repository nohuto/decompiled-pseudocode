/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800313F0
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000C0E0 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A4E3C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxffffffffffffffff @ 0x18012C63C (Template_xxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // edx
  int *v13; // rcx
  CVisual *v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // r11d
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _OWORD *v19; // rax
  int v20; // [rsp+C0h] [rbp+8h] BYREF
  CInteraction *v21; // [rsp+C8h] [rbp+10h]

  v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 272LL);
  if ( (*(_DWORD *)(v8 + 4) & 0x2000000) != 0 )
  {
    v12 = *(_DWORD *)(v8 + 12);
    v13 = (int *)(v8 + 12);
    if ( (v12 & 0x7F000000) != 0x7000000 )
    {
      do
      {
        v13 = (int *)((char *)v13 + (v12 & 0xFFFFFF) + 4);
        v12 = *v13;
      }
      while ( (*v13 & 0x7F000000) != 0x7000000 );
    }
    v21 = *(CInteraction **)(v13 + 1);
    if ( v21 && CInteraction::GetInputHandle(v21) && !(unsigned __int8)CMILMatrix::IsEqualTo<0>(a2, (char *)this + 40) )
    {
      CVisual::GetInputLuid(v14, &v20);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxffffffffffffffff(
          v16,
          v15,
          v17,
          v20,
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
      *((_BYTE *)this + 224) |= 4u;
    }
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * (a3 & 1);
  *((_DWORD *)this + 26) = v9;
  if ( a4 )
  {
    v11 = *((_QWORD *)this + 14);
    if ( v11 )
    {
      *(_OWORD *)v11 = *(_OWORD *)a4;
      *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v18 == WPF::ProcessHeapImpl::Alloc )
        v19 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x44uLL);
      else
        v19 = (_OWORD *)v18(WPF::g_pProcessHeap, 68uLL);
      if ( !v19 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return 2147942414LL;
      }
      *v19 = *(_OWORD *)a4;
      v19[1] = *((_OWORD *)a4 + 1);
      v19[2] = *((_OWORD *)a4 + 2);
      v19[3] = *((_OWORD *)a4 + 3);
      *((_DWORD *)v19 + 16) = *((_DWORD *)a4 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v19, 0LL) )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _OWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v19);
    }
  }
  result = 0LL;
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return result;
}
