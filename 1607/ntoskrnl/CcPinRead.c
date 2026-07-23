/*
 * XREFs of CcPinRead @ 0x1404A8820
 * Callers:
 *     HvViewMapFlush @ 0x14060FBD8 (HvViewMapFlush.c)
 * Callees:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x1405F8FB8 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  PLARGE_INTEGER v6; // r10
  _DWORD *SharedCacheMap; // r13
  PVOID *v9; // rsi
  unsigned int v10; // r12d
  LONGLONG v11; // rdi
  PVOID *v12; // r14
  LONGLONG v13; // rbx
  BOOLEAN v15; // [rsp+50h] [rbp-68h]
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v17; // [rsp+60h] [rbp-58h]
  void *v18; // [rsp+68h] [rbp-50h] BYREF
  LONGLONG v19[9]; // [rsp+70h] [rbp-48h] BYREF
  LONGLONG QuadPart; // [rsp+C0h] [rbp+8h] BYREF
  PLARGE_INTEGER v21; // [rsp+C8h] [rbp+10h]
  ULONG v22; // [rsp+D0h] [rbp+18h]
  ULONG v23; // [rsp+D8h] [rbp+20h]

  v23 = Flags;
  v22 = Length;
  v21 = FileOffset;
  v6 = FileOffset;
  v18 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v17 = &Obcb;
  if ( (Flags & 1) != 0 )
    __incgsdword(0x5E1Cu);
  else
    __incgsdword(0x5E18u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v9 = Buffer;
  v10 = v22;
  v11 = QuadPart;
  v12 = v17;
  v13 = v19[0];
  do
  {
    if ( Obcb )
    {
      if ( v12 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(v6, v10);
        v12 = (PVOID *)((char *)Obcb + 16);
        v17 = (PVOID *)((char *)Obcb + 16);
        *v9 = v18;
        LOBYTE(Flags) = v23;
      }
      v10 += v11 - v13;
      v22 = v10;
      v11 = v13;
      QuadPart = v13;
      v17 = ++v12;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v10,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             Flags,
                             (ULONG_PTR *)v12,
                             &v18,
                             v19) )
    {
      __incgsdword(0x5E54u);
      v15 = 0;
      goto LABEL_14;
    }
    v13 = v19[0];
    LOBYTE(Flags) = v23;
    v6 = v21;
  }
  while ( v19[0] - v11 < v10 );
  *Bcb = Obcb;
  if ( v12 == &Obcb )
    *v9 = v18;
  v15 = 1;
LABEL_14:
  __addgsdword(0x5E58u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( !v15 && Obcb )
    CcUnpinData(Obcb);
  return v15;
}
