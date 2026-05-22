/*
 * XREFs of ?Serialize@PropertyVector@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180028690
 * Callers:
 *     <none>
 * Callees:
 *     ?Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z @ 0x180027580 (-Serialize@PropertyNode@Input@@UEBAJIPEAUIStream@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyVector::Serialize(
        Input::PropertyVector *this,
        __int64 a2,
        struct IStream *a3,
        unsigned int *a4)
{
  unsigned int v6; // ebp
  int v8; // r10d
  _QWORD *i; // rbx
  __int16 v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v12 = 0;
  v6 = a2;
  v8 = Input::PropertyNode::Serialize(this, a2, a3, &v12);
  if ( v8 >= 0 )
  {
    *a4 += v12;
    v11 = (__int64)(unsigned int)(*((_DWORD *)this + 10) - *((_DWORD *)this + 8)) >> 3;
    v8 = (*(__int64 (__fastcall **)(struct IStream *, __int16 *, __int64, unsigned int *))(*(_QWORD *)a3 + 32LL))(
           a3,
           &v11,
           2LL,
           &v12);
    if ( v8 >= 0 )
      *a4 += v12;
  }
  for ( i = (_QWORD *)*((_QWORD *)this + 4); v8 >= 0 && i != *((_QWORD **)this + 5); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IStream *, unsigned int *))(*(_QWORD *)*i + 104LL))(
           *i,
           v6,
           a3,
           &v12);
    if ( v8 >= 0 )
      *a4 += v12;
  }
  return (unsigned int)v8;
}
