/*
 * XREFs of VmpFlushTbVaRange @ 0x140223EEC
 * Callers:
 *     VmpFlushTb @ 0x140223DB0 (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x1402243CC (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpInvalidateOutstandingFaults @ 0x140224248 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x140224334 (VmpProcessContextLockExclusive.c)
 *     VmpProcessMemoryRangeCompareVpn @ 0x140224358 (VmpProcessMemoryRangeCompareVpn.c)
 *     HvlMapGpaPages @ 0x14023CE54 (HvlMapGpaPages.c)
 */

void __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 *a6)
{
  _QWORD *v6; // rsi
  unsigned __int64 v9; // r10
  __int64 *v11; // r13
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  int v14; // eax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // r10
  bool v22; // cf
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  char v27; // [rsp+80h] [rbp+18h] BYREF

  v6 = (_QWORD *)*a4;
  v26 = a2;
  v9 = a2;
  if ( a2 > a3 )
    goto LABEL_38;
  v11 = a6;
  v12 = a5;
  do
  {
    if ( !v6 || v9 < v6[8] || v9 > v6[9] )
    {
      v13 = (_QWORD *)*((_QWORD *)SpinLock + 3);
      v6 = 0LL;
      if ( !v13 )
        goto LABEL_37;
      while ( 1 )
      {
        v14 = VmpProcessMemoryRangeCompareVpn(&v26, v13);
        if ( !v14 )
          break;
        if ( v14 >= 0 )
        {
          v13 = (_QWORD *)v13[1];
        }
        else
        {
          v6 = v13;
          v13 = (_QWORD *)*v13;
        }
        if ( !v13 )
          goto LABEL_22;
      }
      v6 = v13;
      v15 = 0LL;
      v16 = (_QWORD *)*v13;
      if ( !v16 )
        goto LABEL_22;
      while ( 1 )
      {
        v17 = VmpProcessMemoryRangeCompareVpn(&v26, v16);
        if ( v17 < 0 )
          goto LABEL_18;
        if ( v17 <= 0 )
          break;
        v16 = (_QWORD *)v16[1];
LABEL_19:
        if ( !v16 )
        {
          if ( v15 )
            v6 = v15;
LABEL_22:
          if ( v6 )
          {
            v9 = v26;
            goto LABEL_24;
          }
LABEL_37:
          v6 = 0LL;
          goto LABEL_38;
        }
      }
      v15 = v16;
LABEL_18:
      v16 = (_QWORD *)*v16;
      goto LABEL_19;
    }
LABEL_24:
    v18 = v6[8];
    if ( v9 < v18 )
    {
      if ( a3 < v18 )
        break;
      v9 = v6[8];
      v26 = v9;
    }
    v19 = a3;
    if ( a3 > v6[9] )
      v19 = v6[9];
    v20 = 1 - v9 + v19;
    if ( v20 > 0x40000LL - *v12 )
      v20 = 0x40000LL - *v12;
    HvlMapGpaPages(
      *((_QWORD *)SpinLock + 9),
      v9 + *((_DWORD *)v6 + 12) - *((_DWORD *)v6 + 16),
      1024,
      v20,
      0LL,
      (__int64)&v27);
    VmpInvalidateOutstandingFaults(SpinLock, v26, v20);
    v21 = v26;
    *v12 += v20;
    v9 = v20 + v21;
    v22 = *v12 < 0x40000uLL;
    v26 = v9;
    if ( !v22 )
    {
      v23 = *((_QWORD *)SpinLock + 5);
      v24 = *v11;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      __writecr8((unsigned __int8)v24);
      *v12 = 0LL;
      v25 = VmpProcessContextLockExclusive(SpinLock);
      v9 = v26;
      if ( v23 != *((_QWORD *)SpinLock + 5) )
        v6 = 0LL;
      *v11 = v25;
    }
  }
  while ( v9 <= a3 );
LABEL_38:
  *a4 = v6;
}
