/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x14043BDF4
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x14055600C (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x1405ABF60 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x1407DC428 (PpDevCfgInit.c)
 * Callees:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140019510 (RtlEnumerateGenericTableLikeADirectory.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectIsEnumerable @ 0x14043BBF4 (PiDmObjectIsEnumerable.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x14043BFE0 (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        int a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64, _BYTE *),
        __int64 a3)
{
  int v3; // edi
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // rsi
  int v7; // r9d
  const wchar_t *v8; // rax
  unsigned int **v9; // rax
  unsigned int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  unsigned int **v16; // rax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  _BYTE v20[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  char v24; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0;
  P = &v24;
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  v20[0] = 0;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  v27 = v7;
  v26 = 0;
  v8 = L"\\\\?\\";
  if ( v7 != 3 )
    v8 = &word_1405C95F0;
  v25 = v8;
  PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
  v9 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(
                          ObjectManagerForObjectType + 1,
                          0LL,
                          0LL,
                          0,
                          RestartKey,
                          &DeleteCount,
                          &P);
  if ( v9 )
  {
    v10 = *v9;
    _InterlockedIncrement((volatile signed __int32 *)*v9 + 2);
  }
  else
  {
    v10 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  while ( v10 )
  {
    if ( PiDmObjectIsEnumerable((ULONG_PTR)v10, v11, v12, v13) )
      v3 = a2(v10, a3, v20);
    if ( v3 < 0 || v20[0] )
    {
      PiDmObjectRelease(v10);
      return (unsigned int)v3;
    }
    P = v10;
    PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
    v16 = (unsigned int **)RtlEnumerateGenericTableLikeADirectory(
                             ObjectManagerForObjectType + 1,
                             0LL,
                             0LL,
                             1u,
                             RestartKey,
                             &DeleteCount,
                             &P);
    if ( v16 )
    {
      v10 = *v16;
      _InterlockedIncrement((volatile signed __int32 *)*v16 + 2);
    }
    else
    {
      v10 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)v3;
}
