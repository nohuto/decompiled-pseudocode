/*
 * XREFs of sub_1800218A8 @ 0x1800218A8
 * Callers:
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x18002621C (--3@YAXPEAX@Z.c)
 */

void __fastcall sub_1800218A8(__int64 a1)
{
  __int64 **i; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  for ( i = *(__int64 ***)(a1 + 56); i; i = (__int64 **)*i )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))i[2])(0LL, a1, *((unsigned int *)i + 2));
  v3 = *(_QWORD **)(a1 + 48);
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = *(_QWORD **)(a1 + 56);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      operator delete(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 56) = 0LL;
}
