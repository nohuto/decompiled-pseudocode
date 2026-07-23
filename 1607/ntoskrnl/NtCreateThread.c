/*
 * XREFs of NtCreateThread @ 0x14067CCE4
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspCreateThread @ 0x140457BE8 (PspCreateThread.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB UserStack,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  PCONTEXT v19; // [rsp+78h] [rbp-590h]
  _OWORD v20[4]; // [rsp+90h] [rbp-578h] BYREF
  char v21[32]; // [rsp+D0h] [rbp-538h] BYREF
  _BYTE v22[152]; // [rsp+F0h] [rbp-518h] BYREF
  unsigned __int64 v23; // [rsp+188h] [rbp-480h]

  v12 = ThreadContext;
  memset(v20, 0, sizeof(v20));
  if ( !ThreadContext )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (__int64)ClientId;
      if ( (unsigned __int64)ClientId >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 15) = *(_BYTE *)(v15 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v22;
    v17 = 9LL;
    do
    {
      *v16 = *(_OWORD *)&v12->P1Home;
      v16[1] = *(_OWORD *)&v12->P3Home;
      v16[2] = *(_OWORD *)&v12->P5Home;
      v16[3] = *(_OWORD *)&v12->ContextFlags;
      v16[4] = *(_OWORD *)&v12->SegGs;
      v16[5] = *(_OWORD *)&v12->Dr1;
      v16[6] = *(_OWORD *)&v12->Dr3;
      v16 += 8;
      *(v16 - 1) = *(_OWORD *)&v12->Dr7;
      v12 = (PCONTEXT)((char *)v12 + 128);
      --v17;
    }
    while ( v17 );
    *v16 = *(_OWORD *)&v12->P1Home;
    v16[1] = *(_OWORD *)&v12->P3Home;
    v16[2] = *(_OWORD *)&v12->P5Home;
    v16[3] = *(_OWORD *)&v12->ContextFlags;
    v16[4] = *(_OWORD *)&v12->SegGs;
    v19 = (PCONTEXT)v22;
    v23 = (v23 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    if ( ((unsigned __int8)UserStack & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (PCONTEXT)v22;
  }
  else
  {
    v19 = ThreadContext;
  }
  result = RtlpSanitizeContextFlags((int *)&v12->ContextFlags);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    v18 = *(_OWORD *)&UserStack->PreviousStackBase;
    v20[0] = *(_OWORD *)&UserStack->PreviousStackBase;
    if ( v20[0] == 0LL )
    {
      v20[0] = v18;
      v20[1] = *(_OWORD *)&UserStack->StackBase;
      *(_QWORD *)&v20[2] = UserStack->AllocatedStackBase;
      if ( *(_QWORD *)&v20[2] )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
        {
          *((_QWORD *)&v20[2] + 1) = *(_QWORD *)&v20[1];
          v20[3] = *(_OWORD *)((char *)&v20[1] + 8);
          memset(&v20[1], 0, 24);
        }
        v21[0] = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v19,
                 (__int64)v20,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)v21);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
