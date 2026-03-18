/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C007D400
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C007E1EC (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxClientCopyImage @ 0x1C007E418 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx

  v4 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v8 = HMValidateHandleNoRip(v4, a2);
  if ( !v8 )
    return v6;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDPIDWMSysMet(50LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v18 = 0)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v18) )
    {
      v11 = (_DWORD *)(gpsi + 2856LL);
    }
    else
    {
      v11 = (_DWORD *)(gpsi + 2080LL);
    }
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 2468LL);
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(49LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
    {
      goto LABEL_9;
    }
  }
  else if ( !(unsigned int)IsDPIDWMSysMet(v12)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v21 = 0)
           : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v21) )
  {
LABEL_9:
    if ( (unsigned int)IsDPIDWMSysMet(49LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v22 = 0)
        : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v22) )
    {
      v15 = (_DWORD *)(gpsi + 2852LL);
    }
    else
    {
      v15 = (_DWORD *)(gpsi + 2076LL);
    }
    goto LABEL_11;
  }
  v15 = (_DWORD *)(gpsi + 2464LL);
LABEL_11:
  v16 = xxxClientCopyImage(
          *(_QWORD *)v8,
          (unsigned int)(*(_WORD *)(v8 + 74) != 3) + 1,
          *v15,
          *v11,
          a3 != 0 ? 0x4000 : 0);
  if ( v16 )
  {
    v6 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
    {
      *(_DWORD *)(v16 + 80) |= 0x80u;
      InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), v6, 5LL);
      if ( !a3 )
        SetOrClrWF(1, a1, 0x720u, 1);
    }
  }
  return v6;
}
