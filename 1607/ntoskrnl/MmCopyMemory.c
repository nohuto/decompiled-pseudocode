/*
 * XREFs of MmCopyMemory @ 0x1401E5000
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiCheckPhysicalAddressRange @ 0x140147790 (MiCheckPhysicalAddressRange.c)
 *     ZwReadVirtualMemory @ 0x14015A9D0 (ZwReadVirtualMemory.c)
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 */

NTSTATUS __fastcall MmCopyMemory(char *Buffer, char *BaseAddress, SIZE_T NumberOfBytesToRead, int a4, PSIZE_T a5)
{
  ULONG_PTR *NumberOfBytesRead; // r12
  char v6; // r15
  unsigned __int64 v7; // rdi
  __int16 v8; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  int v17; // eax
  size_t v18; // r14
  int v19; // eax
  char EffectivePagePriorityThread; // r9
  unsigned __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rcx
  size_t v25; // rdx
  char *v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r8
  unsigned __int64 v29; // r13
  __int64 v30; // rdx
  int v31; // [rsp+38h] [rbp-41h]
  __int64 v32; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-31h] BYREF
  __int64 v34; // [rsp+50h] [rbp-29h]
  __int64 v35; // [rsp+58h] [rbp-21h]
  unsigned __int64 v36; // [rsp+60h] [rbp-19h] BYREF
  __int64 v37; // [rsp+68h] [rbp-11h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-9h]
  struct _KPROCESS *Process; // [rsp+78h] [rbp-1h]
  ULONG_PTR v40; // [rsp+80h] [rbp+7h]
  _QWORD v41[8]; // [rsp+88h] [rbp+Fh] BYREF
  char *v42; // [rsp+D8h] [rbp+5Fh]
  unsigned __int64 v43; // [rsp+E0h] [rbp+67h]
  KIRQL v44; // [rsp+F0h] [rbp+77h] BYREF

  v43 = (unsigned __int64)BaseAddress;
  v42 = Buffer;
  NumberOfBytesRead = a5;
  v6 = a4;
  v35 = 0LL;
  v7 = NumberOfBytesToRead;
  v8 = (__int16)BaseAddress;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v31 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( !MiCheckPhysicalAddressRange((unsigned __int64)BaseAddress, NumberOfBytesToRead) )
      return -1073741800;
    v10 = v7 + 4095;
  }
  else
  {
    if ( &BaseAddress[NumberOfBytesToRead] <= BaseAddress )
      return -1073741800;
    if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned __int64)&BaseAddress[NumberOfBytesToRead] <= 0x7FFFFFFEFFFFLL )
        return ZwReadVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 BaseAddress,
                 Buffer,
                 NumberOfBytesToRead,
                 NumberOfBytesRead);
      return -1073741800;
    }
    v10 = NumberOfBytesToRead + 4095;
  }
  v11 = ((v8 & 0xFFF) + v10) >> 12;
  if ( v11 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v11, NumberOfBytesToRead);
  v13 = v43;
  v14 = 0;
  v40 = v12;
  v15 = v43 & 0xFFF;
  v34 = v12;
  v16 = v12;
  v17 = v31;
  v18 = 4096 - v15;
  if ( 4096 - v15 > v7 )
    v18 = v7;
  if ( v31 )
  {
    v33 = v43 >> 12;
    v17 = v31;
  }
  else
  {
    v33 = -1LL;
  }
  if ( !v7 )
    goto LABEL_58;
  while ( 1 )
  {
    v37 = 0LL;
    v36 = 0LL;
    if ( v17 )
    {
      v27 = 0LL;
      v44 = 17;
      v32 = 0LL;
      goto LABEL_44;
    }
    v19 = MiTranslatePageForCopy(v13, (char **)&v32, (__int64 *)&v33, &v37, &v44, &v36);
    v14 = v19;
    if ( v19 >= 0 )
    {
      if ( v19 == 273 )
      {
        v14 = 0;
        v25 = v18;
        if ( v18 )
        {
          v26 = &v42[-v15];
          do
          {
            v26[v15] = *((_BYTE *)&v36 + (v15 & 7));
            ++v15;
            --v25;
          }
          while ( v25 );
        }
LABEL_49:
        v35 += v18;
        v7 -= v18;
        v42 += v18;
        ++v33;
        v13 = v18 + v43;
        v16 = v34;
        v18 = v7;
        v43 = v13;
        if ( v7 > 0x1000 )
          v18 = 4096LL;
        v15 = 0LL;
        if ( v34 )
        {
          v16 = v34 + 8;
          v34 += 8LL;
        }
        goto LABEL_53;
      }
      v27 = v32;
      v16 = v34;
LABEL_44:
      v28 = v15;
      v29 = v33;
      v14 = MiCopySinglePage(v42, v33, v28, v18, v16, v6);
      if ( v27 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v29 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
          MiUnlockProtoPoolPage(v37, 2u);
        LOBYTE(v30) = v44;
        MiUnlockWorkingSetExclusive(v32, v30);
      }
      if ( v14 < 0 )
        goto LABEL_57;
      goto LABEL_49;
    }
    if ( v19 != -1073741608 )
      goto LABEL_57;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    v21 = v43;
    v41[0] = v43;
    v32 = 1LL;
    v22 = EffectivePagePriorityThread & 7 | 0x80B8;
    v23 = 1LL;
    v24 = v7;
    if ( v7 > 0x200000 - (v43 & 0x1FFFFF) )
      v24 = 0x200000 - (v43 & 0x1FFFFF);
    v41[1] = v24;
    if ( v43 >= qword_140326950 && v43 < qword_140326950 + 0x8000000000LL )
    {
      if ( !Process[1].ActiveProcessors.Bitmap[2] || Process == PsInitialSystemProcess )
      {
        v14 = -1073741819;
        goto LABEL_57;
      }
      v21 = v43;
      v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      v32 = v23;
    }
    if ( v21 >= qword_140327FD0 && v21 <= qword_140326D38 )
      break;
    v14 = MiPrefetchVirtualMemory(1uLL, (__int64)v41, v23, v22);
    if ( v14 < 0 )
      goto LABEL_57;
    v13 = v43;
    v16 = v34;
LABEL_53:
    if ( !v7 )
      goto LABEL_57;
    v17 = v31;
  }
  v14 = -1073741585;
LABEL_57:
  NumberOfBytesRead = a5;
LABEL_58:
  if ( v40 )
    MiReleasePtes((__int64)&qword_1403278B0, v40, v11);
  *NumberOfBytesRead += v35;
  return v14;
}
