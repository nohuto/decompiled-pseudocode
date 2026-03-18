/*
 * XREFs of VfCheckUserHandle @ 0x1407473CC
 * Callers:
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x1406ACFC0 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x1407378E4 (VfUtilIsLocalSystem.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140745810 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(void *a1)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // esi
  __int64 v5; // rdi
  PVOID *i; // rax
  unsigned __int64 v7; // rcx
  NTSTATUS v8; // eax
  PVOID v9; // r14
  char v10; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v12; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

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
            for ( i = BackTrace; ; ++i )
            {
              v7 = (unsigned __int64)*i;
              if ( !ViDriverKernelBase || v7 < ViDriverKernelBase || v7 >= ViDriverKernelEnd )
                break;
              if ( KernelVerifier )
                goto LABEL_15;
              v5 = (unsigned int)(v5 + 1);
              if ( (unsigned int)v5 >= v4 )
                return;
            }
            if ( !(unsigned int)VfTargetDriversIsEnabled(v7) )
              return;
LABEL_15:
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              v8 = ObReferenceObjectByHandle(a1, 0, 0LL, 1, &Object, 0LL);
              v9 = Object;
              if ( v8 < 0 )
                goto LABEL_23;
              v10 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v12) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v10 = 1;
              }
              ObfDereferenceObject(v9);
              if ( !v10 )
              {
LABEL_23:
                if ( ViHandleBreaksEnabled )
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
