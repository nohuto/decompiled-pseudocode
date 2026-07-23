/*
 * XREFs of MmIsFileMapped @ 0x14065B7C8
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x140625770 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(_KPROCESS *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // r12d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r14
  ULONG_PTR v14; // rdx
  _BYTE v17[48]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (__int64)a1;
  if ( CurrentThread->ApcState.Process == a1 )
  {
    v6 = 0;
  }
  else
  {
    KiStackAttachProcess(a1, 0, (__int64)v17);
    v6 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
  v7 = *(_QWORD **)(v5 + 1568);
  v8 = 0LL;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
  }
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)v8[1];
      v10 = (__int64)v8;
      v11 = v8;
      if ( v9 )
      {
        do
        {
          v8 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
      else
      {
        while ( 1 )
        {
          v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v8 || (_QWORD *)*v8 == v11 )
            break;
          v11 = v8;
        }
      }
      if ( (*(_DWORD *)(v10 + 48) & 0x8000) == 0 )
      {
        MiLockVad((__int64)CurrentThread, v10);
        if ( !(unsigned int)MiVadDeleted(v10) )
        {
          v12 = *(__int64 **)(v10 + 72);
          v13 = *v12;
          if ( *(_QWORD *)(*v12 + 64) )
          {
            v14 = MiReferenceControlAreaFile(*v12);
            if ( *(_QWORD *)(v14 + 40) == v4 )
              v3 = 1;
            MiDereferenceControlAreaFile(v13, v14);
          }
        }
        MiUnlockVad((__int64)CurrentThread, v10);
        if ( v3 == 1 )
          break;
      }
    }
    while ( v8 );
    v5 = (__int64)a1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
  if ( v6 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  return v3;
}
