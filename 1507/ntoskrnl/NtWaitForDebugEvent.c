/*
 * XREFs of NtWaitForDebugEvent @ 0x140668D6C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x140666CE4 (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x140667048 (DbgkpOpenHandles.c)
 */

NTSTATUS __stdcall NtWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  KPROCESSOR_MODE PreviousMode; // r12
  PLARGE_INTEGER p_QuadPart; // rbx
  _BYTE *v9; // rcx
  NTSTATUS result; // eax
  NTSTATUS i; // eax
  __int64 v12; // r9
  char v13; // r14
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // r13
  struct _KEVENT *v18; // r9
  _QWORD *v19; // rdx
  __int64 j; // rax
  __int64 v21; // r15
  int v22; // r8d
  _QWORD *v23; // rcx
  PVOID v24; // rbx
  NTSTATUS v25; // ebx
  unsigned __int8 v26; // r15
  signed __int32 v27; // eax
  bool v28; // sf
  unsigned __int64 *v29; // rdi
  __int64 QuadPart; // [rsp+38h] [rbp-150h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+40h] [rbp-148h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int64 v34; // [rsp+50h] [rbp-138h]
  PVOID v35; // [rsp+58h] [rbp-130h]
  PVOID v36; // [rsp+60h] [rbp-128h]
  PVOID v37; // [rsp+78h] [rbp-110h]
  _OWORD v38[12]; // [rsp+80h] [rbp-108h] BYREF

  Timeouta = Timeout;
  QuadPart = 0LL;
  v34 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v38, 0, 0xB8uLL);
  p_QuadPart = Timeouta;
  if ( Timeouta )
  {
    if ( PreviousMode )
      p_QuadPart = Timeouta;
    QuadPart = p_QuadPart->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v34 = MEMORY[0xFFFFF78000000014];
    p_QuadPart = (PLARGE_INTEGER)&QuadPart;
  }
  if ( PreviousMode )
  {
    v9 = StateChange;
    if ( (unsigned __int64)StateChange >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[183] = v9[183];
    p_QuadPart = Timeouta;
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v37 = Object;
  if ( result >= 0 )
  {
    v36 = 0LL;
    v35 = 0LL;
    for ( i = KeWaitForSingleObject(Object, Executive, PreviousMode, Alertable, p_QuadPart);
          ;
          i = KeWaitForSingleObject(Object, Executive, PreviousMode, Alertable, Timeouta) )
    {
      v25 = i;
      if ( i < 0 || (unsigned int)(i - 257) <= 1 || i == 192 )
        break;
      v13 = 0;
      v14 = (volatile signed __int32 *)((char *)Object + 24);
      v15 = KeAbPreAcquire((ULONG_PTR)Object + 24, 0LL, 0LL, v12);
      v16 = v15;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v14, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)v14, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *((_QWORD *)v14 + 1) = KeGetCurrentThread();
      *((_DWORD *)v14 + 12) = CurrentIrql;
      v18 = (struct _KEVENT *)Object;
      if ( (*((_DWORD *)Object + 24) & 1) != 0 )
      {
        v25 = -1073740972;
      }
      else
      {
        v19 = (char *)Object + 80;
        for ( j = *((_QWORD *)Object + 10); ; j = *(_QWORD *)j )
        {
          if ( (_QWORD *)j == v19 )
          {
            KeResetEvent(v18);
            goto LABEL_30;
          }
          v21 = j;
          v22 = *(_DWORD *)(j + 76);
          if ( (v22 & 5) == 0 )
          {
            v13 = 1;
            v23 = (_QWORD *)*v19;
            if ( *v19 != j )
            {
              while ( *(_QWORD *)(j + 40) != v23[5] )
              {
                v23 = (_QWORD *)*v23;
                if ( v23 == (_QWORD *)j )
                  goto LABEL_25;
              }
              *(_DWORD *)(j + 76) = v22 | 4;
              *(_QWORD *)(j + 80) = 0LL;
              v13 = 0;
            }
LABEL_25:
            if ( v13 )
              break;
          }
        }
        v36 = *(PVOID *)(j + 56);
        v24 = v36;
        v35 = *(PVOID *)(j + 64);
        ObfReferenceObjectWithTag(v35, 0x4F676244u);
        ObfReferenceObjectWithTag(v24, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v38, v21);
        *(_DWORD *)(v21 + 76) |= 1u;
LABEL_30:
        v25 = 0;
      }
      *((_QWORD *)v14 + 1) = 0LL;
      v26 = *((_BYTE *)v14 + 48);
      v27 = _InterlockedCompareExchange(v14, 1, 0);
      if ( v27 )
        ExpReleaseFastMutexContended(v14, v27);
      __writecr8(v26);
      KeAbPostRelease((ULONG_PTR)v14);
      if ( v25 < 0 )
        break;
      if ( v13 )
      {
        DbgkpOpenHandles((__int64)v38, v36, v35);
        ObfDereferenceObjectWithTag(v35, 0x4F676244u);
        ObfDereferenceObjectWithTag(v36, 0x4F676244u);
        break;
      }
      if ( QuadPart < 0 )
      {
        v28 = MEMORY[0xFFFFF78000000014] - v34 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v34;
        v34 = MEMORY[0xFFFFF78000000014];
        if ( !v28 )
        {
          v25 = 258;
          break;
        }
      }
    }
    ObfDereferenceObject(Object);
    *(_OWORD *)&StateChange->NewState = v38[0];
    *(_OWORD *)&StateChange->AppClientId.UniqueThread = v38[1];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 1) = v38[2];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 3) = v38[3];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 5) = v38[4];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 7) = v38[5];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 9) = v38[6];
    v29 = &StateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v29 - 1) = v38[7];
    *(_OWORD *)v29 = v38[8];
    *((_OWORD *)v29 + 1) = v38[9];
    *((_OWORD *)v29 + 2) = v38[10];
    v29[6] = *(_QWORD *)&v38[11];
    return v25;
  }
  return result;
}
