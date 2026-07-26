/*
 * XREFs of ?NdisPDPIOffRssReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00DF460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00E0614 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00E07A8 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall NdisPDPIOffRssReceiveQueues(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rbx
  struct _LIST_ENTRY v2; // [rsp+20h] [rbp-40h] BYREF
  struct _LIST_ENTRY v3; // [rsp+30h] [rbp-30h] BYREF
  KLockHolder v4; // [rsp+40h] [rbp-20h] BYREF

  for ( i = a1; *((_BYTE *)i + 96); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 10) )
    ;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x28u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)i);
  v3.Blink = &v3;
  v3.Flink = &v3;
  v2.Blink = &v2;
  v2.Flink = &v2;
  ndisCleanupPDRSSObjects(i, &v3, &v2);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)i + 11) + 32LL))(*((_QWORD *)i + 10));
  ndisFreePDRSSObjects(&v3, &v2);
  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v4,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  *((_BYTE *)i + 97) = 0;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x29u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)i);
  KLockHolder::~KLockHolder(&v4);
}
