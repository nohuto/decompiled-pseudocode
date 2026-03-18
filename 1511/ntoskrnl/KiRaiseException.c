/*
 * XREFs of KiRaiseException @ 0x140022668
 * Callers:
 *     NtRaiseException @ 0x1401546F0 (NtRaiseException.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x140022644 (KiSetupForInstrumentationReturn.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140153EF0 (KeContextToKframes.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1403F035C (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KiRaiseException(void *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // r14
  char PreviousMode; // r12
  unsigned int *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  size_t v22; // r8
  void *v23; // rdx
  struct _EXCEPTION_RECORD *v24; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v26; // r9
  __int64 v27; // [rsp+20h] [rbp-10h]
  unsigned int v28; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp+4h] BYREF
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v31; // [rsp+40h] [rbp+10h]
  __int64 v32; // [rsp+48h] [rbp+18h] BYREF
  _BYTE v33[24]; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v34; // [rsp+68h] [rbp+38h]

  v7 = a2;
  Src = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_19:
    LOBYTE(v27) = PreviousMode;
    KeContextToKframes(a4, a3, v7, *(_DWORD *)(v7 + 48), v27);
    v24 = (struct _EXCEPTION_RECORD *)Src;
    *(_DWORD *)Src &= ~0x10000000u;
    KiDispatchException(v24, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        KeGetCurrentIrql();
        __writecr8(1uLL);
        KiSetupForInstrumentationReturn(a4);
        __writecr8(v26);
      }
    }
    return 0LL;
  }
  v9 = (unsigned int *)(a2 + 48);
  if ( a2 + 48 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v29 = *v9;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&v29, a2);
  if ( (int)result >= 0 )
  {
    v11 = v29;
    result = RtlGetExtendedContextLength(v29, &v28);
    if ( (int)result >= 0 )
    {
      v12 = v28 + 15LL;
      if ( v12 <= v28 )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext(&v28, v11, &v32);
      if ( (int)result >= 0 )
      {
        v18 = v32 - 1232;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, v32, v11, v7, 0LL);
        if ( (int)result >= 0 )
        {
          v7 = v18;
          v19 = (unsigned int *)((char *)Src + 24);
          if ( (unsigned __int64)Src + 24 >= MmUserProbeAddress )
            v19 = (unsigned int *)MmUserProbeAddress;
          v20 = *v19;
          v31 = v20;
          v21 = v20;
          if ( v20 > 0xF )
            return 3221225485LL;
          v28 = 8 * v20 + 32;
          v22 = v28;
          v23 = Src;
          if ( (unsigned __int64)Src + v28 > MmUserProbeAddress || (char *)Src + v28 < Src )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v33, v23, v22);
          Src = v33;
          v34 = v21;
          goto LABEL_19;
        }
      }
    }
  }
  return result;
}
