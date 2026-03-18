/*
 * XREFs of ObInheritObjectHandle @ 0x1403E2FE4
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     EtwTraceDuplicateHandle @ 0x1406607E8 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rsi
  int v9; // ebx
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = (*(__int64 *)a4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCount((volatile signed __int64 *)v6);
  v11 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  ExUnlockHandleTableEntry(a3, a4);
  v9 = ObpIncrementHandleCountEx(3, (unsigned int)&v11, a1, (int)v6 + 48, 0, 0, 0LL);
  if ( v9 < 0 )
  {
    ObfDereferenceObject((PVOID)(v6 + 48));
  }
  else if ( (xmmword_140382290 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      v6 + 48,
      *(_DWORD *)(a1 + 992),
      *(_DWORD *)(a1 + 744),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)]);
  }
  return (unsigned int)v9;
}
