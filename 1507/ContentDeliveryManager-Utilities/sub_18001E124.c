/*
 * XREFs of sub_18001E124 @ 0x18001E124
 * Callers:
 *     sub_18001AB70 @ 0x18001AB70 (sub_18001AB70.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001E124(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  int AgileReference; // ebp
  __int64 v6; // rdi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  AgileReference = 0;
  if ( a2 )
  {
    v8 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &unk_18002F910, a2, &v8);
    if ( AgileReference < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = *a1;
      *a1 = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)AgileReference;
}
