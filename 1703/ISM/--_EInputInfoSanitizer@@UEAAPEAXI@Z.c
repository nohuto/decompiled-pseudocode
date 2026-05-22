/*
 * XREFs of ??_EInputInfoSanitizer@@UEAAPEAXI@Z @ 0x18007E450
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall InputInfoSanitizer::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  *this = &InputInfoSanitizer::`vftable';
  operator delete(this[4]);
  v4 = this[2];
  this[2] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  *this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents((MPCMouseProcessor *)this);
    else
      free(this);
  }
  return this;
}
