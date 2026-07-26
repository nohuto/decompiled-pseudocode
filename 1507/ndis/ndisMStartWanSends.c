/*
 * XREFs of ndisMStartWanSends @ 0x1C0051800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     NdisMWanSendComplete @ 0x1C004E8B0 (NdisMWanSendComplete.c)
 */

char __fastcall ndisMStartWanSends(__int64 a1)
{
  __int64 **v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 **v5; // rax
  unsigned int v6; // eax

  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_q(0x20u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1);
  v2 = (__int64 **)(a1 + 128);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    v5 = (__int64 **)(*v2)[1];
    if ( *(__int64 **)(v4 + 8) != *v2 || *v5 != v3 )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(a1 + 3816) + 200LL))(
           *(_QWORD *)(a1 + 24),
           v3[10],
           v3);
    if ( v6 != 259 )
      NdisMWanSendComplete(a1, (__int64)v3, v6);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 1509155;
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_q(0x21u, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1);
  return 0;
}
