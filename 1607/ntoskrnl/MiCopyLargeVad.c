/*
 * XREFs of MiCopyLargeVad @ 0x1406623D0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 */

__int64 __fastcall MiCopyLargeVad(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  _KPROCESS *v4; // r15
  __int64 *VadEvent; // rax
  __int64 v7; // r10
  unsigned int v8; // ebx
  int v9; // ebx
  int v11; // r12d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  int v15; // r13d
  unsigned __int64 v16; // rdi
  size_t v17; // rsi
  void *v18; // rcx
  struct _MDL *v19; // r15
  void *v20; // [rsp+30h] [rbp-39h] BYREF
  struct _MDL *v21; // [rsp+38h] [rbp-31h] BYREF
  struct _MDL *v22; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR v24; // [rsp+50h] [rbp-19h]
  _BYTE v25[48]; // [rsp+58h] [rbp-11h] BYREF

  v4 = BugCheckParameter1;
  v24 = (ULONG_PTR)BugCheckParameter1;
  VadEvent = MiLocateVadEvent(a2, 16);
  *(_BYTE *)(v7 + 16) = *((_BYTE *)VadEvent + 16);
  *(_QWORD *)(v7 + 24) = VadEvent[3];
  v8 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
  KiStackAttachProcess(v4, 0, (__int64)v25);
  v9 = MiMapUserLargePages(a3, v8);
  KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = 0;
  v12 = 4292870144LL;
  v13 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v14 = v13 << 12;
  v15 = ((unsigned __int8)~*(_BYTE *)(a3 + 48) >> 5) & 1;
  v16 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v13 + 1) << 12;
  while ( v16 )
  {
    v17 = v16;
    if ( v16 > v12 )
      v17 = v12;
    v11 = ExLockUserBuffer(v14, v17, 1, IoReadAccess, &Src, &v22);
    if ( v11 < 0 )
      goto LABEL_7;
    KiStackAttachProcess(v4, 0, (__int64)v25);
    v18 = (void *)v14;
    if ( v15 == 1 )
    {
      v11 = ExLockUserBuffer(v14, v17, 1, IoWriteAccess, &v20, &v21);
      if ( v11 >= 0 )
      {
        v19 = v21;
        v18 = v20;
        goto LABEL_14;
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
      ExUnlockUserBuffer(v22);
LABEL_7:
      v12 = (v17 >> 1) & 0x7FFFFFFFFFE00000LL;
      if ( v12 < 0x200000 )
        return (unsigned int)v11;
    }
    else
    {
      v19 = 0LL;
      v20 = (void *)v14;
      v21 = 0LL;
LABEL_14:
      memmove(v18, Src, v17);
      if ( v15 == 1 )
        ExUnlockUserBuffer(v19);
      KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
      ExUnlockUserBuffer(v22);
      v4 = (_KPROCESS *)v24;
      v16 -= v17;
      v14 += v17;
    }
  }
  return (unsigned int)v11;
}
