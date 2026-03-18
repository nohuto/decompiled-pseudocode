/*
 * XREFs of CcSetLazyWriteScanQueued @ 0x140101C34
 * Callers:
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1401379A0 (CcQueueLazyWriteScanThread.c)
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
            byte_1402FDBA6 = a2;
        }
        else
        {
          byte_1402FDBA2 = a2;
        }
      }
      else
      {
        byte_1402FDBA3 = a2;
      }
    }
    else
    {
      byte_1402FDBA5 = a2;
    }
  }
  else
  {
    byte_1402FDBA4 = a2;
  }
}
