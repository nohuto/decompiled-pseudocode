/*
 * XREFs of ?GetLength@CAccessObjectAce@CDacl@ATL@@UEBAIXZ @ 0x18006B820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessObjectAce::GetLength(ATL::CDacl::CAccessObjectAce *this)
{
  int v1; // ebx

  v1 = 44;
  if ( !*((_QWORD *)this + 19) )
    v1 = 28;
  if ( !*((_QWORD *)this + 20) )
    v1 -= 16;
  return v1 + GetLengthSid((char *)this + 16);
}
