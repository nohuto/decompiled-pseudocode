/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025A38
 * Callers:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x180025B84 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     _lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator() @ 0x18007664C (_lambda_63adadfa8c2e225bcf88290a3b13fd06_--operator().c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x18007672C (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 * Callees:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180024D90 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        struct IInspectable **a2)
{
  unsigned int v3; // ebx
  struct IInspectable *v4; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v6; // rcx
  __int64 (__fastcall *v7)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax

  v3 = 0;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v4->lpVtbl->Release)(v4);
  }
  *a2 = 0LL;
  v6 = *a1;
  if ( *a1 )
  {
    v7 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v6 + 24LL);
    if ( v7 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
      return (unsigned int)Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                             v6,
                             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                             a2);
    else
      return (unsigned int)v7(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
  }
  return v3;
}
