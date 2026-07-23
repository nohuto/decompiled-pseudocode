/*
 * XREFs of PerfLogExecutiveResourceRelease @ 0x140228024
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140227D40 (EtwpGetTrackingLockSlotForThread.c)
 */

signed __int64 __fastcall PerfLogExecutiveResourceRelease(int a1, __int64 a2, int a3, unsigned int a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v8; // r14
  unsigned __int8 GroupIndex; // al
  __int16 Group; // r12
  signed __int64 result; // rax
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned __int8 v16; // [rsp+30h] [rbp-39h]
  _QWORD v18[3]; // [rsp+40h] [rbp-29h] BYREF
  int v19; // [rsp+58h] [rbp-11h]
  int KernelStack; // [rsp+5Ch] [rbp-Dh]
  __int64 v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  unsigned int v23; // [rsp+6Ch] [rbp+3h]
  _QWORD *v24; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = __rdtsc();
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = CurrentPrcb->Group;
  v16 = GroupIndex;
  result = (signed __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(result + 1848) )
  {
    result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
    v12 = result;
    if ( result )
    {
      if ( *(_DWORD *)(result + 32) )
      {
        ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        if ( *(_DWORD *)(result + 36) < (unsigned int)(a3 + 1) )
          *(_DWORD *)(result + 36) = a3 + 1;
        if ( ((a1 - 65570) & 0xFFFFFFDF) != 0 )
        {
          result = (unsigned int)(a1 - 65586);
          if ( (result & 0xFFFFFFDF) == 0 )
            *(_DWORD *)(v12 + 32) = 2;
        }
        else
        {
          v13 = *(_QWORD *)(result + 8);
          if ( v13 > 2 && *(_WORD *)(v12 + 24) == Group && *(_BYTE *)(v12 + 26) == v16 )
            v14 = v8 - v13;
          else
            v14 = 0LL;
          if ( *(_QWORD *)v12 > 1uLL
            && !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
               % EtwpExecutiveResourceContentionSampleRate)
            || (v15 = *(_DWORD *)(v12 + 44), a4 > v15) && !((a4 - v15) % EtwpExecutiveResourceContentionSampleRate)
            || (result = (CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                        + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
                       / EtwpExecutiveResourceReleaseSampleRate,
                !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
                 + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
                % EtwpExecutiveResourceReleaseSampleRate)) )
          {
            v21 = a2;
            v22 = a1;
            v18[0] = *(_QWORD *)(v12 + 8);
            v19 = *(_DWORD *)(v12 + 36);
            v18[1] = v14;
            v18[2] = *(_QWORD *)v12;
            v23 = a4 - *(_DWORD *)(v12 + 44);
            v26 = 0;
            v25 = 48;
            KernelStack = (int)KeGetCurrentThread()[1].KernelStack;
            v24 = v18;
            result = EtwTraceKernelEvent((int)&v24, 1, 0x20020000u, 1323, 22026242);
          }
          *(_DWORD *)(v12 + 28) = 0;
        }
      }
      else
      {
        *(_DWORD *)(result + 28) = 0;
      }
    }
  }
  return result;
}
