/*
 * XREFs of MiFindNextEnclaveBoundary @ 0x14047B340
 * Callers:
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

_BOOL8 __fastcall MiFindNextEnclaveBoundary(_KPROCESS *a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // r8
  char v13; // al
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 i; // rdx
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *j; // rax
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+20h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Process == a1 )
    v20.SavedApcState.Process = 0LL;
  else
    KiStackAttachProcess(a1, 0LL, (__int64)&v20);
  v10 = 0LL;
  if ( !MEMORY[0xFFFFF58010804264] )
  {
    *a4 = a3;
    goto LABEL_5;
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
  v12 = a1[2].Affinity.Bitmap[1];
  v13 = 0;
  if ( !v12 )
  {
LABEL_28:
    i = v12;
    if ( v13 && (*(_BYTE *)(v12 + 48) & 7) == 3 && (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
    {
      v10 = v12;
      if ( (*(_DWORD *)(v12 + 88) & 2) != 0 )
      {
        *a4 = (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
            - a2
            + 1;
        goto LABEL_43;
      }
      v10 = 0LL;
    }
    goto LABEL_15;
  }
  v14 = a2 >> 12;
  while ( v14 <= (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    if ( v14 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
    {
      v13 = 1;
      goto LABEL_28;
    }
    v15 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
    {
      i = v12;
      goto LABEL_15;
    }
LABEL_26:
    v12 = v15;
  }
  v15 = *(_QWORD *)(v12 + 8);
  if ( v15 )
    goto LABEL_26;
  for ( i = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
  {
    if ( *(_QWORD *)i == v12 )
      break;
    v12 = i;
  }
LABEL_15:
  if ( !i )
  {
LABEL_42:
    *a4 = a3;
    goto LABEL_43;
  }
  while ( 2 )
  {
    if ( (*(_BYTE *)(i + 48) & 7) != 3 || (*(_DWORD *)(i + 48) & 0x40000) == 0 )
    {
LABEL_20:
      if ( (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) >= (a2 + a3 - 1) >> 12 )
        goto LABEL_42;
      v17 = *(_QWORD ***)(i + 8);
      v18 = i;
      if ( v17 )
      {
        i = *(_QWORD *)(i + 8);
        for ( j = *v17; j; j = (_QWORD *)*j )
          i = (unsigned __int64)j;
      }
      else
      {
        for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v18 )
            break;
          v18 = i;
        }
      }
      if ( !i )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v10 = i;
  if ( (*(_DWORD *)(i + 88) & 2) == 0 )
  {
    v10 = 0LL;
    goto LABEL_20;
  }
  *a4 = ((*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12) - a2;
LABEL_43:
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
LABEL_5:
  if ( Process != a1 )
    KiUnstackDetachProcess(&v20, 0LL);
  return v10 != 0;
}
