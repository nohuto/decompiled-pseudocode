/*
 * XREFs of GetObjectIdString @ 0x14018F6B8
 * Callers:
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectIdString(int a1)
{
  const char *result; // rax

  if ( a1 == -5 )
    return "OBJID_VSCROLL";
  if ( a1 == -6 )
    return "OBJID_HSCROLL";
  result = "OBJID_CLIENT";
  if ( a1 != -4 )
    return "UNKNOWN";
  return result;
}
