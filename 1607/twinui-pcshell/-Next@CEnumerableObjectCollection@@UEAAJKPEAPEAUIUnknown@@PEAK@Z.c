/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKPEAPEAUIUnknown@@PEAK@Z @ 0x1800056A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // edi
  struct IUnknown **v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v12; // ebp
  unsigned int v13; // eax

  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 4);
  v10 = a3;
  if ( v6 + a2 < v4 )
    v4 = v6 + a2;
  while ( v6 < v4 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(*((_QWORD *)this + 3) + 8LL * v6);
    v12 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, v10);
    if ( v12 < 0 )
    {
      while ( v10 > a3 )
      {
        --v10;
        ((void (__fastcall *)(struct IUnknown *))(*v10)->lpVtbl->Release)(*v10);
      }
      if ( a4 )
        *a4 = 0;
      return (unsigned int)v12;
    }
    ++v6;
    ++v10;
  }
  v13 = v6 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v6;
  if ( a4 )
    *a4 = v13;
  return v13 < a2;
}
