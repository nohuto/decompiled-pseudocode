/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404E1C44
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 */

__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  _BYTE *v9; // r13
  signed __int64 v10; // rbx
  int Object; // esi
  int v14; // r10d
  _QWORD *v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v19; // rcx
  char *v20; // r14
  signed __int64 *v21; // rdi
  __int64 v22; // r12
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  ULONG_PTR v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *i; // r15
  char *v30; // rdx
  int ObjectProperty; // eax
  _BYTE v32[8]; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v34; // [rsp+70h] [rbp-10h]
  char v35; // [rsp+C0h] [rbp+40h] BYREF
  int v36; // [rsp+D0h] [rbp+50h]
  int v37; // [rsp+D4h] [rbp+54h]

  v37 = HIDWORD(a3);
  v9 = (_BYTE *)a7;
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  v36 = 0;
  Object = -1073741802;
  if ( a7 )
  {
    v14 = a8;
    v9 = (_BYTE *)(-(__int64)(a8 != 0) & a7);
  }
  else
  {
    v14 = 0;
  }
  if ( a1 < 6 && !a4 )
  {
    v15 = &unk_140257AC8;
    v16 = 0;
    while ( 1 )
    {
      v17 = v15[1];
      if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v19 = *(_QWORD *)v17 - *(_QWORD *)a5;
        if ( *(_QWORD *)v17 == *(_QWORD *)a5 )
          v19 = *(_QWORD *)(v17 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v19 && a1 == *(_DWORD *)v15 )
          break;
      }
      ++v16;
      v15 += 7;
      if ( v16 >= 3 )
        return (unsigned int)Object;
    }
    v20 = (char *)&PiDmAggregatedBooleanDefs + 56 * v16;
    if ( v20 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( v14 )
      {
        Object = PiDmGetObject((unsigned int)a1, a2, &BugCheckParameter2);
        if ( Object >= 0 )
        {
          v21 = (signed __int64 *)BugCheckParameter2;
          v22 = *((_QWORD *)v20 + 6);
          PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
          if ( *(_DWORD *)((char *)v21 + v22) == 0x80000000 )
          {
            v34 = (signed __int64 *)((char *)v21 + *((_QWORD *)&PiDmListDefs + 5 * *((int *)v20 + 10) + 1));
            for ( i = (_QWORD *)*v34; i != v34; i = (_QWORD *)*i )
            {
              v30 = (char *)i - *((_QWORD *)&PiDmListDefs + 5 * *((int *)v20 + 10) + 3);
              ObjectProperty = PnpGetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *((_QWORD *)v30 + 2),
                                 *((_DWORD *)v30 + 7),
                                 0LL,
                                 0LL,
                                 *((_QWORD *)v20 + 1),
                                 (__int64)&a7,
                                 (__int64)&v35,
                                 1,
                                 (__int64)v32,
                                 0);
              Object = ObjectProperty;
              if ( ObjectProperty < 0 )
              {
                if ( ObjectProperty != -1073741275 )
                  goto LABEL_19;
              }
              else if ( (_DWORD)a7 == 17 && v35 == -1 )
              {
                ++v36;
              }
            }
            *(_DWORD *)((char *)v21 + v22) = v36;
          }
          Object = 0;
          *v9 = (*(_DWORD *)((char *)v21 + v22) <= 0) - 1;
LABEL_19:
          _m_prefetchw(v21);
          v23 = *v21;
          if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v10 = v23 - 16;
          if ( (v23 & 2) != 0
            || (v24 = *v21, v24 != _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)BugCheckParameter2,
                                     v10,
                                     v23)) )
          {
            v25 = BugCheckParameter2;
            ExfReleasePushLock((_QWORD *)BugCheckParameter2);
          }
          else
          {
            v25 = BugCheckParameter2;
          }
          KeAbPostRelease(v25);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
          PiDmObjectRelease((PVOID)BugCheckParameter2);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)Object;
}
