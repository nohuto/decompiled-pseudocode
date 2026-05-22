/*
 * XREFs of ?GetId@ControllerProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1800326A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::GetId(ControllerProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Controller;
  return result;
}
