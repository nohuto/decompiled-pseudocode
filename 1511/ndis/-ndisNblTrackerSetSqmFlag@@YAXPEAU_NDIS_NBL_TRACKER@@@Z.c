/*
 * XREFs of ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C005FF68
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010230 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerSetSqmFlag(struct _NDIS_NBL_TRACKER *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rcx
  KSPIN_LOCK *Context; // rbx

  v1 = *((__int16 *)a1 + 8);
  if ( !*((_WORD *)a1 + 8) )
    goto LABEL_6;
  if ( v1 == 1 )
  {
    Context = (KSPIN_LOCK *)a1->Context;
    v3 = KeAcquireSpinLockRaiseToDpc(Context + 18);
    *((_DWORD *)Context + 14) |= 0x100000u;
    v4 = Context + 18;
    Context[19] = 0LL;
    *((_DWORD *)Context + 40) = 0;
    goto LABEL_10;
  }
  if ( v1 == 2 )
  {
    v2 = *((_QWORD *)a1->Context + 3);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 32));
    *(_DWORD *)(v2 + 64) |= 2u;
    v4 = (KSPIN_LOCK *)(v2 + 32);
LABEL_10:
    KeReleaseSpinLock(v4, v3);
    return;
  }
  if ( v1 > 2 && v1 <= 5 )
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)a1->Context + 1122, 1u);
}
