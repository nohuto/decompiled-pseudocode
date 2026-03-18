/*
 * XREFs of AlpcpExposeViewAttribute @ 0x1404ABC0C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(void *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  ULONG_PTR v10; // rbx
  int v11; // r14d
  __int64 v12; // rbx
  bool v13; // zf
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 144);
  if ( !v4 )
    return 0LL;
  v10 = *(_QWORD *)(v4 + 16);
  AlpcpReferenceBlob(v10);
  v11 = AlpcpReceiveView(a1, a2, &v14);
  AlpcpDereferenceBlobEx(v10, 1);
  if ( v11 >= 0 )
  {
    v12 = *(_QWORD *)(a2 + 144);
    memset(a3, 0, 0x20uLL);
    v13 = v14 == 0;
    a3[2] = *(_QWORD *)(v12 + 40);
    a3[3] = *(_QWORD *)(v12 + 48);
    if ( !v13 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
    return 0LL;
  }
  return (unsigned int)v11;
}
