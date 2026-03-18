/*
 * XREFs of ?HrFindInterface@CVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801042B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::HrFindInterface(CVisual *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  char *v5; // rcx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data4;
  result = 0LL;
  if ( v3 )
    return 2147500034LL;
  if ( this )
    v5 = (char *)this + 56;
  else
    v5 = 0LL;
  *a3 = v5;
  return result;
}
