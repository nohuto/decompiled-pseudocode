/*
 * XREFs of PspCreatePicoThread @ 0x1406C5D94
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  char v5; // bl
  int inserted; // esi
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned __int64 v8; // rtt
  _QWORD *v9; // r15
  unsigned __int64 v10; // rtt
  __int16 v11; // ax
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  PVOID v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20[154]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[50]; // [rsp+570h] [rbp+470h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v15 = 0LL;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    inserted = -1073741811;
LABEL_3:
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    goto LABEL_16;
  }
  inserted = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)a1,
               2u,
               (POBJECT_TYPE)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    if ( *((_QWORD *)Object + 223) )
    {
      --CurrentThread->KernelApcDisable;
      v5 = 1;
      _m_prefetchw(&v7[92]);
      v8 = v7[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[92], v8 + 2, v8)
        && !ExfAcquireRundownProtection(v7 + 92) )
      {
        inserted = -1073741558;
        goto LABEL_3;
      }
      v7 = (struct _EX_RUNDOWN_REF *)Object;
      v5 = 3;
      ObfReferenceObjectWithTag(Object, 0x72437350u);
      memset(v20, 0, sizeof(v20));
      v20[31] = *(_QWORD *)(a1 + 16);
      v20[16] = *(_QWORD *)(a1 + 24);
      v20[17] = *(_QWORD *)(a1 + 32);
      LOWORD(v20[7]) = 51;
      LOWORD(v20[32]) = 639;
      v20[19] = *(_QWORD *)(a1 + 8);
      v18 = *(_DWORD *)(a1 + 40);
      v19 = *(_QWORD *)(a1 + 48);
      WORD1(v20[8]) = 43;
      LODWORD(v20[35]) = 8064;
      v20[6] = 0x1F800010000BLL;
      *(_DWORD *)((char *)&v20[7] + 2) = 2818091;
      *(_DWORD *)((char *)&v20[7] + 6) = 2818131;
      LODWORD(v14) = 1;
      v17 = 0LL;
      inserted = PspAllocateThread(
                   (ULONG_PTR)v7,
                   0LL,
                   0,
                   0LL,
                   v20,
                   (PINITIAL_TEB *)&v17,
                   0LL,
                   0LL,
                   (int *)&v14,
                   &v15,
                   0LL,
                   (__int64)v21);
      if ( inserted >= 0 )
      {
        v9 = v15;
        inserted = PspInsertThread(
                     (ULONG_PTR)v15,
                     (__int64)v7,
                     0LL,
                     &v14,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)v21,
                     &v16,
                     0LL);
        if ( inserted >= 0 )
        {
          inserted = 0;
          v9[241] = *(_QWORD *)(a1 + 56);
          *a2 = v16;
        }
        if ( v9 )
          ObfDereferenceObject(v9);
      }
    }
    else
    {
      inserted = -1073741816;
    }
  }
  else
  {
    v7 = 0LL;
    Object = 0LL;
  }
LABEL_16:
  if ( (v5 & 2) != 0 )
  {
    _m_prefetchw(&v7[92]);
    v10 = v7[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[92], v10 - 2, v10) )
      ExfReleaseRundownProtection(v7 + 92);
    v7 = (struct _EX_RUNDOWN_REF *)Object;
  }
  if ( (v5 & 1) != 0 )
  {
    v11 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x72437350u);
  return (unsigned int)inserted;
}
