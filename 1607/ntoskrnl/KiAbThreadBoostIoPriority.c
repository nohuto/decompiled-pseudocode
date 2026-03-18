/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x14006C5A4
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14006C0E4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140062420 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1400ACCF0 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  volatile signed __int32 *v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v8 = 1;
  if ( a3 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 1788)) == 1 )
      KeAbProcessEffectiveIoPriorityChange(a1, 0);
    v9 = (volatile signed __int32 *)(a1 + 1416);
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v9 = (volatile signed __int32 *)(a1 + 1412);
  }
  _InterlockedOr(v11, 0);
  if ( *v9 )
    goto LABEL_13;
  if ( !a2 )
  {
    if ( a3 )
      *a4 |= 2u;
    else
      *a4 |= 1u;
LABEL_13:
    _InterlockedAdd(v9, 1u);
    return v8;
  }
  if ( a3 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1788));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 1384) )
    KiAbQueueAutoBoostDpc(a2 - 25776);
  return 0;
}
