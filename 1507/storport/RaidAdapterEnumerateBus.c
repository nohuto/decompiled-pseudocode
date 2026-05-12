/*
 * XREFs of RaidAdapterEnumerateBus @ 0x1C000C054
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0009A14 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaidAdapterEnumerateBus(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  int v8; // ebp
  int v9; // esi
  __int64 result; // rax
  __int64 i; // rdi
  unsigned int v12; // [rsp+20h] [rbp-148h]
  _BYTE v13[256]; // [rsp+30h] [rbp-138h] BYREF

  v3 = a1[376];
  v5 = a1[401];
  v6 = 0;
  v7 = a1[450];
  memset(v13, 1, 0xFFuLL);
  v8 = 0;
  if ( !v3 )
    return v6;
  while ( 1 )
  {
    v9 = 0;
    if ( v5 )
      break;
LABEL_9:
    if ( ++v8 >= v3 )
      return v6;
  }
  LOBYTE(v12) = v8;
  HIBYTE(v12) = 0;
  while ( 1 )
  {
    *(_WORD *)((char *)&v12 + 1) = (unsigned __int8)v9;
    result = RaidBusEnumeratorGetLunList(a3, v12, v13);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
    {
      if ( v13[i] )
      {
        BYTE2(v12) = i;
        result = RaidBusEnumeratorVisitUnit(a3, v12);
        v6 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( ++v9 >= v5 )
      goto LABEL_9;
  }
}
