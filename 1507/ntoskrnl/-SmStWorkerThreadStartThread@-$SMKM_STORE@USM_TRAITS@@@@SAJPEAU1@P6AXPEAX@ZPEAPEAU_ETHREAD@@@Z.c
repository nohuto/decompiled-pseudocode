/*
 * XREFs of ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D9494
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(__int64 a1, KSTART_ROUTINE *a2, PVOID *a3)
{
  NTSTATUS v6; // edi
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  HANDLE v9; // rbx
  _QWORD StartContext[6]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  ThreadHandle = 0LL;
  memset(StartContext, 0, 0x28uLL);
  HIDWORD(StartContext[1]) = 0;
  LODWORD(StartContext[4]) = -1;
  StartContext[3] = &StartContext[2];
  StartContext[0] = a1;
  StartContext[2] = &StartContext[2];
  LOWORD(StartContext[1]) = 0;
  BYTE2(StartContext[1]) = 6;
  v6 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, a2, StartContext);
  if ( v6 < 0 )
  {
    v9 = ThreadHandle;
  }
  else
  {
    v7 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v8 = ThreadHandle;
    v6 = v7;
    *a3 = Object;
    ObCloseHandle(v8, 0);
    v9 = 0LL;
    KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
    if ( SLODWORD(StartContext[4]) >= 0 )
      return (unsigned int)v6;
    v6 = StartContext[4];
  }
  if ( v9 )
    ObCloseHandle(v9, 0);
  return (unsigned int)v6;
}
