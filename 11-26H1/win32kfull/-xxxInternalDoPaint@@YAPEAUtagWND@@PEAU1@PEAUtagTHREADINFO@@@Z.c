/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10
 * Callers:
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v3; // rbx
  ULONG_PTR **CurrentThreadWin32Thread; // rax
  ULONG_PTR *v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // rdx
  ULONG_PTR *v11; // rcx
  ULONG_PTR v12; // rcx
  struct tagWND *result; // rax
  ULONG_PTR *v14; // rax
  ULONG_PTR v15; // rdx
  ULONG_PTR *v16; // rcx
  struct tagWND *v17; // rax
  __int64 v18; // rdi
  ULONG_PTR *v19; // rax
  ULONG_PTR v20; // rdx
  ULONG_PTR *v21; // rcx
  ULONG_PTR v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  ULONG_PTR *v25; // rax
  ULONG_PTR v26; // rdx
  ULONG_PTR *v27; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v29; // [rsp+38h] [rbp-10h]

  v3 = a1;
  CurrentThreadWin32Thread = (ULONG_PTR **)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  BugCheckParameter3 = v5[56];
  v5[56] = (ULONG_PTR)&BugCheckParameter3;
  v29 = v3;
  if ( v3 )
    HMLockObject(v3);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v3 )
      {
        v14 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v5);
        if ( v14 )
          v15 = *v14;
        else
          v15 = 0LL;
        v16 = *(ULONG_PTR **)(v15 + 448);
        if ( v16 != &BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v15, (ULONG_PTR)&BugCheckParameter3, 0LL);
        *(_QWORD *)(v15 + 448) = *v16;
        result = (struct tagWND *)v16[1];
        if ( result )
          return (struct tagWND *)HMUnlockObject(v16[1]);
        return result;
      }
      if ( *((struct tagTHREADINFO **)v3 + 2) == a2 )
        break;
LABEL_7:
      v5 = (ULONG_PTR *)*((_QWORD *)v3 + 14);
      if ( v5 )
      {
        v17 = xxxInternalDoPaint((struct tagWND *)v5, a2);
        v18 = (__int64)v17;
        if ( v17 )
        {
          if ( v17 == v3 )
          {
            v18 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
            if ( BugCheckParameter3 == -1LL )
              return (struct tagWND *)v18;
            v25 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v24);
            if ( v25 )
              v26 = *v25;
            else
              v26 = 0LL;
            v27 = *(ULONG_PTR **)(v26 + 448);
            if ( v27 != &BugCheckParameter3 )
              KeBugCheckEx(0x164u, 0x3BuLL, v26, (ULONG_PTR)&BugCheckParameter3, 0LL);
            *(_QWORD *)(v26 + 448) = *v27;
            v22 = v27[1];
            if ( !v22 )
              return (struct tagWND *)v18;
          }
          else
          {
            v19 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v5);
            if ( v19 )
              v20 = *v19;
            else
              v20 = 0LL;
            v21 = *(ULONG_PTR **)(v20 + 448);
            if ( v21 != &BugCheckParameter3 )
              KeBugCheckEx(0x164u, 0x3BuLL, v20, (ULONG_PTR)&BugCheckParameter3, 0LL);
            *(_QWORD *)(v20 + 448) = *v21;
            v22 = v21[1];
            if ( !v22 )
              return (struct tagWND *)v18;
          }
          HMUnlockObject(v22);
          return (struct tagWND *)v18;
        }
      }
      v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
      v6 = v29;
      v29 = v3;
      if ( v3 )
        HMLockObject(v3);
      if ( v6 )
        HMUnlockObject(v6);
    }
    v7 = *((_QWORD *)v3 + 5);
    if ( (*(_BYTE *)(v7 + 27) & 2) == 0 )
      break;
    xxxCompositedPaint(v3);
    v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
    Win32HM_ExchangeThreadLock<1>(v3, &BugCheckParameter3);
  }
  if ( !*(_QWORD *)(v7 + 136) && (*(_BYTE *)(v7 + 17) & 0x10) == 0 )
    goto LABEL_7;
  if ( (*(_BYTE *)(v7 + 24) & 0x20) != 0 )
  {
    while ( 1 )
    {
      v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
      if ( !v3 )
        break;
      if ( *((struct tagTHREADINFO **)v3 + 2) == a2 )
      {
        v8 = *((_QWORD *)v3 + 5);
        if ( (*(_QWORD *)(v8 + 136) || (*(_BYTE *)(v8 + 17) & 0x10) != 0) && (*(_BYTE *)(v8 + 24) & 0x20) == 0 )
        {
          if ( BugCheckParameter3 != -1LL )
          {
            v9 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v8);
            if ( v9 )
              v10 = *v9;
            else
              v10 = 0LL;
            v11 = *(ULONG_PTR **)(v10 + 448);
            if ( v11 != &BugCheckParameter3 )
              KeBugCheckEx(0x164u, 0x3BuLL, v10, (ULONG_PTR)&BugCheckParameter3, 0LL);
            *(_QWORD *)(v10 + 448) = *v11;
            v12 = v11[1];
            if ( v12 )
              HMUnlockObject(v12);
          }
          return v3;
        }
      }
    }
  }
  v23 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3);
  return (struct tagWND *)v23;
}
