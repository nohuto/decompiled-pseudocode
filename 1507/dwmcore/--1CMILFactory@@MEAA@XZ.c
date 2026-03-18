/*
 * XREFs of ??1CMILFactory@@MEAA@XZ @ 0x18014B940
 * Callers:
 *     ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18014B9B0 (--_ECMILFactory@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILFactory::~CMILFactory(CMILFactory *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CMILFactory::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 8) = 0LL;
  }
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
