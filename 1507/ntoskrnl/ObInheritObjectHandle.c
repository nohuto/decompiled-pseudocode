/*
 * XREFs of ObInheritObjectHandle @ 0x140523C8C
 * Callers:
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     EtwTraceDuplicateHandle @ 0x1406E379C (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  signed __int64 BugCheckParameter4; // rax
  int v8; // edi
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v5 = (*(__int64 *)a4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, v5 + 48, 0x10uLL, BugCheckParameter4);
  v11 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v8 = ObpIncrementHandleCountEx(3u, (__int64)&v11, a1, v5 + 48, 0, 0, 0LL);
  if ( v8 < 0 )
  {
    ObfDereferenceObject((PVOID)(v5 + 48));
  }
  else if ( (xmmword_1403D1290 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      v5 + 48,
      *(_DWORD *)(a1 + 992),
      *(_DWORD *)(a1 + 744),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)]);
  }
  return (unsigned int)v8;
}
