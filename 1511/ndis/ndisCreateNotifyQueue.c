/*
 * XREFs of ndisCreateNotifyQueue @ 0x1C00ED190
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00EE7B0 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisDereferenceAfNotification @ 0x1C004D324 (ndisDereferenceAfNotification.c)
 */

__int64 __fastcall ndisCreateNotifyQueue(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  unsigned int v8; // edi
  __int64 *v9; // rbx
  _QWORD *PoolWithTag; // r15
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // r15
  void *v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_qq(0xCu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1, a2);
  *a4 = 0LL;
  if ( a2 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 232));
    if ( (*(_DWORD *)(a2 + 224) & 0x18000) == 0 )
    {
      v9 = *(__int64 **)(a1 + 512);
      while ( v9 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C008371A >= 2u )
            WPP_SF_(0xDu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
          v8 = -1073741670;
          break;
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1112));
        ndisMReferenceOpen(a2, 0xEu);
        PoolWithTag[5] = a1;
        PoolWithTag[6] = a2;
        PoolWithTag[7] = v9[2];
        *((_DWORD *)PoolWithTag + 16) = *((_DWORD *)v9 + 6);
        *PoolWithTag = *a4;
        v9 = (__int64 *)*v9;
        *a4 = PoolWithTag;
      }
    }
    v11 = (KSPIN_LOCK *)(a2 + 232);
LABEL_25:
    KeReleaseSpinLockFromDpcLevel(v11);
    if ( v8 )
    {
      if ( !*a4 )
        goto LABEL_30;
      do
      {
        v14 = *a4;
        v15 = (*a4)[6];
        *a4 = (_QWORD *)**a4;
        ExFreePoolWithTag(v14, 0);
        ndisDereferenceAfNotification(v15);
        ndisMDereferenceOpenLocked(v15, 0xEu);
      }
      while ( *a4 );
    }
LABEL_28:
    v16 = *a4;
    if ( *a4 )
    {
      v16[1] = 0LL;
      v16[3] = ndisNotifyAfRegistration;
      v16[4] = v16;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v12 + 24) + 200LL) )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 232));
          if ( (*(_DWORD *)(v12 + 224) & 0x18000) != 0 )
          {
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v12 + 232));
          }
          else
          {
            v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
            if ( !v13 )
            {
              if ( (unsigned __int8)byte_1C008371A >= 2u )
                WPP_SF_(0xEu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
              v8 = -1073741670;
              v11 = (KSPIN_LOCK *)(v12 + 232);
              goto LABEL_25;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 1112));
            ndisMReferenceOpen(v12, 0xEu);
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v12 + 232));
            v13[5] = a1;
            v13[6] = v12;
            v13[7] = *(_QWORD *)a3;
            *((_DWORD *)v13 + 16) = *(_DWORD *)(a3 + 8);
            *v13 = *a4;
            *a4 = v13;
          }
        }
        v12 = *(_QWORD *)(v12 + 392);
        if ( !v12 )
          goto LABEL_28;
      }
    }
  }
LABEL_30:
  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_qqd(0xFu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1, a2, v8);
  return v8;
}
