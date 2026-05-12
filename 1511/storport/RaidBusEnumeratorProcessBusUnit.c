/*
 * XREFs of RaidBusEnumeratorProcessBusUnit @ 0x1C000F52C
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C000E040 (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     StorCompareScsiIdentity @ 0x1C000CD54 (StorCompareScsiIdentity.c)
 *     StorDeleteScsiIdentity @ 0x1C000F658 (StorDeleteScsiIdentity.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 */

_OWORD *__fastcall RaidBusEnumeratorProcessBusUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _OWORD *result; // rax
  __int64 *v6; // r15
  __int64 *v7; // r14
  int v8; // eax
  _QWORD *v9; // r8
  int v10; // ecx
  unsigned int v11; // ebp
  PVOID Pool; // rax
  PVOID v13; // rsi
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int16 v22; // dx
  __int64 v23; // rcx
  char v24; // al

  v3 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a2 + 84) )
  {
    if ( !*(_BYTE *)(a2 + 85) )
      goto LABEL_11;
    v6 = (__int64 *)(a2 + 32);
    v7 = (__int64 *)(v3 + 96);
    v8 = StorCompareScsiIdentity((__int64 *)(a2 + 32), (__int64 *)(v3 + 96));
    if ( v8 == 2 )
    {
      v10 = (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 3LL) | (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 2LL) << 8))
          + 4;
      if ( v10 > 0xFFFF )
        v10 = 0xFFFF;
      v11 = v10;
      Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v10, 0x32316152u, *(_QWORD *)(*a1 + 8LL));
      v13 = Pool;
      if ( Pool )
      {
        memmove(Pool, *(const void **)(a2 + 64), v11);
        v14 = *(void **)(v3 + 128);
        if ( v14 )
          ExFreePoolWithTag(v14, 0x32316152u);
        *(_QWORD *)(v3 + 128) = v13;
      }
    }
    else
    {
      if ( v8 == 3 )
      {
        v15 = *(_QWORD *)(v3 + 136);
        *(_QWORD *)(v3 + 136) = *(_QWORD *)(a2 + 72);
        v16 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 72) = v15;
        v17 = *(_QWORD *)(v3 + 128);
        *(_QWORD *)(v3 + 128) = v16;
        v18 = *v6;
        *(_QWORD *)(a2 + 64) = v17;
        v19 = *v7;
        *v7 = v18;
        v20 = *(_QWORD *)(a2 + 48);
        *v6 = v19;
        LOWORD(v19) = *(_WORD *)(v3 + 106);
        v21 = *(_QWORD *)(v3 + 112);
        v22 = *(_WORD *)(v3 + 104);
        *(_QWORD *)(v3 + 112) = v20;
        *(_WORD *)(v3 + 104) = *(_WORD *)(a2 + 40);
        *(_WORD *)(v3 + 106) = *(_WORD *)(a2 + 42);
        *(_QWORD *)(a2 + 48) = v21;
        *(_WORD *)(a2 + 40) = v22;
        *(_WORD *)(a2 + 42) = v19;
        v23 = *(_QWORD *)(v3 + 24);
        if ( v23 )
        {
          v24 = *(_BYTE *)(v23 + 109);
          if ( (v24 & 0x10) == 0 )
            *(_BYTE *)(v23 + 109) = v24 | 0x10;
        }
        v8 = 0;
      }
      if ( v8 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + 144LL) |= 0x40u;
        goto LABEL_11;
      }
    }
    *(_DWORD *)(a2 + 80) = 2;
    return (_OWORD *)StorDeleteScsiIdentity((void *)(a2 + 32));
  }
  if ( !*(_BYTE *)(a2 + 85) )
    return (_OWORD *)StorDeleteScsiIdentity((void *)(a2 + 32));
  *(_DWORD *)(a2 + 80) = 1;
LABEL_11:
  result = RaidAllocatePool(NonPagedPoolNx, 0x58uLL, 0x74456152u, *(_QWORD *)(*a1 + 8LL));
  if ( result )
  {
    *result = *(_OWORD *)a2;
    result[1] = *(_OWORD *)(a2 + 16);
    result[2] = *(_OWORD *)(a2 + 32);
    result[3] = *(_OWORD *)(a2 + 48);
    result[4] = *(_OWORD *)(a2 + 64);
    *((_QWORD *)result + 10) = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(a2 + 80) == 1 )
      a1[7] = 0LL;
    ++result;
    v9 = (_QWORD *)a1[16];
    *(_QWORD *)result = a1 + 15;
    *((_QWORD *)result + 1) = v9;
    if ( (_QWORD *)*v9 != a1 + 15 )
      __fastfail(3u);
    *v9 = result;
    a1[16] = result;
  }
  return result;
}
