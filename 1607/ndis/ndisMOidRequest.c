/*
 * XREFs of ndisMOidRequest @ 0x1C000C910
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisOidPMAddRemove @ 0x1C0025300 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qqqDD @ 0x1C0044730 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     NdisMResetMiniport @ 0x1C005CD30 (NdisMResetMiniport.c)
 *     WPP_SF_qDL @ 0x1C005D160 (WPP_SF_qDL.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisMOidRequest(struct _NDIS_OPEN_BLOCK *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r14
  char v5; // r12
  unsigned __int8 v8; // bp
  KIRQL v9; // r13
  struct _NDIS_OPEN_BLOCK *i; // rax
  KIRQL v11; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbp
  _WORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v19; // eax
  int v20; // ecx
  __int64 v21; // r11
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // r10
  unsigned __int8 v25; // r9
  _BYTE *v26; // rcx
  KIRQL NewIrql; // [rsp+40h] [rbp-C8h]
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  int v29; // [rsp+48h] [rbp-C0h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  MiniportHandle = 0LL;
  v29 = v2;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(14LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, v2);
  v8 = 0;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(107LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, 6LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == a1 )
    {
      KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
      if ( (a1->OpenFlags & 0x8000) == 0 && a1->References )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&a1->RefCountLock);
        RefCountTracker = a1->RefCountTracker;
        NewIrql = v11;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 98), 1u);
          }
          else
          {
            v13 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 6u) )
            {
              v21 = *((_QWORD *)RefCountTracker + 1);
              v22 = -1;
              if ( !v21 )
                goto LABEL_74;
              v24 = *((_BYTE *)RefCountTracker + 3);
              v25 = 0;
              if ( !v24 )
                goto LABEL_74;
              do
              {
                v26 = (_BYTE *)(v21 + 2LL * v25);
                if ( *v26 == 6 )
                {
                  if ( v26[1] != 0xFF )
                  {
                    ++v26[1];
                    goto LABEL_15;
                  }
                }
                else if ( !v26[1] )
                {
                  v13 = (_WORD *)(v21 + 2LL * v25);
                }
                ++v25;
              }
              while ( v25 < v24 );
              if ( v13 )
              {
                *v13 = 262;
              }
              else
              {
LABEL_74:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v23 = *((_BYTE *)RefCountTracker + 3);
                  if ( v23 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v23 + 2 <= 0xFF )
                      v22 = v23 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v22);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_15:
        ++a1->References;
        KeReleaseSpinLock(&a1->RefCountLock, NewIrql);
        v8 = 1;
      }
      KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      v5 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v9);
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qDL(v15, v14, a1, 6LL, v8);
  if ( v8 )
  {
    MiniportHandle = a1->MiniportHandle;
    v5 = 1;
    if ( (MiniportHandle->DriverVerifyFlags & 0x400) == 0 )
      *(_BYTE *)(a2 + 232) = 1;
    v16 = *(_DWORD *)(a2 + 4);
    if ( v16 == 1 && *(_DWORD *)(a2 + 32) == 66058 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 4u )
      {
        v28 = **(_DWORD **)(a2 + 40);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v28;
        StatusIndication.SourceHandle = MiniportHandle;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
      }
      else
      {
        v3 = -1073676266;
      }
      goto LABEL_56;
    }
    if ( !v16 && *(_DWORD *)(a2 + 32) == 66059 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 8u )
      {
        **(_QWORD **)(a2 + 40) = MiniportHandle->MediaSpecificAttributes;
        *(_DWORD *)(a2 + 52) = MiniportHandle->MediaSpecificAttributes != 0LL ? 8 : 0;
      }
      else
      {
        v3 = -1073676268;
      }
      goto LABEL_56;
    }
    if ( v16 == 1 && *(_DWORD *)(a2 + 32) == 66066 )
    {
      if ( (a1->ProtocolHandle->Flags & 0x20000000) != 0 )
        NdisMResetMiniport(MiniportHandle);
      else
        v3 = -1073741637;
      goto LABEL_56;
    }
    memset((void *)(a2 + 72), 0, 0x60uLL);
    *(_DWORD *)(a2 + 88) |= 0x20u;
    *(_QWORD *)(a2 + 104) = a1;
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 1
      && (v19 = *(_DWORD *)(a2 + 32) + 50265846, v19 <= 5)
      && (v20 = 43, _bittest(&v20, v19)) )
    {
      v17 = ndisOidPMAddRemove(MiniportHandle, 0LL, (PNDIS_OID_REQUEST)a2);
    }
    else
    {
      v17 = ndisQueueOidRequest(a2, &MiniportHandle->Header.Type, 0LL, 0LL);
    }
    v3 = v17;
  }
  else
  {
    v3 = -1073676286;
  }
  if ( v3 != 259 && v5 == 1 )
  {
LABEL_56:
    LOBYTE(v14) = 6;
    ndisMDereferenceOpenUnlocked(a1, v14);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqDD(15LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, MiniportHandle, a2, v29, v3);
  return v3;
}
