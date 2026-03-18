/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x140036160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(__int64 a1, unsigned int a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned int ULongFromUser; // eax
  unsigned int v13; // esi
  _DWORD *v14; // r14
  __int64 v15; // rdi
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-50h] BYREF
  void (*v24)(void *); // [rsp+68h] [rbp-40h]

  v8 = (unsigned __int16)a3 & 0x8000;
  PsGetCurrentThreadWin32Thread(a1);
  if ( a3 == 0x8000 || a3 == 32772 || a3 == 32775 || a3 == 32776 || (unsigned __int64)(a3 - 32777) < 2 )
  {
    v9 = 0LL;
    if ( !a4 )
    {
      UserSetLastError(87);
      return v9;
    }
  }
  else
  {
    v9 = 0LL;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  if ( !v8 )
  {
LABEL_64:
    UserSessionState = W32GetUserSessionState(v11, v10);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, void *, __int64))(UserSessionState
                                                                              + 8LL * ((a6 + 6) & 0x1F)
                                                                              + 70904))(
           a1,
           a2,
           a3,
           a4,
           a5);
LABEL_65:
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
    return v9;
  }
  if ( !a4 )
  {
    UserSetLastError(87);
    goto LABEL_65;
  }
  ULongFromUser = RtlReadULongFromUser(a4);
  v13 = ULongFromUser;
  if ( ULongFromUser < 0xC || (ProbeForRead(a4, ULongFromUser, 1u), v13 + 2 < v13) )
  {
    UserSetLastError(87);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  }
  else
  {
    v14 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v13 + 2, 1986294613LL);
    if ( v14 )
    {
      v15 = -1LL;
      if ( v24 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v14, (ULONG_PTR)BugCheckParameter4);
      }
      v16 = PtiCurrent();
      BugCheckParameter2[0] = *((_QWORD *)v16 + 47);
      *((_QWORD *)v16 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)v14;
      v24 = Win32FreePool;
      memmove(v14, a4, v13);
      *((_WORD *)v14 + ((unsigned __int64)v13 >> 1)) = 0;
      a4 = v14;
      if ( *v14 != v13 )
        goto LABEL_65;
      if ( v14[1] == 3 )
      {
        if ( v13 < 0x10 )
          goto LABEL_65;
        do
          ++v15;
        while ( *((_WORD *)v14 + v15 + 6) );
        if ( (int)v15 + 1 < (unsigned int)v15 )
          goto LABEL_65;
        v11 = 2LL * (unsigned int)(v15 + 1);
        if ( v11 > 0xFFFFFFFF || (int)v11 + 12 < (unsigned int)v11 || (int)v11 + 12 > v13 )
          goto LABEL_65;
      }
      else if ( v14[1] == 5 )
      {
        if ( v13 < 0x20 )
          goto LABEL_65;
        do
          ++v15;
        while ( *((_WORD *)v14 + v15 + 14) );
        if ( (int)v15 + 1 < (unsigned int)v15 )
          goto LABEL_65;
        v11 = 2LL * (unsigned int)(v15 + 1);
        if ( v11 > 0xFFFFFFFF || (int)v11 + 28 < (unsigned int)v11 || (int)v11 + 28 > v13 )
          goto LABEL_65;
      }
      else
      {
        v11 = (unsigned int)(v14[1] - 6);
        if ( v14[1] == 6 )
        {
          if ( v13 < 0x38 )
            goto LABEL_65;
          if ( a3 == 32774 )
          {
            v10 = (int)v14[12];
            if ( (int)v10 >= 0 )
            {
              if ( (v10 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (int)v10 + 52 > v13 )
                goto LABEL_65;
              v18 = (unsigned __int64)v14 + v10 + 52;
              if ( v18 < (unsigned __int64)(v14 + 13) )
                goto LABEL_65;
              do
                ++v15;
              while ( *(_WORD *)(v18 + 2 * v15) );
              if ( (int)v15 + 1 < (unsigned int)v15 )
                goto LABEL_65;
              v19 = 2LL * (unsigned int)(v15 + 1);
              if ( v19 > 0xFFFFFFFF )
                goto LABEL_65;
              v20 = v19 + 52;
              if ( (int)v19 + 52 < (unsigned int)v19 )
                goto LABEL_65;
              v11 = (unsigned int)v10 + v20;
              if ( (unsigned int)v11 < v20 || (unsigned int)v11 > v13 )
                goto LABEL_65;
            }
          }
        }
        else if ( v14[1] == 7 )
        {
          if ( v13 < 0x1A0 )
            goto LABEL_65;
          do
            ++v15;
          while ( *((_WORD *)v14 + v15 + 8) );
          if ( (int)v15 + 1 < (unsigned int)v15 )
            goto LABEL_65;
          v11 = 2LL * (unsigned int)(v15 + 1);
          if ( v11 > 0xFFFFFFFF || (int)v11 + 16 < (unsigned int)v11 || (int)v11 + 16 > v13 )
            goto LABEL_65;
        }
      }
      goto LABEL_64;
    }
    UserSetLastError(8);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  }
  return v9;
}
