/*
 * XREFs of CiThreadInsertInTree @ 0x1C0002260
 * Callers:
 *     CiThreadCreate @ 0x1C000A9A0 (CiThreadCreate.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 */

bool __fastcall CiThreadInsertInTree(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8
  char v5; // bl
  unsigned __int64 v6; // rax

  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v2 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    while ( 1 )
    {
      v6 = v2[7];
      if ( v4 < v6 )
      {
        v3 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
      }
      else
      {
        if ( v4 <= v6 )
        {
          v5 = 1;
          goto LABEL_10;
        }
        v3 = (_QWORD *)v2[1];
        if ( !v3 )
        {
          LOBYTE(v3) = 1;
          break;
        }
      }
      v2 = v3;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue, v2, (unsigned __int8)v3, a1 + 40);
LABEL_10:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  return v5 == 0;
}
