/*
 * XREFs of ?Create@CMesh2DEffect@@SAJPEAPEAUIUnknown@@@Z @ 0x1801682B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CMesh2DEffect@@IEAA@XZ @ 0x1801680CC (--0CMesh2DEffect@@IEAA@XZ.c)
 */

__int64 __fastcall CMesh2DEffect::Create(struct IUnknown **a1)
{
  CMesh2DEffect *v2; // rax
  struct IUnknown *v3; // rdi

  v2 = (CMesh2DEffect *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          192LL);
  if ( v2 )
    v3 = (struct IUnknown *)CMesh2DEffect::CMesh2DEffect(v2);
  else
    v3 = 0LL;
  *a1 = v3;
  if ( !v3 )
    return 2147942414LL;
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  return 0LL;
}
