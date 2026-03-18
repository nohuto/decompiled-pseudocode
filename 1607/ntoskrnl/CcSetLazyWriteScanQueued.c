/*
 * XREFs of CcSetLazyWriteScanQueued @ 0x14006E9FC
 * Callers:
 *     CcLazyWriteScan @ 0x140070CA0 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x14013FDAC (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CcSetLazyWriteScanQueued(int a1, char a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 2;
      if ( v4 )
      {
        v5 = v4 - 4;
        if ( v5 )
        {
          if ( v5 == 8 )
            byte_1403231C6 = a2;
        }
        else
        {
          byte_1403231C2 = a2;
        }
      }
      else
      {
        byte_1403231C3 = a2;
      }
    }
    else
    {
      byte_1403231C5 = a2;
    }
  }
  else
  {
    byte_1403231C4 = a2;
  }
}
