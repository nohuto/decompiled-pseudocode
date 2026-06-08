/*
 * XREFs of AcpiEvaluateMethod @ 0x1C00147C8
 * Callers:
 *     AcpiEval_OSC @ 0x1C0001944 (AcpiEval_OSC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0013644 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001386C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0013B44 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0013EA4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0013FE8 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0014148 (AcpiEval_CPC.c)
 *     AcpiEval_PPC @ 0x1C001457C (AcpiEval_PPC.c)
 *     AcpiEval_PCT_PTC @ 0x1C0014634 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PCCP @ 0x1C001D4D4 (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C001D640 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C001D728 (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C001D7D0 (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, int *a3, unsigned int **a4, _DWORD *a5)
{
  int *v6; // r14
  unsigned int v8; // ebx
  SIZE_T v9; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp+Fh] BYREF
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D4h] [rbp+73h]

  v6 = a3;
  if ( !a3 )
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    v21 = 1114203457;
    v6 = &v21;
    v22 = a2;
LABEL_4:
    v8 = 8;
    goto LABEL_5;
  }
  v17 = *a3;
  if ( *a3 != 1130980673 )
  {
    if ( v17 != 1114203457 )
    {
      if ( v17 == 1231643969 )
      {
        v8 = 12;
      }
      else
      {
        if ( v17 != 1399416129 )
          return (unsigned int)-1073741584;
        v8 = a3[2] + 15;
      }
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v8 = a3[2];
LABEL_5:
  v9 = 1024LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x72637250u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v12 = *(_QWORD *)(a1 + 16);
    v20[0] = 1LL;
    v20[1] = v6;
    v20[2] = v8;
    v19[0] = 1LL;
    v19[1] = PoolWithTag;
    v19[2] = (unsigned int)v9;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            v20,
            v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, 0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, 0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
