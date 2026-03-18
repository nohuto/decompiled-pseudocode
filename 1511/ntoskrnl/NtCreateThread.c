/*
 * XREFs of NtCreateThread @ 0x14063E6F8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpSanitizeContextFlags @ 0x1403F035C (RtlpSanitizeContextFlags.c)
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  PHANDLE v11; // r14
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  _BYTE *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  PCONTEXT v18; // [rsp+78h] [rbp-590h]
  _OWORD v19[4]; // [rsp+80h] [rbp-588h] BYREF
  NTSTATUS v20; // [rsp+C8h] [rbp-540h]
  char v21[32]; // [rsp+D0h] [rbp-538h] BYREF
  _BYTE v22[152]; // [rsp+F0h] [rbp-518h] BYREF
  unsigned __int64 v23; // [rsp+188h] [rbp-480h]

  v11 = ThreadHandle;
  v12 = ThreadContext;
  memset(v19, 0, sizeof(v19));
  if ( !ThreadContext )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)ThreadHandle >= MmUserProbeAddress )
      ThreadHandle = (PHANDLE)MmUserProbeAddress;
    *ThreadHandle = *ThreadHandle;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = ClientId;
      if ( (unsigned __int64)ClientId >= MmUserProbeAddress )
        v14 = (_BYTE *)MmUserProbeAddress;
      *v14 = *v14;
      v14[15] = v14[15];
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = v22;
    v16 = 9LL;
    do
    {
      *v15 = *(_OWORD *)&v12->P1Home;
      v15[1] = *(_OWORD *)&v12->P3Home;
      v15[2] = *(_OWORD *)&v12->P5Home;
      v15[3] = *(_OWORD *)&v12->ContextFlags;
      v15[4] = *(_OWORD *)&v12->SegGs;
      v15[5] = *(_OWORD *)&v12->Dr1;
      v15[6] = *(_OWORD *)&v12->Dr3;
      v15 += 8;
      *(v15 - 1) = *(_OWORD *)&v12->Dr7;
      v12 = (PCONTEXT)((char *)v12 + 128);
      --v16;
    }
    while ( v16 );
    *v15 = *(_OWORD *)&v12->P1Home;
    v15[1] = *(_OWORD *)&v12->P3Home;
    v15[2] = *(_OWORD *)&v12->P5Home;
    v15[3] = *(_OWORD *)&v12->ContextFlags;
    v15[4] = *(_OWORD *)&v12->SegGs;
    v18 = (PCONTEXT)v22;
    v23 = (v23 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    if ( ((unsigned __int8)UserStack & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (PCONTEXT)v22;
  }
  else
  {
    v18 = ThreadContext;
  }
  result = RtlpSanitizeContextFlags((int *)&v12->ContextFlags);
  v20 = result;
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *v11 = 0LL;
    v17 = *(_OWORD *)&UserStack->PreviousStackBase;
    v19[0] = *(_OWORD *)&UserStack->PreviousStackBase;
    if ( v19[0] == 0LL )
    {
      v19[0] = v17;
      v19[1] = *(_OWORD *)&UserStack->StackBase;
      *(_QWORD *)&v19[2] = UserStack->AllocatedStackBase;
      if ( *(_QWORD *)&v19[2] )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
        {
          *((_QWORD *)&v19[2] + 1) = *(_QWORD *)&v19[1];
          v19[3] = *(_OWORD *)((char *)&v19[1] + 8);
          memset(&v19[1], 0, 24);
        }
        v21[0] = 1;
        return PspCreateThread(
                 (__int64)v11,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v18,
                 (__int64)v19,
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
