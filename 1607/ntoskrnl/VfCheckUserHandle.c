/*
 * XREFs of VfCheckUserHandle @ 0x1407117A8
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     RtlCaptureStackBackTrace @ 0x140084730 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x1406671A8 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140702DE8 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x140704D38 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x14070FFFC (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(void *a1)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r8d
  char v10; // si
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+38h] [rbp-A0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-58h] BYREF

  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( a1 )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            while ( VfDriverIsKernelImageAddress(*v6) )
            {
              if ( !v9 )
              {
                v5 = (unsigned int)(v5 + 1);
                v6 = (unsigned __int64 *)(v7 + 8);
                if ( (unsigned int)v5 < v4 )
                  continue;
              }
              goto LABEL_13;
            }
            if ( !(unsigned int)VfTargetDriversIsEnabled(v8) )
              return;
LABEL_13:
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              if ( ObReferenceObjectByHandle(a1, 0, 0LL, 1, &Object, 0LL) < 0 )
                goto LABEL_21;
              v10 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v12) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v10 = 1;
              }
              ObfDereferenceObject(Object);
              if ( !v10 )
              {
LABEL_21:
                if ( ViHandleBreaksEnabled )
                {
                  if ( (MmVerifierData & 0x800) != 0 )
                    VerifierBugCheckIfAppropriate(
                      0xC4u,
                      0xF6uLL,
                      (ULONG_PTR)a1,
                      (ULONG_PTR)Process,
                      (__int64)BackTrace[v5]);
                }
              }
            }
          }
        }
      }
    }
  }
}
