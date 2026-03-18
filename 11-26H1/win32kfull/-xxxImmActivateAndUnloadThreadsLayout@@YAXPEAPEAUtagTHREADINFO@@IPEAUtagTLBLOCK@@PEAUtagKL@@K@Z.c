/*
 * XREFs of ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC
 * Callers:
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1402C3B30 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??0tagTLBLOCK@@QEAA@XZ @ 0x1401C74A4 (--0tagTLBLOCK@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14023F808 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ??1tagTLBLOCK@@QEAA@XZ @ 0x140296CCC (--1tagTLBLOCK@@QEAA@XZ.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1402A11AC (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A15BC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxImmActivateAndUnloadThreadsLayout(
        struct tagTHREADINFO **a1,
        int a2,
        struct tagTLBLOCK *a3,
        struct tagKL *a4,
        unsigned int a5)
{
  struct tagTHREADINFO **v7; // r13
  __int64 v8; // rcx
  struct tagKL *v9; // rdx
  int v10; // edi
  int v11; // ebx
  int v12; // r14d
  ULONG_PTR *v13; // r13
  char v14; // bl
  PRKPROCESS *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  int v19; // edi
  _QWORD *v20; // r12
  __int64 v21; // rbx
  _DWORD *v22; // rbx
  ULONG_PTR v23; // r14
  _QWORD *v24; // rdi
  int v25; // r14d
  __int64 v26; // r13
  _QWORD *v27; // rbx
  ULONG_PTR v28; // r12
  int v29; // [rsp+34h] [rbp-2C4h]
  int v30; // [rsp+38h] [rbp-2C0h]
  _QWORD *v32; // [rsp+40h] [rbp-2B8h]
  __int64 v34; // [rsp+58h] [rbp-2A0h]
  struct tagTHREADINFO *v36; // [rsp+68h] [rbp-290h]
  _QWORD v37[4]; // [rsp+80h] [rbp-278h] BYREF
  _QWORD v38[66]; // [rsp+A0h] [rbp-258h] BYREF

  v7 = a1;
  tagTLBLOCK::tagTLBLOCK((tagTLBLOCK *)v38);
  v36 = PtiCurrent(v8);
  v38[0] = a3;
  v10 = 0;
  v11 = 0;
  v29 = 0;
  while ( v10 < a2 )
  {
    v12 = 0;
    v13 = (ULONG_PTR *)&v7[v10];
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v13 + 520), 0, 0) & 1) != 0 )
    {
      v12 = -65536;
    }
    else
    {
      v9 = a4;
      if ( *(struct tagKL **)(*v13 + 472) != a4 )
      {
        if ( *(_QWORD *)(*v13 + 816) )
        {
          v12 = 1;
        }
        else
        {
          v14 = 0;
          v37[0] = *v13 + 472;
          v37[1] = a4;
          HMAssignmentLock(v37, 0LL);
          if ( *(_QWORD *)(*v13 + 512) != *((_QWORD *)v36 + 64) )
          {
            v15 = *(PRKPROCESS **)(*v13 + 456);
            if ( v15 != *((PRKPROCESS **)v36 + 57) )
            {
              KeAttachProcess(*v15);
              v14 = 1;
            }
          }
          *(_WORD *)(*(_QWORD *)(*v13 + 512) + 152LL) = *((_WORD *)a4 + 36);
          v9 = (struct tagKL *)*((_QWORD *)a4 + 5);
          *(_QWORD *)(*(_QWORD *)(*v13 + 512) + 144LL) = v9;
          if ( v14 )
            KeDetachProcess();
          v11 = v29;
        }
      }
    }
    if ( *(_QWORD *)(*v13 + 816) )
    {
      v16 = *(_QWORD *)(*v13 + 472);
      if ( v16 )
      {
        if ( (a5 != 1
           || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000
           || (**(_DWORD **)(W32GetUserSessionState(57344LL, v9) + 19904) & 4) != 0)
          && v12 != -65536 )
        {
          v12 |= 2u;
        }
      }
    }
    if ( ((v12 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 4LL * v11;
      Win32RawLockedW32Thread::ManualLock(&v38[v17 + 1], *v13);
      LODWORD(v38[v17 + 4]) = v12;
      v11 = v29 + 1;
      v29 = v11;
      if ( v11 == 16 )
      {
        v18 = v10 + 1;
        if ( v18 < a2 )
        {
          xxxImmActivateAndUnloadThreadsLayout(&a1[v18], a2 - v18, (struct tagTLBLOCK *)v38, a4, a5);
          goto LABEL_46;
        }
        break;
      }
    }
    ++v10;
    v7 = a1;
  }
  v30 = v11 - 1;
  v19 = v11 - 1;
  v20 = v38;
  v34 = v11 - 1;
  v21 = v34;
  do
  {
    if ( v19 >= 0 )
    {
      v22 = &v20[4 * v21 + 4];
      v23 = (ULONG_PTR)&v20[4 * v19 + 1];
      do
      {
        if ( (*v22 & 1) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v22 - 2) + 520LL), 0, 0) & 1) == 0 )
        {
          xxxImmActivateLayout(*((struct tagTHREADINFO **)v22 - 2), a4);
        }
        if ( (*v22 & 3) == 1 )
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v23, 0);
        v23 -= 32LL;
        v22 -= 8;
        --v19;
      }
      while ( v19 >= 0 );
    }
    v19 = 15;
    v21 = 15LL;
    v20 = (_QWORD *)*v20;
  }
  while ( v20 );
  v24 = v38;
  v32 = v38;
  v25 = v30;
  v26 = v34;
  do
  {
    if ( v25 >= 0 )
    {
      v27 = &v24[4 * v26 + 2];
      v28 = (ULONG_PTR)&v24[4 * v25 + 1];
      do
      {
        if ( (v27[2] & 2) != 0 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v27 + 520LL), 0, 0) & 1) == 0 )
            xxxImmUnloadLayout((struct tagTHREADINFO *)*v27, a5);
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v28, 0);
        }
        v28 -= 32LL;
        v27 -= 4;
        --v25;
      }
      while ( v25 >= 0 );
      v24 = v32;
    }
    v25 = 15;
    v26 = 15LL;
    v24 = (_QWORD *)*v24;
    v32 = v24;
  }
  while ( v24 );
LABEL_46:
  tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v38);
}
