/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x140460820
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x14046075C (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x1404D1B24 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     ExpCaptureWnfStateName @ 0x1404613E4 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140461798 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x140461DE4 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifySubscription @ 0x1404B9474 (ExpWnfNotifySubscription.c)
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
  ACCESS_MASK v9; // r14d
  int NameInstance; // esi
  char v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // r13d
  _KPROCESS *Process; // rax
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r8
  PVOID v22; // r14
  __int64 v23; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v25; // [rsp+78h] [rbp-60h]
  int v26[2]; // [rsp+80h] [rbp-58h] BYREF
  _DWORD v27[2]; // [rsp+88h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v29[8]; // [rsp+98h] [rbp-40h] BYREF

  v8 = a3;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v23 = 0LL;
  v28 = 0LL;
  v9 = 0;
  LOBYTE(a3) = a8;
  NameInstance = ExpCaptureWnfStateName(v8, v29, a3);
  v27[1] = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      NameInstance = -1073741811;
      goto LABEL_24;
    }
    v12 = v29[0];
    v13 = (v29[0] >> 4) & 3;
    if ( v11 )
    {
      v14 = 0;
      v9 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v9 |= 2u;
    }
    else
    {
      v14 = 1;
    }
    if ( v11 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v12 = v29[0];
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v25 = Process;
    NameInstance = ExpWnfResolveScopeInstance((int)v26, (int)Process, 0, (v29[0] >> 6) & 0xF, 0LL);
    if ( NameInstance >= 0 )
    {
      v16 = ExpWnfLookupNameInstance(*(_QWORD *)v26, v12, &v23);
      NameInstance = v16;
      if ( v16 != -1073741772 || (_DWORD)v13 == 3 )
      {
        if ( v16 < 0 )
          goto LABEL_24;
        if ( !v14 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v23 + 72), v9);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v17 = (int)v25;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v12, &P);
        if ( NameInstance < 0 )
          goto LABEL_24;
        if ( !v14 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v9);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v17 = (int)v25;
        v22 = P;
        NameInstance = ExpWnfCreateNameInstance(v26[0], v12, (_DWORD)P, (_DWORD)v25, (__int64)&v23);
        ExFreePoolWithTag(v22, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_24;
      }
      v18 = v23;
      NameInstance = ExpWnfSubscribeNameInstance(v23, v17, a5, a6, a4, a7, a8, a1, a2, (__int64)&v28, (__int64)v27);
      if ( NameInstance >= 0 )
      {
        v19 = 0;
        if ( a4 != *(_DWORD *)(v18 + 96) )
          v19 = *(_QWORD *)(v18 + 88) != 0LL;
        if ( !*(_DWORD *)(v23 + 164) )
          v19 |= 8u;
        if ( !v27[0] )
        {
          if ( *(_DWORD *)(v23 + 160) )
            v19 |= 2u;
          else
            v19 |= 4u;
        }
        v20 = a7 & v19;
        if ( (_DWORD)v20 )
          ExpWnfNotifySubscription(v23, v28, v20, a8 != 0);
      }
    }
  }
LABEL_24:
  if ( v28 )
    ExReleaseRundownProtection(v28 + 1);
  if ( v23 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v23 + 8));
  if ( *(_QWORD *)v26 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
