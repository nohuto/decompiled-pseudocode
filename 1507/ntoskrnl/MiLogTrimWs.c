/*
 * XREFs of MiLogTrimWs @ 0x14012F884
 * Callers:
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 *VmPartition; // rdi
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // r11
  int v8; // ebx
  int v9; // edx
  const CHAR *v10; // r9
  char v11; // r10
  __int64 v12; // rax
  int v13; // r11d
  char v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  __int64 v19[5]; // [rsp+50h] [rbp-49h] BYREF
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  int *v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  __int64 *v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  __int64 *v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B8h] [rbp+1Fh]
  int v31; // [rsp+BCh] [rbp+23h]
  __int64 *v32; // [rsp+C0h] [rbp+27h]
  int v33; // [rsp+C8h] [rbp+2Fh]
  int v34; // [rsp+CCh] [rbp+33h]

  if ( hProvider )
  {
    VmPartition = MiGetVmPartition(a1);
    if ( (*(_BYTE *)(v6 + 216) & 7) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 216) & 7u) < 2 )
        v8 = *(_DWORD *)(v6 - 2960);
      else
        v8 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(v6 - 528);
    }
    if ( v7->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v7, 1uLL) )
      {
        v12 = *((_QWORD *)VmPartition + 688);
        v21 = 0;
        v17 = v12;
        v20 = v9;
        v19[4] = (__int64)&v14;
        v14 = v11;
        v15 = v8;
        v16 = a2;
        v18 = a3;
        TlgCreateSz(&pDesc, v10);
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v26 = &v16;
        v29 = &v18;
        v23 = &v15;
        v32 = &v17;
        v24 = 4;
        v27 = 8;
        v30 = 8;
        v33 = 8;
        MmTlgWrite(v13, (int)&dword_1402A455A, 0, 0, 8u, (__int64)v19);
      }
    }
  }
}
