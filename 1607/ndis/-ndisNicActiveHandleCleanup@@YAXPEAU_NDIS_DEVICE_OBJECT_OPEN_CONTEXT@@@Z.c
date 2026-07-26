/*
 * XREFs of ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001C0F0
 * Callers:
 *     ndisDispatchRequest @ 0x1C00AD4B0 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C006CF00 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E444 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Template_xqqq @ 0x1C006F448 (Template_xqqq.c)
 *     WPP_SF_qLd @ 0x1C006F6E0 (WPP_SF_qLd.c)
 */

void __fastcall ndisNicActiveHandleCleanup(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 v6; // rdx
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **v7; // rcx
  signed int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 6) && v2 && ndisReferenceMiniportByHandle(*((_NDIS_MINIPORT_BLOCK **)a1 + 4), 0, 3u) )
  {
    AoAc = v2->AoAc;
    v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v5 = v4;
    if ( *((_QWORD *)a1 + 4) )
    {
      v6 = *((_QWORD *)a1 + 1);
      v7 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)*((_QWORD *)a1 + 2);
      if ( *(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)(v6 + 8) != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)
        || *v7 != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8) )
      {
        __fastfail(3u);
      }
      *v7 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      --AoAc->HandleListCount;
      v8 = *((_DWORD *)a1 + 7);
      if ( v8 > 0 )
      {
        ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6), v8);
        if ( (unsigned __int8)byte_1C00895D5 >= 4u )
          WPP_SF_qLd(v10, v9, v2, *((unsigned int *)a1 + 6), AoAc->ActiveRef);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          Template_xqqq(
            v10,
            (unsigned int)&NicActiveReleased,
            (_DWORD)v2 + 4064,
            v2->NetLuid.Value,
            *((_DWORD *)a1 + 6),
            0,
            AoAc->ActiveRef);
      }
      KeReleaseSpinLock(&AoAc->Lock, v5);
      ndisNicQuietCheckRef(v2);
    }
    else
    {
      KeReleaseSpinLock(&AoAc->Lock, v4);
    }
    ndisDereferenceMiniport((__int64)v2);
  }
}
