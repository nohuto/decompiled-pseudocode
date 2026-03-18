/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x14043D0A0
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 */

__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  _BYTE *v9; // rsi
  signed __int64 v10; // rbx
  int v12; // r14d
  int v13; // r10d
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // r15
  char *v19; // r15
  signed __int64 *v20; // rdi
  __int64 v21; // rbp
  unsigned int v22; // r12d
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  ULONG_PTR v25; // rbx
  _QWORD *i; // r13
  char *v27; // rdx
  int ObjectProperty; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp-40h]
  char v31; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+18h] BYREF

  v32 = a3;
  v9 = a7;
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  v12 = 0;
  if ( a7 )
  {
    v13 = a8;
    if ( !a8 )
      v9 = 0LL;
  }
  else
  {
    v13 = 0;
  }
  if ( (int)a1 >= 6 || a4 )
    return 3221225494LL;
  v14 = &unk_14023C2B8;
  v15 = 0;
  while ( 1 )
  {
    v16 = v14[1];
    if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v18 = *(_QWORD *)v16 - *(_QWORD *)a5;
      if ( *(_QWORD *)v16 == *(_QWORD *)a5 )
        v18 = *(_QWORD *)(v16 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v18 && (_DWORD)a1 == *(_DWORD *)v14 )
        break;
    }
    ++v15;
    v14 += 7;
    if ( v15 >= 3 )
      return 3221225494LL;
  }
  v19 = (char *)&PiDmAggregatedBooleanDefs + 56 * v15;
  if ( !v19 )
    return 3221225494LL;
  *a6 = 17;
  *a9 = 1;
  if ( !v13 )
    return 3221225507LL;
  result = PiDmGetObject(a1, a2, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v20 = (signed __int64 *)BugCheckParameter2;
    v21 = *((_QWORD *)v19 + 6);
    PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
    if ( *(_DWORD *)((char *)v20 + v21) == 0x80000000 )
    {
      v30 = (signed __int64 *)((char *)v20 + *((_QWORD *)&PiDmListDefs + 5 * *((int *)v19 + 10) + 1));
      for ( i = (_QWORD *)*v30; i != v30; i = (_QWORD *)*i )
      {
        v27 = (char *)i - *((_QWORD *)&PiDmListDefs + 5 * *((int *)v19 + 10) + 3);
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *((_QWORD *)v27 + 2),
                           *((_DWORD *)v27 + 7),
                           0LL,
                           0LL,
                           *((_QWORD *)v19 + 1),
                           (__int64)&v32,
                           (__int64)&v31,
                           1,
                           (__int64)&a7,
                           0);
        v22 = ObjectProperty;
        if ( ObjectProperty < 0 )
        {
          if ( ObjectProperty != -1073741275 )
            goto LABEL_22;
        }
        else if ( (_DWORD)v32 == 17 && v31 == -1 )
        {
          ++v12;
        }
      }
      *(_DWORD *)((char *)v20 + v21) = v12;
    }
    v22 = 0;
    *v9 = (*(_DWORD *)((char *)v20 + v21) <= 0) - 1;
LABEL_22:
    _m_prefetchw(v20);
    v23 = *v20;
    if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = v23 - 16;
    if ( (v23 & 2) != 0
      || (v24 = *v20, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v10, v23)) )
    {
      v25 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v25 = BugCheckParameter2;
    }
    KeAbPostRelease(v25);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmObjectRelease((PVOID)BugCheckParameter2);
    return v22;
  }
  return result;
}
