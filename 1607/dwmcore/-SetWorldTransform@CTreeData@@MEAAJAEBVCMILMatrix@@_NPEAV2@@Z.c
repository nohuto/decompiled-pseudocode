/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180030FA0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rdx

  v4 = 0;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v7 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * (a3 & 1);
  *((_DWORD *)this + 26) = v7;
  if ( a4 )
  {
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a4;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v9 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              68LL);
      v11 = v10;
      if ( v10 )
      {
        *(_OWORD *)v10 = *(_OWORD *)a4;
        *(_OWORD *)(v10 + 16) = *((_OWORD *)a4 + 1);
        *(_OWORD *)(v10 + 32) = *((_OWORD *)a4 + 2);
        *(_OWORD *)(v10 + 48) = *((_OWORD *)a4 + 3);
        *(_DWORD *)(v10 + 64) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return v4;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, v11, 0LL) )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    }
  }
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return v4;
}
