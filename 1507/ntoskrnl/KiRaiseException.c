/*
 * XREFs of KiRaiseException @ 0x140124BE0
 * Callers:
 *     NtRaiseException @ 0x1401831C0 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140182880 (KeContextToKframes.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlpReadExtendedContext @ 0x14045047C (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140450724 (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r15
  char PreviousMode; // r12
  unsigned int *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edi
  size_t v22; // r8
  void *v23; // rdx
  struct _EXCEPTION_RECORD *v24; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // r8
  void *InstrumentationCallback; // rdx
  __int64 v28; // [rsp+20h] [rbp-10h]
  unsigned int v29; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp+4h] BYREF
  void *Src; // [rsp+38h] [rbp+8h]
  unsigned int v32; // [rsp+40h] [rbp+10h]
  __int64 v33; // [rsp+48h] [rbp+18h] BYREF
  _BYTE v34[24]; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v35; // [rsp+68h] [rbp+38h]

  v7 = a2;
  Src = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_19:
    LOBYTE(v28) = PreviousMode;
    KeContextToKframes(a4, a3, v7, *(_DWORD *)(v7 + 48), v28);
    v24 = (struct _EXCEPTION_RECORD *)Src;
    *(_DWORD *)Src &= ~0x10000000u;
    KiDispatchException(v24, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          if ( *(_WORD *)(a4 + 368) == 51 )
          {
            *(_QWORD *)(a4 + 88) = *(_QWORD *)(a4 + 360);
            *(_QWORD *)(a4 + 360) = InstrumentationCallback;
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    return 0LL;
  }
  v9 = (unsigned int *)(a2 + 48);
  if ( a2 + 48 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v30 = *v9;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&v30, a2);
  if ( (int)result >= 0 )
  {
    v11 = v30;
    result = RtlGetExtendedContextLength(v30);
    if ( (int)result >= 0 )
    {
      v12 = v29 + 15LL;
      if ( v12 <= v29 )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      result = RtlInitializeExtendedContext((__int64)&v29, v11, &v33);
      if ( (int)result >= 0 )
      {
        v18 = v33 - 1232;
        LOBYTE(v16) = 1;
        result = RtlpReadExtendedContext(v17, v16, v33, v11, v7, 0LL);
        if ( (int)result >= 0 )
        {
          v7 = v18;
          v19 = (unsigned int *)((char *)Src + 24);
          if ( (unsigned __int64)Src + 24 >= MmUserProbeAddress )
            v19 = (unsigned int *)MmUserProbeAddress;
          v20 = *v19;
          v32 = v20;
          v21 = v20;
          if ( v20 > 0xF )
            return 3221225485LL;
          v29 = 8 * v20 + 32;
          v22 = v29;
          v23 = Src;
          if ( (unsigned __int64)Src + v29 > MmUserProbeAddress || (char *)Src + v29 < Src )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v34, v23, v22);
          Src = v34;
          v35 = v21;
          goto LABEL_19;
        }
      }
    }
  }
  return result;
}
