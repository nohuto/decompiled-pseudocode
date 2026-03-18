/*
 * XREFs of CcSetLazyWriteScanQueued @ 0x140067FC0
 * Callers:
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
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
            byte_14034E046 = a2;
        }
        else
        {
          byte_14034E042 = a2;
        }
      }
      else
      {
        byte_14034E043 = a2;
      }
    }
    else
    {
      byte_14034E045 = a2;
    }
  }
  else
  {
    byte_14034E044 = a2;
  }
}
