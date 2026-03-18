/*
 * XREFs of NtDCompositionGetAnimationTime @ 0x1C0015D20
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C0017E68 (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

__int64 NtDCompositionGetAnimationTime(int a1, int a2, unsigned __int64 *a3, ...)
{
  __int64 *v3; // r13
  __int64 v4; // rbx
  DirectComposition::CApplicationChannel *v5; // r15
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v10; // rdi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // rdi
  unsigned __int64 v14; // rdx
  bool v15; // cl
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  struct DirectComposition::CAnimationTimeList *i; // rdx
  __int64 v21; // rdx
  DirectComposition::CApplicationChannel *v22; // [rsp+48h] [rbp-90h]
  unsigned __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  __int64 v25; // [rsp+60h] [rbp-78h]
  DirectComposition::CApplicationChannel *v26; // [rsp+68h] [rbp-70h]
  unsigned __int64 v27; // [rsp+70h] [rbp-68h]
  int Buffer; // [rsp+78h] [rbp-60h] BYREF
  __int64 v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  unsigned __int64 v31; // [rsp+90h] [rbp-48h]
  unsigned __int64 v32[8]; // [rsp+98h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+F8h] [rbp+20h] BYREF
  va_list va; // [rsp+F8h] [rbp+20h]
  va_list va1; // [rsp+100h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v35 = va_arg(va1, __int64 *);
  v3 = v35;
  v4 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( v35 && a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (unsigned __int64 *)MmUserProbeAddress;
    v27 = *a3;
    v5 = 0LL;
    v26 = 0LL;
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress);
    if ( CurrentProcessWin32Process )
      v8 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v8 )
    {
      v10 = *(struct _ERESOURCE **)(v8 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      v11 = *(struct _RTL_GENERIC_TABLE **)v8;
      Buffer = a1;
      v29 = 0LL;
      v12 = RtlLookupElementGenericTable(v11, &Buffer);
      if ( v12 )
        v7 = v12[1];
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v5 = v26;
      }
      else
      {
        v6 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v6 = -1073741823;
    }
    if ( v7 )
    {
      v13 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v5 = (DirectComposition::CApplicationChannel *)v7;
      v26 = (DirectComposition::CApplicationChannel *)v7;
    }
    if ( v6 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v5 + 8LL))(v5) == 1 )
      {
        v22 = v5;
      }
      else
      {
        v6 = -1073741811;
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v5)(v5);
      }
    }
    if ( v6 >= 0 )
    {
      v6 = 0;
      v14 = (unsigned int)(a2 - 1);
      if ( (!a2
         || v14 >= *((_QWORD *)v22 + 11)
         || (_mm_lfence(), (v4 = *(_QWORD *)(v14 * *((_QWORD *)v22 + 12) + *((_QWORD *)v22 + 8))) != 0)
         && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4) || (*(_DWORD *)(v4 + 16) & 1) != 0))
        && v4
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 112LL))(v4, 83LL) )
      {
        DirectComposition::CApplicationChannel::ProcessReturnedBatches(v22);
        if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 24LL) & 3) != 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(struct DirectComposition::CAnimationTimeList **)(v4 + 48);
                i;
                i = *(struct DirectComposition::CAnimationTimeList **)(v21 + 16) )
          {
            DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
              (DirectComposition::CAnimationMarshaler *)(v4 - 16),
              i,
              PerformanceCounter.QuadPart,
              v32,
              (bool *)va,
              &v24,
              &v23);
          }
          v16 = v23;
          v17 = v24;
          v15 = (char)v35;
        }
        else
        {
          v15 = (*(_BYTE *)(v4 + 184) & 4) != 0;
          LOBYTE(v35) = v15;
          v16 = *(_QWORD *)(v4 + 200);
          v23 = v16;
          v17 = *(_QWORD *)(v4 + 192);
          v24 = v17;
        }
        v30 = v17;
        v31 = v16;
        v25 = v17;
        if ( !v15 && v27 > v16 )
          v25 = v27 + v17 - v16;
      }
      else
      {
        v6 = -1073741811;
      }
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v22)(v22);
      if ( v6 >= 0 )
      {
        if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v3 = v25;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
