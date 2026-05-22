/*
 * XREFs of ?GetId@PointerProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18005DBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerProcessor::GetId(PointerProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Pointer;
  return result;
}
