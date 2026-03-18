/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C008084C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     <none>
 */

union _SLIST_HEADER *__fastcall DirectComposition::CConnection::CConnection(union _SLIST_HEADER *this)
{
  union _SLIST_HEADER *result; // rax

  this[1].Region = (ULONGLONG)&DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  *((_BYTE *)&this[2].HeaderX64 + 8) = 0;
  this[4].Alignment = 8LL;
  this[12].Region = 0LL;
  LOBYTE(this[13].Alignment) = 0;
  LOBYTE(this[15].Alignment) = 0;
  this[14].Alignment = (ULONGLONG)&this[13].Region;
  this[13].Region = (ULONGLONG)&this[13].Region;
  LODWORD(this->Alignment) = 1;
  InitializeSListHead(this + 6);
  this[12].Alignment = (ULONGLONG)&this[11].Region;
  this[11].Region = (ULONGLONG)&this[11].Region;
  result = this;
  LODWORD(this[11].Alignment) = 60;
  *((_DWORD *)&this[11].HeaderX64 + 1) = 1;
  return result;
}
