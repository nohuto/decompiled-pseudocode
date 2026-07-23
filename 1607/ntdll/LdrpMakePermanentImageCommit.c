/*
 * XREFs of LdrpMakePermanentImageCommit @ 0x18002DB98
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 *     LdrpLocateMrdata @ 0x1800D2F70 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall LdrpMakePermanentImageCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  unsigned __int64 *v5; // r10

  result = a2 / LdrpPageSize;
  v3 = a2 / LdrpPageSize
     + (LdrpPageSize
      + (unsigned __int64)(((unsigned int)a2 & ((_DWORD)LdrpPageSize - 1))
                         + ((unsigned int)a1 & ((_DWORD)LdrpPageSize - 1)))
      - 1)
     / LdrpPageSize;
  v4 = v3;
  v5 = (unsigned __int64 *)(a1 & ~(LdrpPageSize - 1));
  if ( v3 )
  {
    do
    {
      result = *v5;
      *v5 = *v5;
      v5 = (unsigned __int64 *)((char *)v5 + LdrpPageSize);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
