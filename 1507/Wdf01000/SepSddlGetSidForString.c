/*
 * XREFs of SepSddlGetSidForString @ 0x1C00D3C88
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00D38D0 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(unsigned __int16 *String, void **SID, unsigned __int16 **End)
{
  unsigned int *p_KeyLen; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbx
  bool v9; // zf

  p_KeyLen = &SidLookup[0].KeyLen;
  v7 = 0LL;
  while ( _wcsnicmp(String, SidLookup[v7].Key, *p_KeyLen) )
  {
    v7 = (unsigned int)(v7 + 1);
    p_KeyLen += 6;
    if ( (unsigned int)v7 >= 0xE )
    {
      *SID = 0LL;
      return 3221225587LL;
    }
  }
  v8 = v7;
  v9 = SidLookup[v8].OsVer == WINXP_OR_LATER;
  *End = &String[SidLookup[v8].KeyLen];
  if ( !v9 || IoIsWdmVersionAvailable(1u, 0x20u) )
    *SID = *(void **)((char *)&SeExports->SeCreateTokenPrivilege + SidLookup[v8].ExportSidFieldOffset);
  else
    *SID = 0LL;
  return 0LL;
}
