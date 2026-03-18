/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x1401027C4
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, _QWORD *a2, _DWORD *a3)
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
    IoBoostThreadIoPriority(a1, 2LL);
LABEL_8:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1412), 1u);
    return v6;
  }
  PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, (_QWORD *)(a1 + 1384)) )
    KiAbQueueAutoBoostDpc(a2 - 3206);
  return 0;
}
