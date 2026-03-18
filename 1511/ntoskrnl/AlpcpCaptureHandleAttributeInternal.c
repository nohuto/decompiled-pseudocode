/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x14047D050
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x14047D350 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1404C5AB4 (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     ObCaptureObjectStateForDuplication @ 0x14047D164 (ObCaptureObjectStateForDuplication.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(_DWORD *a1, __int64 a2)
{
  char PreviousMode; // bp
  _QWORD *Blob; // rax
  ULONG_PTR v6; // rbx
  int v7; // ebp
  int v8; // ecx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (*a1 & 0xFFF4FFFF) != 0 )
    return 3221225485LL;
  Blob = AlpcpAllocateBlob((__int64)&AlpcHandleDataType, 48LL, 0);
  v6 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  v7 = ObCaptureObjectStateForDuplication(KeGetCurrentThread()->ApcState.Process, PreviousMode, v6 + 8);
  if ( v7 < 0 )
  {
    AlpcpDereferenceBlobEx(v6, 1);
    return (unsigned int)v7;
  }
  v8 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(*(_QWORD *)(v6 + 24) - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v6 + 24) - 48) >> 8)]
                 + 68);
  if ( (v8 & 0xFFD) != 0 )
  {
    *(_DWORD *)v6 = *a1;
    *(_DWORD *)(v6 + 4) = v8;
    *(_QWORD *)(a2 + 48) = v6;
    return (unsigned int)v7;
  }
  AlpcpDereferenceBlobEx(v6, 1);
  return 3221225506LL;
}
