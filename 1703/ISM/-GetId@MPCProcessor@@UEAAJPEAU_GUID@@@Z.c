/*
 * XREFs of ?GetId@MPCProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180047260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCProcessor::GetId(MPCProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPC;
  return result;
}
