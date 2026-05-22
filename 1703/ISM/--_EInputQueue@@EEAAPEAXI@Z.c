/*
 * XREFs of ??_EInputQueue@@EEAAPEAXI@Z @ 0x18006B240
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall InputQueue::`vector deleting destructor'(void **this, char a2)
{
  char *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  *this = &InputQueue::`vftable';
  operator delete(this[14]);
  this[12] = this[11];
  v4 = (char *)this[11];
  if ( v4 )
  {
    std::_Deallocate(v4, ((_BYTE *)this[13] - v4) >> 2, 4uLL);
    this[11] = 0LL;
    this[12] = 0LL;
    this[13] = 0LL;
  }
  v5 = this[10];
  if ( v5 )
  {
    this[10] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = this[9];
  if ( v6 )
  {
    this[9] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = this[8];
  if ( v7 )
  {
    this[8] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = this[7];
  if ( v8 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[6];
  if ( v9 )
  {
    this[6] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = this[2];
  if ( v10 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
