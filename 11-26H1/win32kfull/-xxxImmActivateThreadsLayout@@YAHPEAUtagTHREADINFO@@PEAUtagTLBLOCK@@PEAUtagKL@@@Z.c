/*
 * XREFs of ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1401C7168
 * Callers:
 *     EditionImmActivateThreadsLayout @ 0x1401C7150 (EditionImmActivateThreadsLayout.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1401C7168 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1401C7168 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     ??0tagTLBLOCK@@QEAA@XZ @ 0x1401C74A4 (--0tagTLBLOCK@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14023F808 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ??1tagTLBLOCK@@QEAA@XZ @ 0x140296CCC (--1tagTLBLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(struct tagTHREADINFO *a1, struct tagTLBLOCK *a2, struct tagKL *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rcx
  _QWORD *v10; // rbx
  int i; // esi
  _QWORD *v12; // r13
  __int64 v13; // r12
  _QWORD v15[6]; // [rsp+50h] [rbp-288h] BYREF
  _QWORD v16[66]; // [rsp+80h] [rbp-258h] BYREF

  tagTLBLOCK::tagTLBLOCK((tagTLBLOCK *)v16);
  v6 = 0;
  v7 = 0;
  PtiCurrent(v8);
  while ( a1 )
  {
    if ( *((struct tagKL **)a1 + 59) != a3
      && (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 1) == 0 )
    {
      if ( *((_QWORD *)a1 + 102) )
      {
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)&v16[4 * v7++ + 1], (ULONG_PTR)a1);
        if ( v7 == 16 )
          break;
      }
      else
      {
        *((_QWORD *)a1 + 104) = *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL);
        v15[0] = (char *)a1 + 472;
        v15[1] = a3;
        HMAssignmentLock(v15, 0LL);
        if ( *((_QWORD *)a1 + 103) )
          **((_QWORD **)a1 + 64) |= 0x40uLL;
        *(_QWORD *)(*((_QWORD *)a1 + 64) + 144LL) = *((_QWORD *)a3 + 5);
        *(_WORD *)(*((_QWORD *)a1 + 64) + 152LL) = *((_WORD *)a3 + 36);
      }
    }
    a1 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 87);
  }
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v7 )
    {
LABEL_17:
      tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v16);
      return v6;
    }
LABEL_14:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *((_QWORD *)a1 + 87) )
  {
    v16[0] = a2;
    v6 = xxxImmActivateThreadsLayout(*((struct tagTHREADINFO **)a1 + 87), (struct tagTLBLOCK *)v16, a3);
    goto LABEL_17;
  }
LABEL_18:
  v16[0] = a2;
  v10 = v16;
  while ( v10 )
  {
    for ( i = v7 - 1; i >= 0; --i )
    {
      v12 = &v10[4 * i];
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12[2] + 520LL), 0, 0) & 1) == 0 )
      {
        v13 = v12[2];
        xxxImmActivateLayout((struct tagTHREADINFO *)v13, a3);
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 520), 0, 0) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 512) + 144LL) = *((_QWORD *)a3 + 5);
          *(_WORD *)(*(_QWORD *)(v13 + 512) + 152LL) = *((_WORD *)a3 + 36);
        }
      }
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)(v12 + 1), 0);
    }
    v10 = (_QWORD *)*v10;
    v7 = 16;
  }
  tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v16);
  return 1LL;
}
