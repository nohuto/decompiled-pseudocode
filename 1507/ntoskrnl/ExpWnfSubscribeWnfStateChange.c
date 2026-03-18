/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x140501F5C
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x140501E64 (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x14055B664 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfNotifySubscription @ 0x140500BFC (ExpWnfNotifySubscription.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x140502E84 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v8; // rax
  ACCESS_MASK v9; // r15d
  char v10; // r8
  __int64 v11; // rsi
  _KPROCESS *Process; // r14
  BOOL v13; // r12d
  unsigned __int64 v14; // rbx
  struct _EX_RUNDOWN_REF *v15; // r14
  int v16; // r12d
  __int64 v17; // rbx
  int v18; // r8d
  unsigned int v19; // r8d
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  struct _EX_RUNDOWN_REF *v22; // rcx
  unsigned __int64 v23; // rtt
  struct _EX_RUNDOWN_REF *v24; // rcx
  unsigned __int64 v25; // rtt
  int v27; // eax
  unsigned __int64 v28; // rtt
  struct _EX_RUNDOWN_REF *v29; // rcx
  unsigned __int64 v30; // rtt
  struct _EX_RUNDOWN_REF *v31; // rcx
  unsigned __int64 v32; // rtt
  __int64 v33; // rbx
  unsigned __int64 v34; // rtt
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-C0h]
  int NameInstance; // [rsp+60h] [rbp-88h]
  __int64 v37; // [rsp+68h] [rbp-80h] BYREF
  _KPROCESS *v38; // [rsp+70h] [rbp-78h]
  int v39; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+88h] [rbp-60h] BYREF
  int v41[2]; // [rsp+90h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+98h] [rbp-50h] BYREF
  int v43; // [rsp+A0h] [rbp-48h] BYREF
  int v44; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-38h]

  v8 = a3;
  P = 0LL;
  *(_QWORD *)v41 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  v9 = 0;
  LOBYTE(a3) = a8;
  NameInstance = ExpCaptureWnfStateName(v8, &v45, a3);
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) == 0 )
    {
      v11 = (v45 >> 4) & 3;
      v44 = (v45 >> 6) & 0xF;
      if ( v10 )
      {
        v39 = 0;
        v9 = (a7 & 0x11) != 0;
        if ( (a7 & 0xFFFFFFEE) != 0 )
          v9 |= 2u;
      }
      else
      {
        v39 = 1;
      }
      if ( v10 )
        Process = KeGetCurrentThread()->ApcState.Process;
      else
        Process = PsInitialSystemProcess;
      v38 = Process;
      v13 = !PsIsCurrentThreadInServerSilo();
      v46 = (int)v11;
      while ( 1 )
      {
        while ( 1 )
        {
          LODWORD(NumberOfBytes) = v13;
          NameInstance = ExpWnfResolveScopeInstance(
                           (signed __int64 *)v41,
                           (__int64)Process,
                           0LL,
                           (unsigned int)v44,
                           0LL,
                           NumberOfBytes);
          if ( NameInstance < 0 )
            goto LABEL_25;
          v14 = v45;
          v15 = *(struct _EX_RUNDOWN_REF **)v41;
          NameInstance = ExpWnfLookupNameInstance(*(_QWORD *)v41, v45, &v37);
          if ( NameInstance != -1073741772 || v46 == 3 )
            break;
          v27 = ExpWnfLookupPermanentName(v14, &P);
          NameInstance = v27;
          if ( v27 >= 0 )
          {
            if ( !v39 )
            {
              NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v9);
              if ( NameInstance < 0 )
                goto LABEL_25;
            }
            v16 = (int)v38;
            NameInstance = ExpWnfCreateNameInstance(v41[0], v45, (_DWORD)P, (_DWORD)v38, (__int64)&v37);
            ExFreePoolWithTag(P, 0x20666E57u);
            P = 0LL;
            if ( NameInstance < 0 )
              goto LABEL_25;
            goto LABEL_15;
          }
          if ( v27 != -1073741772 || v13 )
            goto LABEL_25;
          v13 = 1;
          if ( v15 )
          {
            _m_prefetchw(&v15[1]);
            v28 = v15[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&v15[1], v28 - 2, v28) )
              ExfReleaseRundownProtection(v15 + 1);
          }
          Process = v38;
          if ( v37 )
          {
            v29 = (struct _EX_RUNDOWN_REF *)(v37 + 8);
            _m_prefetchw((const void *)(v37 + 8));
            v30 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 8), v30 - 2, v30) )
              goto LABEL_60;
LABEL_66:
            Process = v38;
          }
        }
        if ( NameInstance >= 0 )
        {
          if ( !v39 )
          {
            NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v37 + 72), v9);
            if ( NameInstance < 0 )
              goto LABEL_25;
          }
          v16 = (int)v38;
LABEL_15:
          v17 = v37;
          NameInstance = ExpWnfSubscribeNameInstance(v37, v16, a5, a6, a4, a7, a8, a1, a2, (__int64)&v42, (__int64)&v43);
          if ( NameInstance >= 0 )
          {
            v18 = 0;
            if ( a4 != *(_DWORD *)(v17 + 96) )
              v18 = *(_QWORD *)(v17 + 88) != 0LL;
            if ( !*(_DWORD *)(v37 + 164) )
              v18 |= 8u;
            if ( !v43 )
            {
              if ( *(_DWORD *)(v37 + 160) )
                v18 |= 2u;
              else
                v18 |= 4u;
            }
            v19 = a7 & v18;
            if ( v19 )
              ExpWnfNotifySubscription(v37, (__int64)v42, v19, a8 != 0);
          }
          goto LABEL_25;
        }
        if ( NameInstance != -1073741772 || v13 )
          goto LABEL_25;
        v13 = 1;
        if ( *(_QWORD *)v41 )
        {
          v31 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v41 + 8LL);
          _m_prefetchw((const void *)(*(_QWORD *)v41 + 8LL));
          v32 = *(_QWORD *)(*(_QWORD *)v41 + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v41 + 8LL), v32 - 2, v32) )
            ExfReleaseRundownProtection(v31);
        }
        v33 = v37;
        Process = v38;
        if ( v37 )
        {
          _m_prefetchw((const void *)(v37 + 8));
          v34 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v34 == _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 8), v34 - 2, v34) )
            goto LABEL_66;
          v29 = (struct _EX_RUNDOWN_REF *)(v33 + 8);
LABEL_60:
          ExfReleaseRundownProtection(v29);
        }
      }
    }
    NameInstance = -1073741811;
  }
LABEL_25:
  if ( v42 )
  {
    v20 = v42 + 1;
    _m_prefetchw(&v42[1]);
    v21 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v21 - 2, v21) )
      ExfReleaseRundownProtection(v20);
  }
  if ( v37 )
  {
    v22 = (struct _EX_RUNDOWN_REF *)(v37 + 8);
    _m_prefetchw((const void *)(v37 + 8));
    v23 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 8), v23 - 2, v23) )
      ExfReleaseRundownProtection(v22);
  }
  if ( *(_QWORD *)v41 )
  {
    v24 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v41 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v41 + 8LL));
    v25 = *(_QWORD *)(*(_QWORD *)v41 + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v41 + 8LL), v25 - 2, v25) )
      ExfReleaseRundownProtection(v24);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
