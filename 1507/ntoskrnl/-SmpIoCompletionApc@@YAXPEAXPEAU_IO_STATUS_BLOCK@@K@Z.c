/*
 * XREFs of ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140259BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

void __fastcall SmpIoCompletionApc(char *a1, struct _IO_STATUS_BLOCK *a2)
{
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK *v3; // r9
  _DWORD *Pointer; // rcx
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rtt

  Status = a2->Status;
  v3 = a2 - 2;
  if ( a2->Status < 0 )
  {
    HIDWORD(v3[1].Information) |= 1u;
    Pointer = v3[1].Pointer;
    if ( Pointer )
      Pointer[1] = Status;
    else
      LODWORD(v3->Information) = Status;
  }
  if ( v3[1].Pointer )
    _InterlockedDecrement((volatile signed __int32 *)a1 + 1142);
  if ( (v3[1].Information & 0x400000000LL) != 0 )
  {
    KeSetEvent((PRKEVENT)(a1 + 4640), 1, 0);
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue((__int64)a1, (__int64)v3, 1);
    v6 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*((_DWORD *)a1 + 1120) & 0x1F));
    _m_prefetchw(v6);
    v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 - 2, v7) )
      ExfReleaseRundownProtection(v6);
  }
}
