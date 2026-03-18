/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C008FBC4
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C0046EC8 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C0047420 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008034C (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(_QWORD *a1, SIZE_T *a2, __int64 *a3)
{
  PVOID v6; // rax
  size_t v7; // r8
  size_t v8; // rdi
  void *v9; // r14
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  PVOID PoolWithTag; // rax
  int v19; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-30h]
  size_t Size; // [rsp+80h] [rbp+20h] BYREF
  void *Src; // [rsp+88h] [rbp+28h] BYREF

  Src = 0LL;
  Size = 0LL;
  v6 = ACPIAllocateBuffer(a2, (__int64)a3, 0x294uLL);
  v8 = *a2;
  v9 = v6;
  *a1 = v6;
  if ( !v6 )
    goto LABEL_11;
  v10 = ACPIGet(a3, 1145656671, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  v11 = v10;
  if ( v10 != -1073741661 )
  {
    if ( v10 < 0 )
      goto LABEL_9;
LABEL_4:
    v7 = Size;
    if ( v8 >= Size )
    {
      memmove(v9, Src, Size);
      if ( v11 >= 0 )
        goto LABEL_6;
LABEL_9:
      if ( v11 == -1073741772 )
        goto LABEL_6;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v16 = a3[71];
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v16 + v17) );
    Size = 2 * v17 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
    Src = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Size);
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", a3[71]);
      v11 = 0;
      goto LABEL_4;
    }
LABEL_11:
    v11 = -1073741670;
  }
LABEL_12:
  v13 = 0LL;
  v14 = (const char *)qword_1C0090C20;
  v15 = (const char *)qword_1C0090C20;
  if ( a3 )
  {
    v7 = a3[1];
    v13 = (__int64)a3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v14 = (const char *)a3[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v15 = (const char *)a3[71];
    }
  }
  WPP_RECORDER_SF_qdLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v13,
    v7,
    0x26u,
    v19,
    v20,
    v21,
    v11,
    v13,
    v14,
    v15);
LABEL_6:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v11;
}
