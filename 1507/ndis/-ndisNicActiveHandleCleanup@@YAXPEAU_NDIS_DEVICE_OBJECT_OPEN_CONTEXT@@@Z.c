/*
 * XREFs of ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0008E18
 * Callers:
 *     ndisDispatchRequest @ 0x1C0098EF0 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006A850 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Template_xqqq @ 0x1C006B73C (Template_xqqq.c)
 *     WPP_SF_qLd @ 0x1C006B9D4 (WPP_SF_qLd.c)
 */

void __fastcall ndisNicActiveHandleCleanup(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1, __int64 a2, __int64 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v6; // al
  KIRQL v7; // bp
  __int64 v8; // rdx
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **v9; // rcx
  signed int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 6) )
  {
    if ( v4 )
    {
      LOBYTE(a3) = 3;
      if ( (unsigned __int8)ndisReferenceMiniportByHandle(*((_QWORD *)a1 + 4), 0LL, a3) )
      {
        AoAc = v4->AoAc;
        v6 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
        v7 = v6;
        if ( *((_QWORD *)a1 + 4) )
        {
          v8 = *((_QWORD *)a1 + 1);
          v9 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)*((_QWORD *)a1 + 2);
          if ( *(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)(v8 + 8) != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)
            || *v9 != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8) )
          {
            __fastfail(3u);
          }
          *v9 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v8;
          *(_QWORD *)(v8 + 8) = v9;
          --AoAc->HandleListCount;
          v10 = *((_DWORD *)a1 + 7);
          if ( v10 > 0 )
          {
            ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6), v10);
            if ( (unsigned __int8)byte_1C0085315 >= 4u )
              WPP_SF_qLd(v12, v11, v4, *((unsigned int *)a1 + 6), AoAc->ActiveRef);
            if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
              Template_xqqq(
                v12,
                (unsigned int)&NicActiveReleased,
                (_DWORD)v4 + 4064,
                v4->NetLuid.Value,
                *((_DWORD *)a1 + 6),
                0,
                AoAc->ActiveRef);
          }
          KeReleaseSpinLock(&AoAc->Lock, v7);
          ndisNicQuietCheckRef(v4);
        }
        else
        {
          KeReleaseSpinLock(&AoAc->Lock, v6);
        }
        ndisDereferenceMiniport((__int64)v4, 3u);
      }
    }
  }
}
