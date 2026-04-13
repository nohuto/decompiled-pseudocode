/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180021BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180022190 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                     0x90uLL,
                                                                                     (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v3 )
  {
    v5 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v3);
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
