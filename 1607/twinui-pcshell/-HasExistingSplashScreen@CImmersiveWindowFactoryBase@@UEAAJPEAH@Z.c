/*
 * XREFs of ?HasExistingSplashScreen@CImmersiveWindowFactoryBase@@UEAAJPEAH@Z @ 0x18002B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::HasExistingSplashScreen(CImmersiveWindowFactoryBase *this, int *a2)
{
  *a2 = *((_QWORD *)this + 10) != 0LL;
  return 0LL;
}
