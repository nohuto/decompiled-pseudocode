/*
 * XREFs of IoNotifyDump @ 0x140119D7C
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x1403A2150 (PopRestoreHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoNotifyDump(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( qword_140305E60 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        if ( v2 != 1 )
          return result;
        v3 = 5LL;
      }
      else
      {
        v3 = 4LL;
      }
    }
    else
    {
      v3 = 3LL;
    }
    return qword_140305E60(v3, 0LL, 0LL);
  }
  return result;
}
