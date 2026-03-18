/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x14053B4E4
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x14053B4A4 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x14056073C (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObCaptureObjectStateForDuplication @ 0x14053B60C (ObCaptureObjectStateForDuplication.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(_DWORD *a1, __int64 a2)
{
  char PreviousMode; // bp
  _QWORD *Blob; // rax
  ULONG_PTR v6; // rbx
  int v7; // ebp
  int v8; // ecx
  signed __int64 v10; // rax
  bool v11; // cc
  ULONG_PTR v12; // rax
  signed __int64 v13; // rax
  ULONG_PTR BugCheckParameter4; // rax

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
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v10 <= 1;
    v12 = v10 - 1;
    if ( v11 )
    {
      if ( v12 )
        KeBugCheckEx(0x18u, 0LL, v6, 0x21uLL, v12);
      AlpcpDestroyBlob(v6);
    }
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
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v11 = v13 <= 1;
  BugCheckParameter4 = v13 - 1;
  if ( v11 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x21uLL, BugCheckParameter4);
    AlpcpDestroyBlob(v6);
  }
  return 3221225506LL;
}
