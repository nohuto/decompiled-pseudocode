/*
 * XREFs of ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004C6C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApiPortClient::Translate(unsigned int a1)
{
  int v1; // edx
  __int64 v2; // rdx

  if ( a1 + 805306334 <= 0x1F )
  {
    v1 = -2145124351;
    if ( _bittest(&v1, a1 + 805306334) )
      return (unsigned int)-2144980991;
  }
  if ( a1 + 805305825 <= 0x34 )
  {
    v2 = 0x10000000000041LL;
    if ( _bittest64(&v2, (int)(a1 + 805305825)) )
      return (unsigned int)-2144980991;
  }
  return a1;
}
