/*
 * XREFs of GetCPD @ 0x140150018
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     NtUserGetCPD @ 0x14014FF90 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int *i; // rax
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rbx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  void *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h] BYREF
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-8h]

  v5 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  v26 = gSmartObjNullRef;
  v27 = *(_QWORD *)(v7 + 1672);
  *(_QWORD *)(v7 + 1672) = &v27;
  if ( (a2 & 0x60) != 0 )
  {
    v19 = *(_QWORD *)(v5 + 136);
    if ( v19 == *(_QWORD *)v26 )
      goto LABEL_15;
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v26);
    if ( !v19 )
    {
      v26 = gSmartObjNullRef;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(v19 + 128);
  }
  else
  {
    if ( (a2 & 0x80u) != 0 )
      v5 = *(_QWORD *)(v5 + 136);
    if ( v5 == *(_QWORD *)v26 )
      goto LABEL_15;
    v8 = gSmartObjNullRef;
    if ( v26 != gSmartObjNullRef )
    {
      if ( !--*(_DWORD *)(v26 + 8) && *(_BYTE *)(v26 + 12) )
      {
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v26);
      }
      v8 = gSmartObjNullRef;
    }
    if ( !v5 )
    {
      v26 = v8;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(v5 + 128);
  }
  v26 = v10;
  ++*(_DWORD *)(v10 + 8);
LABEL_15:
  v11 = *(_QWORD *)v26;
  for ( i = *(unsigned int **)(*(_QWORD *)v26 + 48LL); ; i = (unsigned int *)*((_QWORD *)i + 7) )
  {
    if ( !i )
    {
      v13 = PtiCurrent(v11);
      LOBYTE(v14) = 7;
      v15 = HMAllocObject(v13, *((_QWORD *)v13 + 61), v14, 72LL);
      v16 = (_QWORD *)v15;
      if ( v15 )
      {
        v28 = v15 + 56;
        v29 = *(_QWORD **)(*(_QWORD *)v26 + 48LL);
        HMAssignmentLock(&v28, 0LL);
        v29 = v16;
        v28 = *(_QWORD *)v26 + 48LL;
        HMAssignmentLock(&v28, 0LL);
        *(_QWORD *)(v16[5] + 16LL) = a3;
        *(_WORD *)(v16[5] + 24LL) = a2;
        v17 = *v16;
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v26);
        return (unsigned int)v17 | 0xFFFF0000LL;
      }
      else
      {
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v26);
        return 0LL;
      }
    }
    v11 = *((_QWORD *)i + 5);
    if ( *(_QWORD *)(v11 + 16) == a3 && *(_WORD *)(v11 + 24) == a2 )
      break;
  }
  v20 = *i | 0xFFFF0000LL;
  v21 = (__int64 *)PsGetCurrentThreadWin32Thread(4294901760LL);
  if ( v21 )
    v22 = *v21;
  else
    v22 = 0LL;
  if ( v26 != gSmartObjNullRef && !--*(_DWORD *)(v26 + 8) )
  {
    if ( *(_BYTE *)(v26 + 12) )
    {
      v23 = v26;
      v24 = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(v24, v23);
    }
  }
  v25 = *(_QWORD **)(v22 + 1672);
  if ( v25 )
    *(_QWORD *)(v22 + 1672) = *v25;
  return v20;
}
