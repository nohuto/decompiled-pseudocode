/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x140658EFC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x1406A2A5C (EtwpSetMark.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(unsigned int a1, unsigned __int16 a2, int a3)
{
  unsigned int v6; // edi
  unsigned int *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  int *v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  v6 = 0;
  v7 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 0);
  if ( *v7 )
  {
    do
    {
      v8 = 48LL * *(_QWORD *)&v7[4 * v6 + 4] - 0x58000000000LL;
      v9 = v8 + 48LL * *(_QWORD *)&v7[4 * v6 + 6];
      while ( v8 < v9 )
      {
        if ( !a3 || (*(_BYTE *)(v8 + 34) & 7) == 6 )
        {
          memset(v11, 0, sizeof(v11));
          MiIdentifyPfnWrapper(v8, (__int64)v11);
          v17 = 0;
          v15 = (int *)v11;
          v16 = 24;
          EtwpLogKernelEvent((__int64)&v15, EtwpHostSiloState, a1, 1u, a2, 0x401802u);
        }
        v8 += 48LL;
      }
      ++v6;
    }
    while ( v6 < *v7 );
  }
  MiDereferencePageRuns((__int64)v7);
  if ( !a3 )
  {
    v12 &= 0xFFFFFFE0;
    v17 = 0;
    v13 = MmPfnDatabase;
    v14 = MxPfnAllocation;
    v15 = &v12;
    v16 = 24;
    EtwpLogKernelEvent((__int64)&v15, EtwpHostSiloState, a1, 1u, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
