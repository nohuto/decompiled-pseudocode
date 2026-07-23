/*
 * XREFs of IovUtilRelateDeviceObjects @ 0x14070E2D8
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x14070B6C0 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IovUtilRelateDeviceObjects(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdi
  KIRQL v6; // dl
  __int64 v7; // rcx

  v5 = a1;
  if ( a1 == a2 )
  {
    *a3 = 0;
  }
  else
  {
    v6 = KeAcquireQueuedSpinLock(0xAuLL);
    if ( v5 == *(_QWORD *)(a2 + 24) )
    {
      *a3 = 1;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 24);
      if ( v7 == a2 )
      {
        *a3 = 2;
      }
      else
      {
        do
        {
          if ( v5 == a2 )
            break;
          v5 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 48LL);
        }
        while ( v5 );
        if ( v5 )
        {
          *a3 = 3;
        }
        else
        {
          if ( !v7 )
            goto LABEL_16;
          do
          {
            if ( v7 == a2 )
              break;
            v7 = *(_QWORD *)(v7 + 24);
          }
          while ( v7 );
          if ( v7 )
            *a3 = 4;
          else
LABEL_16:
            *a3 = 5;
        }
      }
    }
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  }
}
