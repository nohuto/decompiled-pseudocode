/*
 * XREFs of ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x18002CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002248C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_SplashScreen(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Activation::ISplashScreen **a2)
{
  CMarshaledInterface *v2; // r14
  RTL_SRWLOCK *v3; // rdi
  int v5; // ebx
  int v6; // ebx

  *a2 = 0LL;
  v2 = (CMarshaledInterface *)&this[9];
  v3 = this + 12;
  v5 = (this[9].Ptr != 0LL) - 1;
  AcquireSRWLockShared(this + 12);
  v6 = v5 & 0x8007000E;
  if ( v6 >= 0 )
    v6 = CMarshaledInterface::_Unmarshal(v2, &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24, (void **)a2, 0);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return (unsigned int)v6;
}
