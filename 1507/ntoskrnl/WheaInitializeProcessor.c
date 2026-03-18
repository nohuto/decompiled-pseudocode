/*
 * XREFs of WheaInitializeProcessor @ 0x140404D94
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaInitializeProcessor(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  __int64 i; // rbx

  result = 0LL;
  if ( a2 )
  {
    for ( i = qword_140356CC8; (__int64 *)i != &qword_140356CC8; i = *(_QWORD *)i )
    {
      result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_14036C968[6 * *(int *)(i + 40)])(
                 a2,
                 i + 89,
                 *(_QWORD *)(i + 56));
      if ( (int)result < 0 )
        break;
      *(_DWORD *)(i + 101) = 2;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x61656857u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[1] = &WheapErrorSourceTable;
      *(_DWORD *)PoolWithTag = dword_140356CC4;
      PoolWithTag[2] = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
      result = 0LL;
      *(_QWORD *)(a1 + 24528) = v6;
    }
    else
    {
      LODWORD(WheapStatus) = WheapStatus + 1;
      result = 3221225626LL;
      HIDWORD(WheapStatus) |= 0x10u;
    }
  }
  return result;
}
