/*
 * XREFs of MiIsProbeActive @ 0x140135338
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1402176A4 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiIoPfnCompare @ 0x140116BBC (MiIoPfnCompare.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiIoPfnRangeCompare @ 0x140217680 (MiIoPfnRangeCompare.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  int v8; // ebp
  _QWORD *v9; // rbx
  int v10; // eax
  char *v11; // rdx
  unsigned __int64 v12; // r9
  char *v13; // rax
  __int64 v14; // r10
  _WORD *v15; // r8
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r12
  _QWORD *v20; // r13
  unsigned __int64 PteShadow; // r14
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r9
  unsigned __int16 v24; // r10
  _QWORD *v25; // rsi
  int v26; // eax
  unsigned __int64 *v28; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v30; // [rsp+48h] [rbp-50h] BYREF
  char *v31; // [rsp+50h] [rbp-48h]

  v3 = 0;
  if ( (a3 & 3) == 1 && !qword_14034F648[0] )
    return 0LL;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_14034F640, &LockHandle);
  v9 = (_QWORD *)qword_14034F648[0];
  if ( qword_14034F648[0] )
  {
    if ( (a3 & 1) == 0 )
    {
      v30 = a1;
      v31 = (char *)a1 + a2 - 1;
      if ( qword_14034F648[0] )
      {
        do
        {
          v10 = MiIoPfnRangeCompare(&v30, v9);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              break;
            v9 = (_QWORD *)v9[1];
          }
          else
          {
            v9 = (_QWORD *)*v9;
          }
        }
        while ( v9 );
        v11 = v31;
        while ( v9 )
        {
          v12 = v9[5];
          if ( (unsigned __int64)v11 < v12 )
            break;
          if ( (unsigned __int64)v30 < v12 )
            v13 = 0LL;
          else
            v13 = (char *)v30 - v12;
          v14 = v9[6];
          v15 = (_WORD *)(v14 + 2LL * (_QWORD)v13);
          if ( (unsigned __int64)(v11 + 1) > v12 + 512 )
            v16 = v14 + 1024;
          else
            v16 = v14 + 2LL * (_QWORD)&v11[-v12 + 1];
          if ( (unsigned __int64)v15 < v16 )
          {
            while ( (*v15 & 0x3FFF) == 0 )
            {
              if ( (unsigned __int64)++v15 >= v16 )
                goto LABEL_25;
            }
            v8 = 1;
LABEL_25:
            v11 = v31;
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
LABEL_42:
      v3 = v8;
      goto LABEL_43;
    }
    v19 = -1LL;
    v28 = &a1[a2];
    v20 = 0LL;
    if ( a1 >= v28 )
      goto LABEL_42;
    while ( 1 )
    {
      PteShadow = *a1;
      if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(a1, *a1);
      v22 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
      if ( MI_IS_PFN(v22) )
      {
        if ( ((unsigned __int8)v24 & a3) != 0 && *(_WORD *)(48 * v22 - 0x57FFFFFFFE0LL) > v24 )
        {
LABEL_41:
          v8 = 1;
          goto LABEL_42;
        }
      }
      else
      {
        if ( v19 != -1 && v19 == (v22 & 0xFFFFFFFFFFFFFE00uLL) )
          goto LABEL_59;
        if ( !v20 || v20[5] != (v22 & 0xFFFFFFFFFFFFFE00uLL) )
        {
          v25 = v9;
          if ( !v9 )
            goto LABEL_58;
          do
          {
            v26 = MiIoPfnCompare(v22, (__int64)v25);
            if ( v26 >= 0 )
            {
              if ( v26 <= 0 )
                break;
              v25 = (_QWORD *)v25[1];
            }
            else
            {
              v25 = (_QWORD *)*v25;
            }
          }
          while ( v25 );
          v23 = (unsigned __int64)v28;
          if ( !v25 )
          {
LABEL_58:
            v19 = v22 & 0xFFFFFFE00LL;
            goto LABEL_59;
          }
          v20 = v25;
        }
        if ( (*(_WORD *)(v20[6] + 2 * (v22 - v20[5])) & 0x3FFF) != 0 )
          goto LABEL_41;
        v9 = (_QWORD *)qword_14034F648[0];
      }
LABEL_59:
      if ( (unsigned __int64)++a1 >= v23 )
        goto LABEL_42;
    }
  }
LABEL_43:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
