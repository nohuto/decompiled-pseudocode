/*
 * XREFs of RtlEncodeRemotePointer @ 0x1800C74A0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodeRemotePointer(void *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  NTSTATUS v6; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v6 = NtQueryInformationProcess(a1, (PROCESSINFOCLASS)36, &v8, 4u, 0LL);
  if ( v6 < 0 )
    return v6 | 0x10000000u;
  else
    *a3 = __ROR8__(a2 ^ v8, v8 & 0x3F);
  return v3;
}
