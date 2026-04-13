/*
 * XREFs of ?_Tidy@ios_base@std@@AEAAXXZ @ 0x180054954
 * Callers:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180058D36 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::ios_base::_Tidy(std::ios_base *this)
{
  __int64 **i; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  for ( i = (__int64 **)*((_QWORD *)this + 7); i; i = (__int64 **)*i )
    ((void (__fastcall *)(_QWORD, std::ios_base *, _QWORD))i[2])(0LL, this, *((unsigned int *)i + 2));
  v3 = (_QWORD *)*((_QWORD *)this + 6);
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
  *((_QWORD *)this + 6) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 7);
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
  *((_QWORD *)this + 7) = 0LL;
}
