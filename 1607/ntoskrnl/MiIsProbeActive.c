/*
 * XREFs of MiIsProbeActive @ 0x14010E43C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x14010E038 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1401E6B74 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v8; // esi
  _QWORD *v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r11
  _WORD *v15; // r10
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rbp
  _QWORD *v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // r11
  _QWORD *v26; // rcx
  bool i; // zf
  unsigned __int64 v28; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v3 = 0;
  if ( (a3 & 3) == 1 && !qword_140327608[0] )
    return 0LL;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140327600, &LockHandle);
  v9 = (_QWORD *)qword_140327608[0];
  if ( qword_140327608[0] )
  {
    if ( (a3 & 1) != 0 )
    {
      v19 = a1 + 8 * a2;
      v20 = 0LL;
      if ( a1 >= v19 )
        goto LABEL_40;
      while ( 1 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(a1);
        if ( MiIsPfnInline((v21 >> 12) & 0xFFFFFFFFFLL) )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v24 - 0x57FFFFFFFE0LL) > 2u )
          {
LABEL_39:
            v8 = 1;
            goto LABEL_40;
          }
        }
        else if ( v25 == -1 || v25 != (v24 & 0xFFFFFFFFFFFFFE00uLL) )
        {
          if ( v20 && v20[5] == (v24 & 0xFFFFFFFFFFFFFE00uLL) )
          {
LABEL_55:
            if ( (*(_WORD *)(v20[6] + 2 * ((v22 & v24) - v20[5])) & 0x3FFF) != 0 )
              goto LABEL_39;
          }
          else
          {
            v26 = v23;
            for ( i = v23 == 0LL; !i; i = v26 == 0LL )
            {
              v28 = v26[5];
              if ( v24 < v28 )
              {
                v26 = (_QWORD *)*v26;
              }
              else
              {
                if ( v24 < v28 + 512 )
                {
                  if ( !v26 )
                    break;
                  v20 = v26;
                  goto LABEL_55;
                }
                v26 = (_QWORD *)v26[1];
              }
            }
          }
        }
        a1 += 8LL;
        if ( a1 >= v19 )
          goto LABEL_40;
      }
    }
    v30 = a1;
    v10 = a1 + a2 - 1;
    v31 = v10;
    while ( v9 )
    {
      v11 = v9[5];
      if ( v10 < v11 )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( a1 <= v11 + 512 )
          break;
        v9 = (_QWORD *)v9[1];
      }
    }
    while ( v9 )
    {
      v12 = v9[5];
      if ( v10 < v12 )
        break;
      if ( a1 < v12 )
        v13 = 0LL;
      else
        v13 = a1 - v12;
      v14 = v9[6];
      v15 = (_WORD *)(v14 + 2 * v13);
      if ( v10 + 1 > v12 + 512 )
        v16 = v14 + 1024;
      else
        v16 = v14 + 2 * (v10 - v12 + 1);
      if ( (unsigned __int64)v15 < v16 )
      {
        while ( (*v15 & 0x3FFF) == 0 )
        {
          if ( (unsigned __int64)++v15 >= v16 )
            goto LABEL_25;
        }
        v8 = 1;
LABEL_25:
        v10 = v31;
      }
      if ( v8 == 1 )
        break;
      v17 = (_QWORD *)v9[1];
      v18 = v9;
      if ( v17 )
      {
        do
        {
          v9 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v9 || (_QWORD *)*v9 == v18 )
            break;
          v18 = v9;
        }
      }
    }
LABEL_40:
    v3 = v8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
