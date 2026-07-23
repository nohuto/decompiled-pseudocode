/*
 * XREFs of ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004F84
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
        __int64 a1,
        void *a2,
        KSTART_ROUTINE *a3,
        PVOID *a4)
{
  NTSTATUS v8; // edi
  NTSTATUS v9; // eax
  HANDLE v10; // rcx
  HANDLE v11; // rbx
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  _QWORD StartContext[5]; // [rsp+48h] [rbp-28h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF

  ThreadHandle = 0LL;
  memset(StartContext, 0, sizeof(StartContext));
  LOWORD(StartContext[1]) = 0;
  HIDWORD(StartContext[1]) = 0;
  LODWORD(StartContext[4]) = -1;
  StartContext[3] = &StartContext[2];
  StartContext[0] = a1;
  StartContext[2] = &StartContext[2];
  BYTE2(StartContext[1]) = 6;
  v8 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, a2, 0LL, a3, StartContext);
  if ( v8 < 0 )
  {
    v11 = ThreadHandle;
  }
  else
  {
    v9 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v10 = ThreadHandle;
    v8 = v9;
    *a4 = Object;
    ObCloseHandle(v10, 0);
    v11 = 0LL;
    KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
    if ( SLODWORD(StartContext[4]) >= 0 )
      return (unsigned int)v8;
    v8 = StartContext[4];
  }
  if ( v11 )
    ObCloseHandle(v11, 0);
  return (unsigned int)v8;
}
