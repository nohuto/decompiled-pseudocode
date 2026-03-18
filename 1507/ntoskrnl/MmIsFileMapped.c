/*
 * XREFs of MmIsFileMapped @ 0x1406A5898
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x1406761D0 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r14
  ULONG_PTR v18; // rdx
  _BYTE v21[48]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = (__int64)a1;
  if ( CurrentThread->ApcState.Process == a1 )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a1, 0, (__int64)v21);
    v8 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v7, a3, a4);
  v11 = *(_QWORD **)(v7 + 1544);
  v12 = 0LL;
  while ( v11 )
  {
    v12 = v11;
    v11 = (_QWORD *)*v11;
  }
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[1];
      v14 = (__int64)v12;
      v15 = v12;
      if ( v13 )
      {
        do
        {
          v12 = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      if ( (*(_DWORD *)(v14 + 48) & 0x8000) == 0 )
      {
        MiLockVad((__int64)CurrentThread, v14, v9, v10);
        if ( !(unsigned int)MiVadDeleted(v14) )
        {
          v16 = *(__int64 **)(v14 + 72);
          v17 = *v16;
          if ( *(_QWORD *)(*v16 + 64) )
          {
            v18 = MI_REFERENCE_CONTROL_AREA_FILE(*v16);
            if ( *(_QWORD *)(v18 + 40) == v6 )
              v5 = 1;
            MI_DEREFERENCE_CONTROL_AREA_FILE(v17, v18);
          }
        }
        MiUnlockVad((__int64)CurrentThread, v14);
        if ( v5 == 1 )
          break;
      }
    }
    while ( v12 );
    v7 = (__int64)a1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v7);
  if ( v8 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
  return v5;
}
