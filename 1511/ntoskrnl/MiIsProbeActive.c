/*
 * XREFs of MiIsProbeActive @ 0x140103284
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1401D5718 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  int v8; // ebp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  _WORD *v15; // r9
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r13
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  _QWORD *v24; // rcx
  bool i; // zf
  unsigned __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v3 = 0;
  if ( (a3 & 3) == 1 && !qword_1402FF188[0] )
    return 0LL;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_1402FF180, &LockHandle);
  v9 = (_QWORD *)qword_1402FF188[0];
  if ( qword_1402FF188[0] )
  {
    if ( (a3 & 1) != 0 )
    {
      v19 = 0LL;
      v20 = a1 + 8 * a2;
      v21 = -1LL;
      while ( a1 < v20 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(a1);
        if ( MI_IS_PFN((v22 >> 12) & 0xFFFFFFFFFLL) )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v23 - 0x57FFFFFFFE0LL) > 2u )
          {
LABEL_40:
            v8 = 1;
            break;
          }
        }
        else if ( v21 == -1LL || v21 != (v23 & 0xFFFFFFFFFFFFFE00uLL) )
        {
          if ( v19 && v19[5] == (v23 & 0xFFFFFFFFFFFFFE00uLL) )
          {
LABEL_56:
            if ( (*(_WORD *)(v19[6] + 2 * (v23 - v19[5])) & 0x3FFF) != 0 )
              goto LABEL_40;
            v9 = (_QWORD *)qword_1402FF188[0];
          }
          else
          {
            v24 = v9;
            for ( i = v9 == 0LL; !i; i = v24 == 0LL )
            {
              v26 = v24[5];
              if ( v23 < v26 )
              {
                v24 = (_QWORD *)*v24;
              }
              else
              {
                if ( v23 < v26 + 512 )
                {
                  if ( v24 )
                  {
                    v19 = v24;
                    goto LABEL_56;
                  }
                  break;
                }
                v24 = (_QWORD *)v24[1];
              }
            }
            v21 = v23 & 0xFFFFFFFFFFFFFE00uLL;
          }
        }
        a1 += 8LL;
      }
    }
    else
    {
      v28 = a1;
      v10 = a1 + a2 - 1;
      v29 = v10;
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
          v10 = v29;
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
    }
    v3 = v8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
