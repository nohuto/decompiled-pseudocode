/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1800084F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
