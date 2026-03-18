/*
 * XREFs of NtDCompositionGetAnimationTime @ 0x1C00201E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C002BD28 (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetAnimationTime(int a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v10; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rcx
  bool v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  struct DirectComposition::CAnimationTimeList *i; // rdx
  __int64 v23; // rdx
  PSLIST_ENTRY v24; // r15
  unsigned __int64 v25; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 *v27; // [rsp+28h] [rbp-C0h]
  bool v28[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-A0h]
  __int64 v30; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-88h]
  __int64 v33; // [rsp+68h] [rbp-80h]
  unsigned __int64 v34; // [rsp+70h] [rbp-78h]
  union _LARGE_INTEGER v35; // [rsp+78h] [rbp-70h] BYREF
  int Buffer; // [rsp+80h] [rbp-68h] BYREF
  __int64 v37; // [rsp+88h] [rbp-60h]
  unsigned __int64 v38[11]; // [rsp+90h] [rbp-58h] BYREF
  int v40; // [rsp+F8h] [rbp+10h]

  v40 = a2;
  v4 = 0LL;
  v29 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( !a4 || !a3 )
    return (unsigned int)-1073741811;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    a3 = (unsigned __int64 *)MmUserProbeAddress;
  v34 = *a3;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress, a2, a3, a4, Timeout, v27);
  if ( CurrentProcessWin32Process )
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v8 )
  {
    v10 = *(struct _ERESOURCE **)(v8 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
    v11 = *(struct _RTL_GENERIC_TABLE **)v8;
    Buffer = a1;
    v37 = 0LL;
    v12 = RtlLookupElementGenericTable(v11, &Buffer);
    if ( v12 )
      v7 = v12[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v4 = v29;
      v5 = v33;
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
    v5 = v7;
    v33 = v7;
  }
  if ( v6 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) == 1 )
    {
      v4 = v5;
      v29 = v5;
    }
    else
    {
      v6 = -1073741811;
      (**(void (__fastcall ***)(__int64))v5)(v5);
    }
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    v14 = (unsigned int)(v40 - 1);
    if ( v40 && v14 < *(_QWORD *)(v4 + 88) )
    {
      _mm_lfence();
      v15 = *(_QWORD *)(v14 * *(_QWORD *)(v4 + 96) + *(_QWORD *)(v4 + 64));
      if ( !v15 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 200LL))(v15) )
      {
        v4 = v29;
      }
      else
      {
        v4 = v29;
        if ( (*(_DWORD *)(v15 + 16) & 1) == 0 )
          goto LABEL_50;
      }
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 112LL))(v15, 75LL) )
    {
      while ( 1 )
      {
        v16 = *(void **)(v4 + 160);
        v35.QuadPart = 0LL;
        if ( KeWaitForSingleObject(v16, UserRequest, 0, 0, &v35) )
          break;
        v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 144));
        --*(_DWORD *)(v4 + 172);
        v25 = *((_QWORD *)&v24[4].Next + 1);
        if ( v25 > *(_QWORD *)(v4 + 176) )
        {
          *(_QWORD *)(v4 + 176) = v25;
          *(_BYTE *)(v4 + 184) |= 2u;
        }
        DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v24);
        v24->Next = *(struct _SLIST_ENTRY **)(v4 + 136);
        *(_QWORD *)(v4 + 136) = v24;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 56) + 24LL) & 3) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        for ( i = *(struct DirectComposition::CAnimationTimeList **)(v15 + 56);
              i;
              i = *(struct DirectComposition::CAnimationTimeList **)(v23 + 16) )
        {
          DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
            (DirectComposition::CAnimationMarshaler *)(v15 - 16),
            i,
            PerformanceCounter.QuadPart,
            v38,
            v28,
            &v30,
            &v31);
        }
        v18 = v31;
        v19 = v30;
        v17 = v28[0];
      }
      else
      {
        v17 = (*(_BYTE *)(v15 + 192) & 4) != 0;
        v28[0] = v17;
        v18 = *(_QWORD *)(v15 + 208);
        v31 = v18;
        v19 = *(_QWORD *)(v15 + 200);
        v30 = v19;
      }
      v28[1] = v17;
      v38[2] = v19;
      v38[1] = v18;
      v32 = v19;
      if ( !v17 && v34 > v18 )
        v32 = v34 + v19 - v18;
      goto LABEL_33;
    }
LABEL_50:
    v6 = -1073741811;
LABEL_33:
    (**(void (__fastcall ***)(__int64))v4)(v4);
    if ( v6 >= 0 )
    {
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v32;
    }
  }
  return (unsigned int)v6;
}
