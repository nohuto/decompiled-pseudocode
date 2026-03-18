/*
 * XREFs of ?GetSamplingInfo@CBrushRenderingEffect@@UEBAXQEA_N@Z @ 0x1801953E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::GetSamplingInfo(CBrushRenderingEffect *this, bool *const a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int i; // r8d
  bool v6; // cl

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 136LL) + 128LL);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  for ( i = 0; i < 2; ++i )
  {
    v6 = i < v4;
    *a2++ = v6;
  }
}
