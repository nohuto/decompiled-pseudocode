/*
 * XREFs of ACPICMLidWorker @ 0x1C0037550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIButtonEvent @ 0x1C00226D0 (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  __int64 result; // rax
  BOOL v5; // edi
  KIRQL v6; // al
  int v7; // edx
  int v8; // edx
  int v9; // [rsp+70h] [rbp+18h] BYREF

  result = ACPIGet((_QWORD *)a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v9, 0LL);
  if ( (int)result >= 0 )
  {
    v5 = v9 != 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
    *(_BYTE *)(a1 + 184) = v5;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 176), v6);
    v7 = 0x80000;
    if ( (a2 & 1) != 0 )
      v7 = 786432;
    if ( v5 )
      v8 = v7 | 0x80000000;
    else
      v8 = v7 | 4;
    return ACPIButtonEvent(*(_QWORD *)(a1 + 712), v8);
  }
  return result;
}
