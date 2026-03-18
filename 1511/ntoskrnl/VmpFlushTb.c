/*
 * XREFs of VmpFlushTb @ 0x14020C4C4
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpInvalidateOutstandingFaults @ 0x14020C814 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x14020C900 (VmpProcessContextLockExclusive.c)
 *     VmpProcessFlushEntire @ 0x14020C924 (VmpProcessFlushEntire.c)
 *     VmpProcessInvalidateSlat @ 0x14020C99C (VmpProcessInvalidateSlat.c)
 *     VmpProcessMemoryRangeCompareVpn @ 0x14020C9C8 (VmpProcessMemoryRangeCompareVpn.c)
 */

unsigned __int64 __fastcall VmpFlushTb(volatile LONG *SpinLock, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rsi
  unsigned __int64 result; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1LL;
  v4 = a3;
  if ( !a2 )
  {
    v3 = VmpProcessContextLockExclusive(SpinLock);
    result = VmpProcessFlushEntire(SpinLock);
    goto LABEL_41;
  }
  result = a2;
  v7 = 0LL;
  v8 = (unsigned __int64)&a3[a2];
  if ( (unsigned __int64)a3 < v8 )
  {
    while ( 1 )
    {
      result = (unsigned __int64)MmHighestUserAddress;
      if ( *v4 > (unsigned __int64)MmHighestUserAddress )
        goto LABEL_40;
      if ( v3 == -1 )
        v3 = VmpProcessContextLockExclusive(SpinLock);
      result = (*v4 & 0x7FFLL) + 1;
      if ( (*v4 & 0x800LL) != 0 )
        result <<= 9;
      v9 = *v4 >> 12;
      v10 = v9 + result - 1;
      while ( 1 )
      {
        v16[0] = v9;
        if ( v9 > v10 )
          goto LABEL_40;
        if ( !v7 || v9 < v7[8] || v9 > v7[9] )
          break;
LABEL_31:
        result = v7[8];
        if ( v9 < result )
        {
          if ( v10 < result )
            goto LABEL_40;
          v9 = v7[8];
          v16[0] = v9;
        }
        v14 = v10;
        if ( v10 > v7[9] )
          v14 = v7[9];
        v15 = 1 - v9 + v14;
        VmpProcessInvalidateSlat(SpinLock, v9 + v7[6] - v7[8], v15);
        result = VmpInvalidateOutstandingFaults(SpinLock, v16[0], v15);
        v9 = v15 + v16[0];
      }
      v11 = (_QWORD *)*((_QWORD *)SpinLock + 3);
      v7 = 0LL;
      if ( !v11 )
        goto LABEL_39;
      while ( 1 )
      {
        result = VmpProcessMemoryRangeCompareVpn(v16, v11);
        if ( !(_DWORD)result )
          break;
        if ( (result & 0x80000000) == 0LL )
        {
          v11 = (_QWORD *)v11[1];
        }
        else
        {
          v7 = v11;
          v11 = (_QWORD *)*v11;
        }
        if ( !v11 )
          goto LABEL_29;
      }
      v7 = v11;
      v12 = 0LL;
      v13 = (_QWORD *)*v11;
      if ( !v13 )
        goto LABEL_29;
      do
      {
        result = VmpProcessMemoryRangeCompareVpn(v16, v13);
        if ( (result & 0x80000000) == 0LL )
        {
          if ( (int)result > 0 )
          {
            v13 = (_QWORD *)v13[1];
            continue;
          }
          v12 = v13;
        }
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
      if ( v12 )
        v7 = v12;
LABEL_29:
      if ( v7 )
      {
        v9 = v16[0];
        goto LABEL_31;
      }
LABEL_39:
      v7 = 0LL;
LABEL_40:
      if ( (unsigned __int64)++v4 >= v8 )
      {
LABEL_41:
        if ( v3 != -1 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          result = (unsigned __int8)v3;
          __writecr8((unsigned __int8)v3);
        }
        return result;
      }
    }
  }
  return result;
}
