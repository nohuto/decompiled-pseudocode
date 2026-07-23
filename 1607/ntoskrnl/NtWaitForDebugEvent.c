/*
 * XREFs of NtWaitForDebugEvent @ 0x140619EE8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x140618330 (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x1406185C4 (DbgkpOpenHandles.c)
 */

NTSTATUS __stdcall NtWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rcx
  NTSTATUS result; // eax
  char *v10; // rdi
  BOOLEAN i; // r9
  char v12; // r14
  _QWORD *v13; // rdx
  __int64 j; // rax
  __int64 v15; // rbx
  int v16; // r8d
  _QWORD *v17; // rcx
  int v18; // ebx
  bool v19; // sf
  unsigned __int64 *v20; // rsi
  LONGLONG QuadPart; // [rsp+38h] [rbp-150h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+40h] [rbp-148h]
  __int64 v24; // [rsp+48h] [rbp-140h]
  PVOID Object; // [rsp+50h] [rbp-138h] BYREF
  PVOID v26; // [rsp+58h] [rbp-130h]
  PVOID v27; // [rsp+60h] [rbp-128h]
  PVOID v28; // [rsp+78h] [rbp-110h]
  _OWORD v29[12]; // [rsp+80h] [rbp-108h] BYREF

  Timeouta = Timeout;
  QuadPart = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v29, 0, 0xB8uLL);
  if ( Timeouta )
  {
    QuadPart = Timeouta->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v24 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    v8 = (__int64)StateChange;
    if ( (unsigned __int64)StateChange >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 183) = *(_BYTE *)(v8 + 183);
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v10 = (char *)Object;
  v28 = Object;
  if ( result >= 0 )
  {
    v26 = 0LL;
    v27 = 0LL;
    for ( i = Alertable; ; i = Alertable )
    {
      v18 = KeWaitForSingleObject(v10, Executive, PreviousMode, i, Timeouta);
      if ( v18 < 0 || (unsigned int)(v18 - 257) <= 1 || v18 == 192 )
        break;
      v12 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v10 + 24));
      if ( (*((_DWORD *)v10 + 24) & 1) != 0 )
      {
        v18 = -1073740972;
      }
      else
      {
        v13 = v10 + 80;
        for ( j = *((_QWORD *)v10 + 10); ; j = *(_QWORD *)j )
        {
          if ( (_QWORD *)j == v13 )
          {
            KeResetEvent((PRKEVENT)v10);
            goto LABEL_24;
          }
          v15 = j;
          v16 = *(_DWORD *)(j + 76);
          if ( (v16 & 5) == 0 )
          {
            v12 = 1;
            v17 = (_QWORD *)*v13;
            if ( *v13 != j )
            {
              while ( *(_QWORD *)(j + 40) != v17[5] )
              {
                v17 = (_QWORD *)*v17;
                if ( v17 == (_QWORD *)j )
                  goto LABEL_19;
              }
              *(_DWORD *)(j + 76) = v16 | 4;
              *(_QWORD *)(j + 80) = 0LL;
              v12 = 0;
            }
LABEL_19:
            if ( v12 )
              break;
          }
        }
        v26 = *(PVOID *)(j + 56);
        v27 = *(PVOID *)(j + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v26, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v29, v15);
        *(_DWORD *)(v15 + 76) |= 1u;
LABEL_24:
        v18 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 24));
      if ( v18 < 0 )
        break;
      if ( v12 )
      {
        DbgkpOpenHandles((__int64)v29, v26, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v26, 0x4F676244u);
        break;
      }
      if ( QuadPart < 0 )
      {
        v19 = MEMORY[0xFFFFF78000000014] - v24 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v24;
        v24 = MEMORY[0xFFFFF78000000014];
        v10 = (char *)Object;
        if ( !v19 )
        {
          v18 = 258;
          break;
        }
      }
    }
    ObfDereferenceObject(v10);
    *(_OWORD *)&StateChange->NewState = v29[0];
    *(_OWORD *)&StateChange->AppClientId.UniqueThread = v29[1];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 1) = v29[2];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 3) = v29[3];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 5) = v29[4];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 7) = v29[5];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 9) = v29[6];
    v20 = &StateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v20 - 1) = v29[7];
    *(_OWORD *)v20 = v29[8];
    *((_OWORD *)v20 + 1) = v29[9];
    *((_OWORD *)v20 + 2) = v29[10];
    v20[6] = *(_QWORD *)&v29[11];
    return v18;
  }
  return result;
}
