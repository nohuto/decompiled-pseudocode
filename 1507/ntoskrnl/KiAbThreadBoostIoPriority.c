/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x1400D635C
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400F475C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  *a3 = 0;
  PsBoostThreadIoEx(a1, 0, 0, 0LL);
  _InterlockedOr(v8, 0);
  if ( *(_DWORD *)(a1 + 1412) )
  {
    v6 = 1;
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v6 = 1;
    *a3 = 1;
    IoBoostThreadIoPriority(a1, 2LL, 0x80000000LL);
LABEL_8:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1412), 1u);
    return v6;
  }
  PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 1384) )
    KiAbQueueAutoBoostDpc(a2 - 25648);
  return 0;
}
