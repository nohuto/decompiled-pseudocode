/*
 * XREFs of ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C0071ECC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C004B7E4 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::Init(__int64 StartContext, struct _KEVENT **a2)
{
  PVOID v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  NTSTATUS v7; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = operator new[](0x48uLL, 0x37346956u, (POOL_TYPE)512);
  *(_QWORD *)(StartContext + 152) = v4;
  if ( !v4 )
    return 3221225495LL;
  v5 = 0LL;
  v6 = 3LL;
  do
  {
    KeInitializeEvent((PRKEVENT)(v5 + *(_QWORD *)(StartContext + 152)), SynchronizationEvent, 0);
    v5 += 24LL;
    --v6;
  }
  while ( v6 );
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)VidMmWorkerThreadProc,
         (PVOID)StartContext);
  if ( v7 >= 0 )
  {
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(StartContext, 1, 0);
    ObfReferenceObject(*(PVOID *)(StartContext + 8));
    ZwClose(ThreadHandle);
    *a2 = *(struct _KEVENT **)(StartContext + 152);
  }
  return (unsigned int)v7;
}
