/*
 * XREFs of ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140259ABC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

__int64 __fastcall SmpDeviceIoCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, _QWORD *a3)
{
  NTSTATUS Status; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rcx
  unsigned __int64 v9; // rtt

  Status = a2->IoStatus.Status;
  v5 = a3[5];
  if ( Status >= 0 )
  {
    if ( a2->IoStatus.Information < *((unsigned int *)a3 + 8) )
    {
      *((_DWORD *)a3 + 7) |= 1u;
      v7 = a3[2];
      if ( v7 )
        *(_DWORD *)(v7 + 4) = -1073741435;
      else
        *((_DWORD *)a3 + 2) = -1073741435;
    }
  }
  else
  {
    *((_DWORD *)a3 + 7) |= 1u;
    v6 = a3[2];
    if ( v6 )
      *(_DWORD *)(v6 + 4) = Status;
    else
      *((_DWORD *)a3 + 2) = Status;
  }
  pIoFreeIrp(a2);
  if ( a3[2] )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 4568));
  if ( (*((_DWORD *)a3 + 7) & 4) != 0 )
  {
    KeSetEvent((PRKEVENT)(v5 + 4640), 1, 0);
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v5, (__int64)a3, 1);
    v8 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*(_DWORD *)(v5 + 4480) & 0x1F));
    _m_prefetchw(v8);
    v9 = v8->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v9 - 2, v9) )
      ExfReleaseRundownProtection(v8);
  }
  return 3221225494LL;
}
