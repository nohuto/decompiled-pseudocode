/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x140027FB0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140028170 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ED2CC (RtlpLookupUserFunctionTable.c)
 *     HvlQueryConnection @ 0x140120354 (HvlQueryConnection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v4; // rcx
  __int64 v5; // r10
  unsigned int v6; // r9d
  unsigned int *v7; // r11
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // rax
  __int64 (__fastcall *v18)(); // rcx

  v4 = *(_QWORD *)(a2 + 8);
  if ( a1 >= v4 && a1 < v4 + *(unsigned int *)(a2 + 16) )
  {
    v5 = *(_QWORD *)a2;
    goto LABEL_4;
  }
  if ( a1 <= (unsigned __int64)MmHighestUserAddress )
  {
    v16 = RtlpLookupUserFunctionTable(a1);
    goto LABEL_24;
  }
  if ( a1 < *(&xmmword_1402CFDD0 + 1) || a1 >= *(&xmmword_1402CFDD0 + 1) + (unsigned int)qword_1402CFDE0 )
  {
    v16 = RtlpxLookupFunctionTable(a1, a2);
LABEL_24:
    v5 = v16;
    goto LABEL_4;
  }
  *(_OWORD *)a2 = *(_OWORD *)&xmmword_1402CFDD0;
  *(_QWORD *)(a2 + 16) = qword_1402CFDE0;
  v5 = *(_QWORD *)a2;
LABEL_4:
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 20) / 0xCu;
    v7 = 0LL;
    if ( v6 )
    {
      v8 = a1 - *(_QWORD *)(a2 + 8);
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( v8 >= *v9 && v8 < v9[1] )
      {
        v13 = *(_QWORD *)(a2 + 8);
        v7 = v9;
        v14 = v9[2];
        if ( (v14 & 1) != 0 )
        {
          v7 = (unsigned int *)(v14 + v13 - 1);
          if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v7 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
      }
    }
    return v7;
  }
  else
  {
    if ( (int)HvlQueryConnection(a2 + 8) >= 0 )
    {
      v17 = *(_QWORD *)(a2 + 8);
      if ( a1 >= v17 && a1 < v17 + 4096 )
        goto LABEL_30;
    }
    v18 = 0LL;
    if ( KiSanitizeFpuProcedure != KiSanitizeFpu )
      v18 = KiSanitizeFpuProcedure;
    *(_QWORD *)(a2 + 8) = v18;
    if ( v18 && a1 >= (unsigned __int64)v18 && a1 < (unsigned __int64)v18 + 4096 )
    {
LABEL_30:
      *(_DWORD *)(a2 + 16) = 4096;
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_DWORD *)(a2 + 16) = 0;
      return 0LL;
    }
  }
}
