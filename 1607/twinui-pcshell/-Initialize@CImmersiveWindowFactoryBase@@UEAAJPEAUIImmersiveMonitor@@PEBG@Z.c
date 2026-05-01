/*
 * XREFs of ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x18002B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18002B734 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::Initialize(
        unsigned __int16 **this,
        struct IImmersiveMonitor *a2,
        IMalloc *a3)
{
  __int64 result; // rax

  result = CoAllocString(a3, this + 7);
  if ( (int)result >= 0 )
    return (*((__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, _QWORD))*(this - 6) + 9))(
             (char *)this - 48,
             a2,
             0LL);
  return result;
}
