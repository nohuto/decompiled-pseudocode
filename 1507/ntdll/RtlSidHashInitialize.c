/*
 * XREFs of RtlSidHashInitialize @ 0x18006A990
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  ULONG v3; // edi
  unsigned __int8 *Sid; // rcx
  unsigned int v8; // edx
  __int64 v9; // r8

  v3 = 0;
  if ( !SidAttrHash )
    return -1073741811;
  memset(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    SidAttrHash->SidCount = SidCount;
    SidAttrHash->SidAttr = SidAttr;
    if ( SidCount > 0x40 )
      SidCount = 64;
    do
    {
      Sid = (unsigned __int8 *)SidAttr->Sid;
      ++SidAttr;
      v8 = Sid[4 * Sid[1] + 4];
      v9 = 1LL << v3++;
      SidAttrHash->Hash[v8 & 0xF] |= v9;
      SidAttrHash->Hash[((unsigned __int64)v8 >> 4) + 16] |= v9;
    }
    while ( v3 < SidCount );
  }
  return 0;
}
