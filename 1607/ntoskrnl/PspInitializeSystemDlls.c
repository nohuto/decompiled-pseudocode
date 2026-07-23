/*
 * XREFs of PspInitializeSystemDlls @ 0x1407B6180
 * Callers:
 *     PspInitPhase2 @ 0x1407B5F0C (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1403F4DC8 (RtlFindExportedRoutineByName.c)
 *     PsQuerySystemDllInfo @ 0x1404596A4 (PsQuerySystemDllInfo.c)
 */

__int64 PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int i; // ebp
  __int64 v6; // r8

  v0 = 0;
  v1 = &qword_1407D5D78;
  do
  {
    result = PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0; i < *(_DWORD *)v1; ++i )
      {
        result = (__int64)RtlFindExportedRoutineByName(*(PVOID *)(v3 + 32), *(PCSTR *)(v4 + 16LL * i));
        if ( !result )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        v6 = *(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 32) + result;
        if ( (__int64)v1 > (__int64)&qword_1407D5D78 )
        {
          **(_DWORD **)(v4 + 16LL * i + 8) = v6;
        }
        else
        {
          result = *(_QWORD *)(v4 + 16LL * i + 8);
          *(_QWORD *)result = v6;
        }
      }
      if ( v0 == 1 )
      {
        result = *(unsigned int *)(v3 + 24);
        dword_1407485B8 = *(_DWORD *)(v3 + 24);
      }
      else if ( v0 == 2 )
      {
        result = *(unsigned int *)(v3 + 24);
        dword_1407485F8 = *(_DWORD *)(v3 + 24);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 3 );
  return result;
}
