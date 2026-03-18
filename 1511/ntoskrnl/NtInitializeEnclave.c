/*
 * XREFs of NtInitializeEnclave @ 0x14062A548
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x140629DFC (MiInitializeEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtInitializeEnclave(HANDLE Handle, __int64 a2, _OWORD *a3, int a4, _DWORD *a5)
{
  _OWORD *PoolWithTag; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v10; // rcx
  int v11; // ebx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rsi
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  _OWORD *v17; // [rsp+58h] [rbp-90h]
  _DWORD *v18; // [rsp+60h] [rbp-88h]
  HANDLE v19; // [rsp+78h] [rbp-70h]
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+80h] [rbp-68h] BYREF

  v19 = Handle;
  v18 = a5;
  Object = 0LL;
  PoolWithTag = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    v10 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  if ( a4 == 4096 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( PreviousMode == 1 && ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = PoolWithTag;
      v13 = 32LL;
      do
      {
        *v12 = *a3;
        v12[1] = a3[1];
        v12[2] = a3[2];
        v12[3] = a3[3];
        v12[4] = a3[4];
        v12[5] = a3[5];
        v12[6] = a3[6];
        v12 += 8;
        *(v12 - 1) = a3[7];
        a3 += 8;
        --v13;
      }
      while ( v13 );
      if ( Handle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        v11 = ObReferenceObjectByHandleWithTag(
                Handle,
                8u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x6D566D4Du,
                &Object,
                0LL);
        if ( v11 < 0 )
          goto LABEL_20;
        KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v20);
      }
      v11 = MiInitializeEnclave(a2, (int)PoolWithTag);
      goto LABEL_20;
    }
    v11 = -1073741670;
  }
  else
  {
    v11 = -1073741820;
  }
LABEL_20:
  v14 = Object;
  if ( Object && Handle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess(&v20, 0LL);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
