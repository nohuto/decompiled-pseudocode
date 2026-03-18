/*
 * XREFs of PsLookupProcessThreadByCid @ 0x1404D30D8
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     PsLookupThreadByThreadId @ 0x1404207F0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID v7; // rdi
  void *v8; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&Object);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_QWORD *)Object + 198) == *(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v8 = (void *)*((_QWORD *)Object + 68);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741813;
    }
  }
  return result;
}
