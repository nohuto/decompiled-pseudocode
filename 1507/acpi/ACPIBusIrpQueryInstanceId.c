/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C0071E90
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C0036318 (RtlStringCbPrintfW.c)
 *     ACPIAllocateBuffer @ 0x1C0065658 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(_QWORD *a1, SIZE_T *a2, __int64 *a3)
{
  PVOID v6; // rax
  size_t v7; // rdi
  void *v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  size_t Size; // [rsp+70h] [rbp+20h] BYREF
  void *Src; // [rsp+78h] [rbp+28h] BYREF

  Src = 0LL;
  Size = 0LL;
  v6 = ACPIAllocateBuffer(a2, a3);
  v7 = *a2;
  v8 = v6;
  *a1 = v6;
  if ( !v6 )
  {
LABEL_9:
    v10 = -1073741670;
    goto LABEL_6;
  }
  v9 = ACPIGet(a3, 1145656671, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  v10 = v9;
  if ( v9 != -1073741661 )
  {
    if ( v9 < 0 )
      goto LABEL_6;
LABEL_4:
    if ( v7 >= Size )
    {
      memmove(v8, Src, Size);
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  v12 = a3[70];
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
    Size = 2 * v13 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
    Src = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, Size);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", a3[70]);
    v10 = 0;
    goto LABEL_4;
  }
LABEL_6:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return v10;
}
