/*
 * XREFs of CcPreparePinWrite @ 0x14052FE34
 * Callers:
 *     <none>
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x140118944 (CcMapDataForOverwrite.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14064FBD8 (CcAllocateObcb.c)
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
  PVOID BcbVoid; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG v18; // [rsp+60h] [rbp-48h] BYREF
  void *v19; // [rsp+68h] [rbp-40h] BYREF
  LONGLONG v20; // [rsp+70h] [rbp-38h] BYREF
  PVOID *v21; // [rsp+78h] [rbp-30h]

  v8 = Length;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v18 = FileOffset->QuadPart;
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
          v21 = (PVOID *)((char *)BcbVoid + 16);
          *Buffer = v19;
          v13 = Flags;
        }
        v8 += QuadPart - v20;
        v18 = v20;
        v21 = ++p_BcbVoid;
      }
      if ( !(unsigned __int8)CcPinFileData(
                               (__int64)FileObject,
                               &v18,
                               v8,
                               0,
                               1,
                               v13,
                               (ULONG_PTR *)p_BcbVoid,
                               (__int64 *)&v19,
                               &v20) )
      {
        v15 = 0;
        v16 = BcbVoid;
        goto LABEL_16;
      }
      LODWORD(QuadPart) = v18;
      v13 = Flags;
    }
    while ( v20 - v18 < v8 );
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
