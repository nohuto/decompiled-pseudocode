/*
 * XREFs of ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1401C7430 (EditionFreeIMEKeyboardLayouts.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1401C74D8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C7728 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401C7780 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A15BC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxImmUnloadThreadsLayout(ULONG_PTR *a1, int a2, struct tagTLBLOCK *a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // edi
  ULONG_PTR *v11; // rbx
  ULONG_PTR v12; // rcx
  int v13; // eax
  __int64 v14; // r13
  unsigned int v15; // ebp
  int v16; // r12d
  bool v17; // r15
  struct tagTLBLOCK **v18; // rdi
  int v19; // esi
  __int64 v20; // rbx
  struct tagTHREADINFO **v21; // rsi
  struct tagTHREADINFO **v22; // rbx
  ULONG_PTR v23; // r14
  struct tagTLBLOCK *v24; // [rsp+30h] [rbp-268h] BYREF
  _OWORD v25[32]; // [rsp+38h] [rbp-260h] BYREF

  `vector constructor iterator'(
    v25,
    0x20uLL,
    0x10uLL,
    (void *(*)(void *))tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_);
  PtiCurrent(v8);
  v24 = a3;
  v9 = 0;
  v10 = 0;
  if ( a2 > 0 )
  {
    v11 = a1;
    do
    {
      if ( v10 >= 16 )
        break;
      v12 = *v11;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v11 + 520), 0, 0) & 1) == 0
        && *(_QWORD *)(*v11 + 816)
        && *(_QWORD *)(*v11 + 472)
        && (a4 != 1
         || (**(_DWORD **)(W32GetUserSessionState(v12, 0LL) + 19904) & 4) != 0
         || (*(_WORD *)(*(_QWORD *)(*v11 + 472) + 42LL) & 0xF000) == 0xE000) )
      {
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)&v25[2 * v10++], *v11);
      }
      ++v9;
      ++v11;
    }
    while ( v9 < a2 );
  }
  v13 = v9 + 1;
  if ( v10 != 16 )
    v13 = v9;
  if ( v13 >= a2 )
  {
    v14 = v10;
    v15 = 1;
    v16 = v10 - 1;
    v17 = a4 != 2;
    if ( a4 != 2 )
      v15 = a4;
    while ( 1 )
    {
      v18 = &v24;
      v19 = v16;
      v20 = v14 - 1;
      if ( v16 >= 0 )
      {
LABEL_30:
        if ( v17 )
        {
          v22 = &v18[4 * v20 + 2];
          v23 = (ULONG_PTR)&v18[4 * (unsigned int)v19 + 1];
          do
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v22 + 130, 0, 0) & 1) == 0 )
              xxxImmUnloadLayout(*v22, v15);
            Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v23, 0);
            v23 -= 32LL;
            v22 -= 4;
            --v19;
          }
          while ( v19 >= 0 );
        }
        else if ( v20 >= 0 )
        {
          v21 = &v18[4 * v20 + 2];
          do
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v21 + 130, 0, 0) & 1) == 0 )
              xxxImmUnloadLayout(*v21, v15);
            v21 -= 4;
            --v20;
          }
          while ( v20 >= 0 );
        }
      }
      v18 = (struct tagTLBLOCK **)*v18;
      v19 = 15;
      v20 = 15LL;
      if ( v18 )
        goto LABEL_30;
      if ( v17 )
        goto LABEL_17;
      v17 = 1;
      v15 = 2;
    }
  }
  xxxImmUnloadThreadsLayout((struct tagTHREADINFO **)&a1[v13], a2 - v13, (struct tagTLBLOCK *)&v24, a4);
LABEL_17:
  `vector destructor iterator'(
    v25,
    0x20uLL,
    0x10uLL,
    (void (*)(void *))tagTLBLOCK::_unnamed_type_list_::~_unnamed_type_list_);
}
