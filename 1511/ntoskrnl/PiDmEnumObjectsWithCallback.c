/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140440A34
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x140496EF0 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x14051B528 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x1407682AC (PpDevCfgInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1400902B8 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14043D718 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectIsEnumerable @ 0x14044046C (PiDmObjectIsEnumerable.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140440CBC (PiDmObjectManagerAcquireSharedLock.c)
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
  unsigned int **v12; // rax
  char v14[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  char v18; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v19; // [rsp+70h] [rbp-49h]
  int v20; // [rsp+78h] [rbp-41h]
  int v21; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0;
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = &v18;
  v14[0] = 0;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  v20 = 0;
  v7 = ObjectManagerForObjectType;
  v21 = v8;
  v9 = L"\\\\?\\";
  if ( v8 != 3 )
    v9 = &word_140551830;
  v19 = v9;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( v11 )
  {
    if ( PiDmObjectIsEnumerable((ULONG_PTR)v11) )
      v3 = a2(v11, a3, v14);
    if ( v3 < 0 || v14[0] )
    {
      PiDmObjectRelease(v11);
      return (unsigned int)v3;
    }
    P = v11;
    PiDmObjectManagerAcquireSharedLock(v7);
    v12 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(v7 + 1, 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v12 )
    {
      v11 = *v12;
      _InterlockedIncrement((volatile signed __int32 *)*v12 + 2);
    }
    else
    {
      v11 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v7);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)v3;
}
