/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0005348
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00053C4 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0005464 (ApiSetGetUserHandedness.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00E0F1C (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( *(_DWORD *)this && UserHandedness != *(_DWORD *)this )
    RIMDeadzone::Release(this);
  *((_DWORD *)this + 10) = 1;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
}
