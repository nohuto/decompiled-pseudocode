/*
 * XREFs of RtlDecodeRemotePointer @ 0x1800D85E0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlDecodeRemotePointer(void *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  NTSTATUS v6; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v6 = NtQueryInformationProcess(a1, (PROCESSINFOCLASS)36, &v8, 4u, 0LL);
  if ( v6 < 0 )
    return v6 | 0x10000000u;
  else
    *a3 = v8 ^ __ROR8__(a2, 64 - (v8 & 0x3F));
  return v3;
}
