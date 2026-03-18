/*
 * XREFs of ?HrFindInterface@CComponentTransform3D@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform3D::HrFindInterface(
        CComponentTransform3D *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0d3e77a0_a365_4a0b_b476_396fef364781.Data4;
  v4 = 0;
  if ( v3 )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  else
  {
    *a3 = (char *)this - 8;
  }
  return v4;
}
