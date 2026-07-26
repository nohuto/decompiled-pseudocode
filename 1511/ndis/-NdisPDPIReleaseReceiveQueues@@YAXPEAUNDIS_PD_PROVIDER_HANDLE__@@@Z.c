/*
 * XREFs of ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00D9730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00DA0A8 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00DA23C (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall NdisPDPIReleaseReceiveQueues(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rbx
  struct _LIST_ENTRY v2; // [rsp+20h] [rbp-40h] BYREF
  struct _LIST_ENTRY v3; // [rsp+30h] [rbp-30h] BYREF
  KLockHolder v4; // [rsp+40h] [rbp-20h] BYREF

  for ( i = a1; *((_BYTE *)i + 96); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 10) )
    ;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x28u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)i);
  v3.Blink = &v3;
  v3.Flink = &v3;
  v2.Blink = &v2;
  v2.Flink = &v2;
  ndisCleanupPDRSSObjects(i, &v3, &v2);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)i + 11) + 32LL))(*((_QWORD *)i + 10));
  ndisFreePDRSSObjects(&v3, &v2);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v4, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  *((_BYTE *)i + 97) = 0;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x29u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)i);
  KLockHolder::~KLockHolder(&v4);
}
