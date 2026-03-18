/*
 * XREFs of ?HrFindInterface@CTranslateTransform3D@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTranslateTransform3D::HrFindInterface(
        CTranslateTransform3D *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  char *v5; // rcx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data4;
  result = 0LL;
  if ( v3 )
  {
    *a3 = 0LL;
    return 2147500033LL;
  }
  else
  {
    if ( this )
      v5 = (char *)this + 104;
    else
      v5 = 0LL;
    *a3 = v5;
  }
  return result;
}
