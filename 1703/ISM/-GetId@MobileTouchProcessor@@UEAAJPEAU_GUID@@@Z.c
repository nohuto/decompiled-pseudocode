/*
 * XREFs of ?GetId@MobileTouchProcessor@@UEAAJPEAU_GUID@@@Z @ 0x180057A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileTouchProcessor::GetId(MobileTouchProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MobileTouch;
  return result;
}
