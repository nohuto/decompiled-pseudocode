/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180065190
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180065C70 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(
        CPartitionVerticalBlankScheduler *this)
{
  int v1; // r9d
  unsigned int v2; // r8d
  unsigned int i; // edx
  __int64 v5; // rcx
  unsigned int v7; // edx
  int v8; // r9d
  __int64 v9; // rcx

  v1 = *((_DWORD *)this + 5573);
  v2 = -1;
  if ( v1 == -1 )
  {
    v7 = *((_DWORD *)this + 5572);
    if ( v7 != -1 )
    {
      v8 = ((_BYTE)v7 + 1) & 0xF;
      while ( v7 != v8 )
      {
        v9 = 1376LL * v7;
        if ( *((_BYTE *)this + v9 + 552) )
          break;
        if ( *((_BYTE *)this + v9 + 537) )
          v2 = v7;
        v7 = ((_BYTE)v7 - 1) & 0xF;
      }
    }
  }
  else
  {
    for ( i = ((_BYTE)v1 + 1) & 0xF; i != v1; i = ((_BYTE)i + 1) & 0xF )
    {
      if ( v2 != -1 )
        break;
      v5 = 1376LL * i;
      if ( *((_BYTE *)this + v5 + 537) && !*((_BYTE *)this + v5 + 552) )
        v2 = i;
    }
  }
  return v2;
}
