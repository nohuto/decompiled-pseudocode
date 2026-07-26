/*
 * XREFs of ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005A500
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005A414 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindAdapterWorkItem(_QWORD *a1)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbx

  v1 = (struct _NDIS_OPEN_BLOCK *)a1[4];
  ndisUnbindAdapterInner(v1);
  ndisMDereferenceOpenUnlocked((__int64)v1, 0x12u);
  ExFreePoolWithTag(a1, 0);
}
