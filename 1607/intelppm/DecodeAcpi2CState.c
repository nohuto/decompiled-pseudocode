/*
 * XREFs of DecodeAcpi2CState @ 0x1C0014E9C
 * Callers:
 *     RegisterKernelCStates @ 0x1C0014C88 (RegisterKernelCStates.c)
 *     RegisterHvCStates @ 0x1C001D364 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1C00207D0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0020D50 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0021064 (RegisterKernelPepIdleStatesV2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0016F20 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpi2CState(__int64 a1, __int64 *a2, __int64 *a3, char *a4, __int64 a5)
{
  __int64 (*v5)(); // r12
  char v6; // si
  unsigned int v10; // r10d
  int v12; // ecx
  void *v13; // rdx
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v16 = 0LL;
  v6 = 0;
  v10 = -1073741823;
  if ( qword_1C000EE38 )
  {
    v10 = qword_1C000EE38(a1);
    if ( (v10 & 0x80000000) == 0 )
      return v10;
  }
  if ( *(_BYTE *)a2 == 127 )
  {
    if ( *((_BYTE *)a2 + 1) != 1 )
    {
      if ( *((_BYTE *)a2 + 12) != 1 )
        return v10;
      v13 = C1Idle;
      v12 = *((_DWORD *)a2 + 2);
      v6 = 1;
      v17 = *a2;
      goto LABEL_19;
    }
    if ( *((_BYTE *)a2 + 2) != 1 )
      return v10;
    v12 = *((_DWORD *)a2 + 2);
    v17 = *a2;
    if ( HIDWORD(v17) )
    {
      LODWORD(v17) = 134219777;
      v12 = 0;
    }
    v6 = 1;
    v13 = IoHaltC1Idle;
    v14 = 0x10000000000000LL;
  }
  else
  {
    if ( *(_BYTE *)a2 != 1 )
      return v10;
    v15 = *((_BYTE *)a2 + 12);
    if ( v15 <= 1u )
      return v10;
    v17 = *a2;
    v18 = *((_DWORD *)a2 + 2);
    if ( v15 == 2 )
    {
      AcpiTranslateAccessSize(&v17);
      v13 = C2Idle;
      v14 = 0x420000000000000LL;
    }
    else
    {
      AcpiTranslateAccessSize(&v17);
      v13 = C3Idle;
      v14 = 0xB20000000000000LL;
      v5 = C3IdleCheck;
    }
    v12 = v18;
  }
  v16 = v14;
  LOWORD(v16) = WORD2(v17);
LABEL_19:
  v10 = 0;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 32) = v17;
    *(_DWORD *)(a5 + 40) = v12;
    *(_BYTE *)(a5 + 64) = 1;
    *(_QWORD *)(a5 + 16) = v5;
    *(_QWORD *)(a5 + 24) = v13;
  }
  if ( a4 )
    *a4 = v6;
  if ( a3 )
    *a3 = v16;
  return v10;
}
