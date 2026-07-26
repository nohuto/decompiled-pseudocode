/*
 * XREFs of ndisMReset @ 0x1C005A620
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     NdisMResetComplete @ 0x1C0058590 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C005A54C (ndisMQueueWorkItem.c)
 */

__int64 __fastcall ndisMReset(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // r15
  unsigned int v5; // edi
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  KIRQL v10; // r14
  BOOLEAN AddressingReset[4]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int i; // [rsp+44h] [rbp-55h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-49h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0083718 >= 4u )
    WPP_SF_qq(0x46u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v7 = (*(_DWORD *)(v1 + 124) & 0x80000) == 0;
  v4 = v3;
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 726188;
  if ( !v7 )
  {
    v5 = -2147418111;
LABEL_31:
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
    goto LABEL_32;
  }
  v6 = *(_DWORD *)(v1 + 120);
  v5 = -1073676275;
  if ( (v6 & 0x40000) != 0 )
    v7 = (v6 & 0x200000) == 0;
  else
    v7 = (unsigned int)ndisMQueueWorkItem(v1, 3, a1) == 0;
  if ( !v7 )
    goto LABEL_31;
  v5 = -2147418111;
  if ( *(_BYTE *)(v1 + 32) >= 6u || !*(_QWORD *)(*(_QWORD *)(v1 + 3816) + 192LL) )
    goto LABEL_31;
  ndisMReferenceOpen(a1, 8u);
  v8 = *(_DWORD *)(v1 + 120);
  *(_QWORD *)(v1 + 392) = a1;
  if ( (v8 & 0x40000) == 0 )
  {
    *(_DWORD *)(v1 + 120) = v8 | 0x100000;
    if ( !*(_BYTE *)(v1 + 89) )
    {
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1860) = 726335;
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      ndisMProcessDeferred(v1);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1860) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
    }
    v5 = 259;
    goto LABEL_31;
  }
  AddressingReset[0] = 0;
  *(_DWORD *)(v1 + 120) = v8 | 0x280000;
  ndisMSwapOpenHandlers(v1, 1u);
  while ( *(_DWORD *)(v1 + 1824) )
  {
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
    for ( i = 0; i < 0x32; ++i )
      ;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 1856) = 726260;
  }
  if ( *(_DWORD *)(v1 + 3924) != 1 )
  {
    *(_BYTE *)(v1 + 930) &= ~1u;
    v5 = -1073741637;
    *(_DWORD *)(v1 + 120) &= 0xFFD7FFFF;
    *(_DWORD *)(v1 + 540) = -1073741637;
    *(_QWORD *)(v1 + 392) = 0LL;
    ndisMDereferenceOpenLocked(a1, 8u);
    goto LABEL_31;
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = (void *)v1;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_q(0x47u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
    Template_jqxq(
      v9,
      &CallMiniportReset,
      (const GUID *)(v1 + 4064),
      v1 + 4064,
      *(_DWORD *)(v1 + 4112),
      *(_QWORD *)(v1 + 4080),
      31);
  v10 = KfRaiseIrql(2u);
  v5 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(v1 + 3816) + 192LL))(
         AddressingReset,
         *(_QWORD *)(v1 + 24));
  if ( v10 != 2 )
    KeLowerIrql(v10);
  if ( v5 != 259 )
  {
    NdisMResetComplete((NDIS_HANDLE)v1, v5, AddressingReset[0]);
    v5 = 259;
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C0083718 >= 4u )
    WPP_SF_qq(0x48u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v1);
  return v5;
}
