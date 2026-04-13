/*
 * XREFs of sub_180008944 @ 0x180008944
 * Callers:
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180008944(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int AgileReference; // ebp
  __int64 v8; // rdi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  AgileReference = 0;
  if ( a3 )
  {
    v10 = 0LL;
    AgileReference = RoGetAgileReference(0LL, a2, a3, &v10);
    if ( AgileReference < 0 )
    {
      v8 = v10;
    }
    else
    {
      v8 = *a1;
      *a1 = v10;
    }
    if ( v8 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)AgileReference;
}
