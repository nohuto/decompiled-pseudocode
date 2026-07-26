/*
 * XREFs of ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0004A28
 * Callers:
 *     ndisDispatchRequest @ 0x1C0094420 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001D878 (ndisReferenceMiniportByHandle.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00684E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069940 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Template_xqqq @ 0x1C006A83C (Template_xqqq.c)
 *     WPP_SF_qLd @ 0x1C006AAD4 (WPP_SF_qLd.c)
 */

void __fastcall ndisNicActiveHandleCleanup(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1, __int64 a2, __int64 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v6; // al
  KIRQL v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **v10; // rcx
  signed int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx

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
          v9 = *((_QWORD *)a1 + 1);
          v10 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)*((_QWORD *)a1 + 2);
          if ( *(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)(v9 + 8) != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)
            || *v10 != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8) )
          {
            __fastfail(3u);
          }
          *v10 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          --AoAc->HandleListCount;
          v11 = *((_DWORD *)a1 + 7);
          if ( v11 > 0 )
          {
            ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6), v11);
            if ( (unsigned __int8)byte_1C0083715 >= 4u )
              WPP_SF_qLd(v13, v12, v4, *((unsigned int *)a1 + 6), AoAc->ActiveRef);
            if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
              Template_xqqq(
                v13,
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
        LOBYTE(v8) = 3;
        ndisDereferenceMiniport(v4, v8);
      }
    }
  }
}
