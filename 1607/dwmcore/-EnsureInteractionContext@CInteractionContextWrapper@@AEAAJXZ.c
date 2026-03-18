/*
 * XREFs of ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800A5420
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1800BBDD0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x18016FC70 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801103A8 (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 */

__int64 __fastcall CInteractionContextWrapper::EnsureInteractionContext(CInteractionContextWrapper *this)
{
  __int64 result; // rax
  struct HINTERACTIONCONTEXT__ **v2; // rbx
  struct HINTERACTIONCONTEXT__ *v4; // rdx
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v2 = (struct HINTERACTIONCONTEXT__ **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) )
  {
    result = CreateInteractionContext((char *)this + 24);
    if ( (int)result >= 0 )
    {
      v5[1] = 0;
      v4 = *v2;
      v5[0] = 1;
      v5[2] = 1110704128;
      v5[3] = 1110704128;
      v6 = 0;
      return CInteractionContextWrapper::ConfigureInteractionContext(this, v4, (const struct SetupInfo *)v5);
    }
  }
  return result;
}
