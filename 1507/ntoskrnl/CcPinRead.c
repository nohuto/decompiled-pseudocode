/*
 * XREFs of CcPinRead @ 0x14049D440
 * Callers:
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 * Callees:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14064FBD8 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // r10
  PLARGE_INTEGER v7; // r9
  _DWORD *SharedCacheMap; // r13
  PVOID *v10; // rsi
  unsigned int v11; // r12d
  int v12; // ebx
  PVOID *v13; // r14
  LONGLONG v14; // rdi
  BOOLEAN v16; // [rsp+50h] [rbp-68h]
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v18; // [rsp+60h] [rbp-58h]
  void *v19; // [rsp+68h] [rbp-50h] BYREF
  LONGLONG v20[9]; // [rsp+70h] [rbp-48h] BYREF
  LONGLONG QuadPart; // [rsp+C0h] [rbp+8h] BYREF
  PLARGE_INTEGER v22; // [rsp+C8h] [rbp+10h]
  ULONG v23; // [rsp+D0h] [rbp+18h]
  ULONG v24; // [rsp+D8h] [rbp+20h]

  v24 = Flags;
  v23 = Length;
  v22 = FileOffset;
  v6 = Flags;
  v7 = FileOffset;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v18 = &Obcb;
  if ( (v6 & 1) != 0 )
    __incgsdword(0x5E1Cu);
  else
    __incgsdword(0x5E18u);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v10 = Buffer;
  v11 = v23;
  v12 = QuadPart;
  v13 = v18;
  v14 = v20[0];
  do
  {
    if ( Obcb )
    {
      if ( v13 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(v7, v11);
        v13 = (PVOID *)((char *)Obcb + 16);
        v18 = (PVOID *)((char *)Obcb + 16);
        *v10 = v19;
        v6 = v24;
      }
      v11 += v12 - v14;
      v23 = v11;
      QuadPart = v14;
      v18 = ++v13;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v11,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             v6,
                             (ULONG_PTR *)v13,
                             (__int64 *)&v19,
                             v20) )
    {
      __incgsdword(0x5E54u);
      v16 = 0;
      goto LABEL_14;
    }
    v14 = v20[0];
    v12 = QuadPart;
    v6 = v24;
    v7 = v22;
  }
  while ( v20[0] - QuadPart < v11 );
  *Bcb = Obcb;
  if ( v13 == &Obcb )
    *v10 = v19;
  v16 = 1;
LABEL_14:
  __addgsdword(0x5E58u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  if ( !v16 && Obcb )
    CcUnpinData(Obcb);
  return v16;
}
