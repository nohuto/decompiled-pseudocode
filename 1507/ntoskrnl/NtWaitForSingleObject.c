/*
 * XREFs of NtWaitForSingleObject @ 0x140494560
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x140541200 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Object, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // si
  LARGE_INTEGER *v5; // rdi
  int v6; // ebx
  PVOID v7; // r14
  __int64 v8; // r9
  __int64 v9; // r10
  LARGE_INTEGER v11; // [rsp+48h] [rbp-20h] BYREF
  PVOID v12; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = Timeout;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= MmUserProbeAddress )
      v5 = (LARGE_INTEGER *)MmUserProbeAddress;
    v11 = *v5;
    v5 = &v11;
  }
  v6 = ObReferenceObjectByHandleWithTag(Object, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v12, 0LL);
  if ( v6 >= 0 )
  {
    v7 = v12;
    v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
    v9 = *(_QWORD *)(v8 + 32);
    if ( (v9 & 1) != 0 )
    {
      if ( (v9 & 2) == 0 )
      {
        v9 = *(_QWORD *)((char *)v12 + v9 - 1);
LABEL_15:
        v6 = KeWaitForSingleObject((PVOID)v9, UserRequest, PreviousMode, Alertable, v5);
        ObfDereferenceObjectWithTag(v7, 0x7457624Fu);
        return v6;
      }
      if ( (*(_DWORD *)((_BYTE *)v12 + *(unsigned __int16 *)(v8 + 180)) & *(_DWORD *)(v8 + 176)) == *(_DWORD *)(v8 + 176) )
      {
        v9 = *(_QWORD *)((char *)v12 + *(unsigned __int16 *)(v8 + 182));
        goto LABEL_15;
      }
      v9 -= 3LL;
    }
    else if ( v9 < 0 )
    {
      goto LABEL_15;
    }
    v9 += (__int64)v12;
    goto LABEL_15;
  }
  return v6;
}
