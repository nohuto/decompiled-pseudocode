/*
 * XREFs of CcPreparePinWrite @ 0x140457144
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x14006CF94 (CcMapDataForOverwrite.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x1405F8FB8 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPreparePinWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Zero,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  ULONG v8; // esi
  LONGLONG QuadPart; // rbx
  PVOID *p_BcbVoid; // r14
  char v13; // cl
  BOOLEAN v15; // di
  PVOID v16; // rcx
  int v17; // eax
  PVOID BcbVoid; // [rsp+58h] [rbp-50h] BYREF
  void *v19; // [rsp+60h] [rbp-48h] BYREF
  LONGLONG v20; // [rsp+68h] [rbp-40h] BYREF
  LONGLONG v21; // [rsp+70h] [rbp-38h] BYREF
  PVOID *v22; // [rsp+78h] [rbp-30h]

  v8 = Length;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v20 = FileOffset->QuadPart;
  BcbVoid = 0LL;
  p_BcbVoid = &BcbVoid;
  v13 = Flags;
  if ( (Flags & 0x20) != 0 )
  {
    CcMapDataForOverwrite((__int64)FileObject, FileOffset, Length, Bcb, (unsigned __int64 *)Buffer);
    return 1;
  }
  else
  {
    v15 = 1;
    do
    {
      if ( BcbVoid )
      {
        if ( p_BcbVoid == &BcbVoid )
        {
          BcbVoid = (PVOID)CcAllocateObcb(FileOffset, v8);
          p_BcbVoid = (PVOID *)((char *)BcbVoid + 16);
          v22 = (PVOID *)((char *)BcbVoid + 16);
          *Buffer = v19;
          v13 = Flags;
        }
        v17 = QuadPart;
        QuadPart = v21;
        v8 += v17 - v21;
        v20 = v21;
        v22 = ++p_BcbVoid;
      }
      if ( !(unsigned __int8)CcPinFileData((__int64)FileObject, &v20, v8, 0, 1, v13, (ULONG_PTR *)p_BcbVoid, &v19, &v21) )
      {
        v15 = 0;
        v16 = BcbVoid;
        goto LABEL_16;
      }
      v13 = Flags;
    }
    while ( v21 - QuadPart < v8 );
    if ( p_BcbVoid == &BcbVoid )
      *Buffer = v19;
    if ( Zero )
      memset(*Buffer, 0, Length);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    v16 = BcbVoid;
    *Bcb = BcbVoid;
LABEL_16:
    if ( !v15 )
    {
      if ( v16 )
        CcUnpinData(v16);
    }
    return v15;
  }
}
