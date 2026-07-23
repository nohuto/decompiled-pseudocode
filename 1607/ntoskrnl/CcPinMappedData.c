/*
 * XREFs of CcPinMappedData @ 0x140446090
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x140032AA0 (CcFreeVirtualAddress.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x1405F8FB8 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinMappedData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb)
{
  char v5; // r10
  PLARGE_INTEGER v6; // r9
  _DWORD *SharedCacheMap; // r13
  LONGLONG v10; // rdi
  PVOID *v11; // r12
  LONGLONG v12; // rbx
  BOOLEAN v13; // bl
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v16; // [rsp+60h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-50h] BYREF
  LONGLONG v18; // [rsp+70h] [rbp-48h] BYREF
  __int64 v19[8]; // [rsp+78h] [rbp-40h] BYREF
  char v21; // [rsp+D8h] [rbp+20h]

  v21 = Flags;
  v5 = Flags;
  v6 = FileOffset;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v16 = &Obcb;
  if ( ((unsigned __int8)*Bcb & 1) == 0 )
    return 1;
  *Bcb = (char *)*Bcb - 1;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  __incgsdword(0x5E14u);
  if ( *(_WORD *)*Bcb != 765 )
  {
    v10 = QuadPart;
    v11 = v16;
    v12 = v18;
    while ( 1 )
    {
      if ( Obcb )
      {
        if ( v11 == &Obcb )
        {
          Obcb = (PVOID)CcAllocateObcb(v6, Length);
          v11 = (PVOID *)((char *)Obcb + 16);
          v16 = (PVOID *)((char *)Obcb + 16);
          v5 = v21;
        }
        Length += v10 - v12;
        v10 = v12;
        QuadPart = v12;
        v16 = ++v11;
      }
      if ( !(unsigned __int8)CcPinFileData(
                               (__int64)FileObject,
                               &QuadPart,
                               Length,
                               (SharedCacheMap[38] & 0x200) == 0,
                               0,
                               v5,
                               (ULONG_PTR *)v11,
                               v19,
                               &v18) )
        goto LABEL_9;
      v12 = v18;
      v6 = FileOffset;
      v5 = v21;
      if ( v18 - v10 >= Length )
      {
        CcFreeVirtualAddress((__int64)*Bcb);
        *Bcb = Obcb;
        goto LABEL_8;
      }
    }
  }
  if ( !ExAcquireSharedStarveExclusive((PERESOURCE)((char *)*Bcb + 72), v5 & 1) )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_15;
  }
LABEL_8:
  v13 = 1;
LABEL_15:
  if ( !v13 )
  {
    *Bcb = (char *)*Bcb + 1;
    if ( Obcb )
      CcUnpinData(Obcb);
  }
  return v13;
}
