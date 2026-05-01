/*
 * XREFs of ?AddFromArray@CEnumerableObjectCollection@@UEAAJPEAUIObjectArray@@@Z @ 0x1800054E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddFromArray(
        CEnumerableObjectCollection *this,
        struct IObjectArray *a2)
{
  unsigned int v4; // edi
  int i; // ebx
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v7); i >= 0; ++v4 )
  {
    if ( v4 >= v7 )
      break;
    i = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))a2->lpVtbl->GetAt)(
          a2,
          v4,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v8);
    if ( i >= 0 )
    {
      i = (*(__int64 (__fastcall **)(CEnumerableObjectCollection *, __int64))(*(_QWORD *)this + 40LL))(this, v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)i;
}
