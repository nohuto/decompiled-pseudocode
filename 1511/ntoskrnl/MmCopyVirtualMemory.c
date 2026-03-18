/*
 * XREFs of MmCopyVirtualMemory @ 0x14047AC20
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1400F1FB4 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x14047AA60 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x14061FF58 (AlpcpCopyRequestData.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFindNextEnclaveBoundary @ 0x14047B340 (MiFindNextEnclaveBoundary.c)
 *     MiDbgReadWriteEnclave @ 0x1406299FC (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *a1,
        char *a2,
        ULONG_PTR a3,
        char *a4,
        size_t Size,
        KPROCESSOR_MODE a6,
        _QWORD *a7)
{
  char *v7; // r15
  unsigned int v8; // ebx
  size_t v9; // r13
  char NextEnclaveBoundary; // si
  int v11; // ecx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  SIZE_T v14; // rsi
  unsigned __int8 v15; // r15
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  bool v20; // cc
  int v21; // [rsp+38h] [rbp-400h]
  _BYTE *P; // [rsp+40h] [rbp-3F8h]
  char *v24; // [rsp+68h] [rbp-3D0h]
  unsigned __int64 Src; // [rsp+88h] [rbp-3B0h]
  unsigned __int64 v27; // [rsp+90h] [rbp-3A8h]
  PVOID v29; // [rsp+B8h] [rbp-380h]
  _QWORD v30[2]; // [rsp+C8h] [rbp-370h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-360h]
  __int64 v32; // [rsp+E0h] [rbp-358h] BYREF
  SIZE_T v33; // [rsp+E8h] [rbp-350h]
  size_t v34; // [rsp+F0h] [rbp-348h] BYREF
  ULONG_PTR v35; // [rsp+F8h] [rbp-340h]
  $D4FCF91253F76F57393CBFE908971F67 v36; // [rsp+110h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+140h] [rbp-2F8h] BYREF
  _BYTE v38[512]; // [rsp+1F0h] [rbp-248h] BYREF

  v7 = a2;
  v35 = a3;
  if ( !Size )
    return 0LL;
  *a7 = 0LL;
  v27 = 0LL;
  v8 = a1[1].Affinity.Bitmap[12] == 0;
  Src = (unsigned __int64)a2;
  v24 = a4;
  v9 = Size;
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  P = 0LL;
  v30[1] = 0LL;
  v34 = Size;
  v30[0] = Size;
LABEL_3:
  NextEnclaveBoundary = MiFindNextEnclaveBoundary(a1, &v7[Size - v9], v9, &v34);
  v11 = 2
      * (v8 & 1 | (2 * (NextEnclaveBoundary & 1 | (2 * (MiFindNextEnclaveBoundary(v35, &a4[Size - v9], v9, v30) & 1)))));
  v12 = v8 & 0xF1;
  v8 = v8 & 0xFFFFFFF1 | v11;
  if ( ((v12 | (unsigned __int8)v11) & 4) != 0 )
    v8 &= ~2u;
  v13 = v9;
  if ( v34 < v9 )
    v13 = v34;
  if ( v30[0] < v13 )
    v13 = v30[0];
LABEL_9:
  if ( v13 >= 0x200 && (v8 & 2) != 0 )
  {
    v14 = 57344LL;
    v20 = Size <= 0xE000;
    goto LABEL_57;
  }
  v8 &= ~2u;
  v14 = v27;
  if ( v27 )
  {
    if ( v13 > v27 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( v13 > 0x200 )
  {
    v14 = 0x10000LL;
    if ( v9 <= 0x10000 )
      v14 = v9;
    do
    {
      P = ExAllocatePoolWithTag(PagedPool, v14, 0x77526D4Du);
      if ( P )
      {
        v27 = v14;
        goto LABEL_70;
      }
      v14 >>= 1;
    }
    while ( v14 > 0x200 );
    P = v38;
    v14 = 512LL;
LABEL_70:
    v20 = v13 <= v14;
LABEL_57:
    if ( !v20 )
      goto LABEL_14;
    goto LABEL_13;
  }
  P = v38;
LABEL_13:
  v14 = v13;
LABEL_14:
  v33 = v14;
  while ( 1 )
  {
    if ( !v13 )
    {
      if ( v9 )
        goto LABEL_3;
      if ( v27 )
        ExFreePoolWithTag(P, 0);
      *a7 = Size;
      return 0LL;
    }
    if ( v13 < v14 )
    {
      v14 = v13;
      v33 = v13;
    }
    KiStackAttachProcess(a1, 0LL, (__int64)&v36);
    if ( a6 && (char *)Src == v7 && ((unsigned __int64)&v7[Size] > MmUserProbeAddress || &v7[Size] < v7) )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( ((v8 >> 1) & 1) != 0 )
    {
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * (((v14 + (Src & 0xFFF) + 4095) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = Src & 0xFFF;
      MemoryDescriptorList.ByteCount = v14;
    }
    v15 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( ((v8 >> 1) & 1) != 0 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      goto LABEL_28;
    }
    if ( (v8 & 4) == 0 )
    {
      memmove(P, (const void *)Src, v14);
LABEL_28:
      v16 = v21;
      goto LABEL_31;
    }
    v16 = MiDbgReadWriteEnclave(Src, (_DWORD)P, v14, 1, (__int64)&v32);
    v21 = v16;
LABEL_31:
    if ( !v15 )
      CurrentThread->MiscFlags &= ~0x20u;
    if ( v16 < 0 )
      break;
    if ( ((v8 >> 1) & 1) != 0 )
    {
      v29 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v29 )
        goto LABEL_36;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_71:
      v8 &= ~2u;
      KiUnstackDetachProcess(&v36, 0LL);
      v7 = a2;
      goto LABEL_9;
    }
    v29 = P;
LABEL_36:
    KiUnstackDetachProcess(&v36, 0LL);
    KiStackAttachProcess((_KPROCESS *)v35, 0LL, (__int64)&v36);
    if ( a6 && (char *)Src == a2 && ((unsigned __int64)&a4[Size] > MmUserProbeAddress || &a4[Size] < a4) )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( (v8 & 8) != 0 )
    {
      v17 = MiDbgReadWriteEnclave((_DWORD)v24, (_DWORD)P, v14, 0, (__int64)&v32);
      v21 = v17;
      if ( v17 == -1073741819 )
      {
        *a7 = &v24[v32 - (_QWORD)a2];
        v18 = -2147483635;
        goto LABEL_63;
      }
      if ( v17 < 0 )
      {
        v18 = v17;
        goto LABEL_63;
      }
    }
    else
    {
      memmove(v24, v29, v14);
    }
    KiUnstackDetachProcess(&v36, 0LL);
    if ( ((v8 >> 1) & 1) != 0 )
      MmUnlockPages(&MemoryDescriptorList);
    v13 -= v14;
    v9 -= v14;
    Src += v14;
    v24 += v14;
    v7 = a2;
  }
  if ( (v8 & 2) != 0 )
    goto LABEL_71;
  *a7 = Size - v13;
  v18 = -2147483635;
LABEL_63:
  KiUnstackDetachProcess(&v36, 0LL);
  if ( v27 )
    ExFreePoolWithTag(P, 0);
  return v18;
}
