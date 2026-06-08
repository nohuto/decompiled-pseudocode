/*
 * XREFs of DecodeAcpi2CState @ 0x1C0016EF8
 * Callers:
 *     RegisterHiddenIdleStates @ 0x1C00170B0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x1C0017154 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00173E4 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00176F8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterHvCStates @ 0x1C001CED0 (RegisterHvCStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0011B04 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpi2CState(__int64 a1, __int64 *a2, __int64 *a3, char *a4, __int64 a5)
{
  __int64 (*v5)(); // r12
  char v6; // si
  unsigned int v10; // r10d
  int v11; // ecx
  void *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 v14; // al
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v16 = 0LL;
  v6 = 0;
  v10 = -1073741823;
  if ( qword_1C00094E8 )
  {
    v10 = qword_1C00094E8(a1);
    if ( (v10 & 0x80000000) == 0 )
      return v10;
  }
  if ( *(_BYTE *)a2 == 127 )
  {
    if ( *((_BYTE *)a2 + 1) != 1 )
    {
      if ( *((_BYTE *)a2 + 12) != 1 )
        return v10;
      v12 = C1Idle;
      v11 = *((_DWORD *)a2 + 2);
      v6 = 1;
      v17 = *a2;
      goto LABEL_21;
    }
    if ( *((_BYTE *)a2 + 2) != 1 )
      return v10;
    v11 = *((_DWORD *)a2 + 2);
    v17 = *a2;
    if ( HIDWORD(v17) )
    {
      LODWORD(v17) = 134219777;
      v11 = 0;
    }
    v6 = 1;
    v12 = IoHaltC1Idle;
    v13 = 0x10000000000000LL;
  }
  else
  {
    if ( *(_BYTE *)a2 != 1 )
      return v10;
    v14 = *((_BYTE *)a2 + 12);
    if ( v14 <= 1u )
      return v10;
    v11 = *((_DWORD *)a2 + 2);
    v17 = *a2;
    v18 = v11;
    if ( v14 == 2 )
    {
      if ( (_BYTE)v17 != 10 )
      {
        AcpiTranslateAccessSize(&v17);
        v11 = v18;
      }
      v12 = C2Idle;
      v13 = 0x420000000000000LL;
    }
    else
    {
      if ( (_BYTE)v17 != 10 )
      {
        AcpiTranslateAccessSize(&v17);
        v11 = v18;
      }
      v5 = C3IdleCheck;
      v13 = 0xB20000000000000LL;
      v12 = C3Idle;
    }
  }
  v16 = v13;
  LOWORD(v16) = WORD2(v17);
LABEL_21:
  v10 = 0;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 32) = v17;
    *(_DWORD *)(a5 + 40) = v11;
    *(_BYTE *)(a5 + 64) = 1;
    *(_QWORD *)(a5 + 16) = v5;
    *(_QWORD *)(a5 + 24) = v12;
  }
  if ( a4 )
    *a4 = v6;
  if ( a3 )
    *a3 = v16;
  return v10;
}
