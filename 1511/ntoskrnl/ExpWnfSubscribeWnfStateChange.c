/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x1403E4A00
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x1403E493C (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x1404C45E0 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfNotifySubscription @ 0x1403E23AC (ExpWnfNotifySubscription.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1403E5C68 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
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
  ACCESS_MASK v8; // r14d
  int NameInstance; // esi
  char v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // r13d
  _KPROCESS *Process; // rax
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rbx
  int v18; // r8d
  unsigned int v19; // r8d
  PVOID v21; // r14
  __int64 v22; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  int v24[2]; // [rsp+78h] [rbp-60h] BYREF
  _KPROCESS *v25; // [rsp+80h] [rbp-58h]
  int v26; // [rsp+88h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+90h] [rbp-48h] BYREF
  int v28; // [rsp+98h] [rbp-40h]
  unsigned __int64 v29[7]; // [rsp+A0h] [rbp-38h] BYREF

  P = 0LL;
  *(_QWORD *)v24 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v8 = 0;
  NameInstance = ExpCaptureWnfStateName(a3, v29);
  v28 = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      NameInstance = -1073741811;
      goto LABEL_24;
    }
    v11 = v29[0];
    v12 = (v29[0] >> 4) & 3;
    if ( v10 )
    {
      v13 = 0;
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
    }
    else
    {
      v13 = 1;
    }
    if ( v10 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = v29[0];
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v25 = Process;
    NameInstance = ExpWnfResolveScopeInstance((int)v24, (int)Process, 0, (v29[0] >> 6) & 0xF, 0LL);
    if ( NameInstance >= 0 )
    {
      v15 = ExpWnfLookupNameInstance(*(_QWORD *)v24, v11, &v22);
      NameInstance = v15;
      if ( v15 != -1073741772 || (_DWORD)v12 == 3 )
      {
        if ( v15 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v22 + 72), v8);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v11, &P);
        if ( NameInstance < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
        v21 = P;
        NameInstance = ExpWnfCreateNameInstance(v24[0], v11, (_DWORD)P, (_DWORD)v25, (__int64)&v22);
        ExFreePoolWithTag(v21, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_24;
      }
      v17 = v22;
      NameInstance = ExpWnfSubscribeNameInstance(v22, v16, a5, a6, a4, a7, a8, a1, a2, (__int64)&v27, (__int64)&v26);
      if ( NameInstance >= 0 )
      {
        v18 = 0;
        if ( a4 != *(_DWORD *)(v17 + 96) )
          v18 = *(_QWORD *)(v17 + 88) != 0LL;
        if ( !*(_DWORD *)(v22 + 164) )
          v18 |= 8u;
        if ( !v26 )
        {
          if ( *(_DWORD *)(v22 + 160) )
            v18 |= 2u;
          else
            v18 |= 4u;
        }
        v19 = a7 & v18;
        if ( v19 )
          ExpWnfNotifySubscription(v22, (__int64)v27, v19, a8 != 0);
      }
    }
  }
LABEL_24:
  if ( v27 )
    ExReleaseRundownProtection_0(v27 + 1);
  if ( v22 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v22 + 8));
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
