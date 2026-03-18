/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1401D822C
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v2; // rdi
  int v3; // ebx
  volatile void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+7Ch] [rbp+14h]
  void *Src; // [rsp+80h] [rbp+18h] BYREF
  volatile void *Address; // [rsp+88h] [rbp+20h] BYREF

  v11 = HIDWORD(a2);
  v2 = (unsigned int)Length;
  Src = 0LL;
  v9 = 0;
  v10 = Length;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Address);
  EtwTraceBeginCallback(123LL);
  v3 = KeUserModeCallback(123LL, &v10, 4LL, &Src, &v9);
  EtwTraceEndCallback(123LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Address);
  if ( v3 < 0 || v9 != 24 )
    return 0LL;
  Address = 0LL;
  RtlCopyFromUser(&Address, Src, 8uLL);
  v4 = Address;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
  ProbeForRead(v4, v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  return v4;
}
