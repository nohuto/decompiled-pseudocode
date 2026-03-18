/*
 * XREFs of ?Create@CRenderDataBuilder@@SAJPEAPEAV1@@Z @ 0x1800AF9D4
 * Callers:
 *     ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x18004A360 (-CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBuilder::Create(struct CRenderDataBuilder **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &CRenderDataBuilder::`vftable';
    *(_QWORD *)(v3 + 16) = v3 + 48;
    *(_QWORD *)(v3 + 24) = v3 + 48;
    *(_DWORD *)(v3 + 32) = 64;
    *(_QWORD *)(v3 + 36) = 64LL;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = (struct CRenderDataBuilder *)v4;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16u);
  }
  return v2;
}
