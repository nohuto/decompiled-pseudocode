/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1404E4280
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1404C5A54 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x140564594 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x1407B8124 (PpDevCfgInit.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1400C1BEC (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectIsEnumerable @ 0x1404E4210 (PiDmObjectIsEnumerable.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1404E450C (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        int a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64, char *),
        __int64 a3)
{
  int v3; // edi
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // rax
  _RTL_AVL_TABLE *v7; // rsi
  int v8; // r9d
  const wchar_t *v9; // rax
  unsigned int **v10; // rax
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v20[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  char v24; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0;
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = &v24;
  v20[0] = 0;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  v26 = 0;
  v7 = ObjectManagerForObjectType;
  v27 = v8;
  v9 = L"\\\\?\\";
  if ( v8 != 3 )
    v9 = &word_1405841A0;
  v25 = v9;
  PiDmObjectManagerAcquireSharedLock(v7);
  v10 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(v7 + 1, 0LL, 0LL, 0, RestartKey, &DeleteCount, &P);
  if ( v10 )
  {
    v11 = *v10;
    _InterlockedIncrement((volatile signed __int32 *)*v10 + 2);
  }
  else
  {
    v11 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  while ( v11 )
  {
    if ( PiDmObjectIsEnumerable((ULONG_PTR)v11) )
      v3 = a2(v11, a3, v20);
    if ( v3 < 0 || v20[0] )
    {
      PiDmObjectRelease(v11);
      return (unsigned int)v3;
    }
    P = v11;
    PiDmObjectManagerAcquireSharedLock(v7);
    v15 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(v7 + 1, 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v15 )
    {
      v11 = *v15;
      _InterlockedIncrement((volatile signed __int32 *)*v15 + 2);
    }
    else
    {
      v11 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v7);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)v3;
}
