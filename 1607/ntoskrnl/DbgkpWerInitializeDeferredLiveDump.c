/*
 * XREFs of DbgkpWerInitializeDeferredLiveDump @ 0x14061C380
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x14061BDEC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateTimer @ 0x14015B8D0 (ZwCreateTimer.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401B7CA8 (DbgkpWerAllocateNonpagedPool.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall DbgkpWerInitializeDeferredLiveDump(__int64 a1)
{
  __int64 v1; // r14
  NTSTATUS v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  _QWORD *NonpagedPool; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE TimerHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  TimerHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateTimer(&TimerHandle, 0x1F0003u, &ObjectAttributes, NotificationTimer);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandleWithTag(TimerHandle, 0x1F0003u, ExTimerObjectType, 0, 0x57676244u, &Object, 0LL);
    v6 = Object;
    v4 = v5;
    if ( v5 >= 0 )
    {
      ZwClose(TimerHandle);
      TimerHandle = 0LL;
      *(_QWORD *)(v1 + 16) = v6;
      NonpagedPool = DbgkpWerAllocateNonpagedPool();
      if ( !NonpagedPool )
      {
        DbgPrintEx(5u, 0, "DBGK: Could not allocate timer.\n");
        return 3221225495LL;
      }
      *(_QWORD *)(a1 + 120) = NonpagedPool;
      *NonpagedPool = 0LL;
      NonpagedPool[2] = DbgkpWerDeferredWriteRoutine;
      NonpagedPool[3] = a1;
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Failed to reference timer, status 0x%X\n", v5);
    }
    if ( v4 < 0 )
    {
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
      if ( TimerHandle )
        ZwClose(TimerHandle);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Failed to create timer, status 0x%X\n", v3);
  }
  return (unsigned int)v4;
}
