/*
 * XREFs of HMAllocObject @ 0x1C0041A20
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D720 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     IsDesktopAllocSupported_0 @ 0x1C00028C0 (IsDesktopAllocSupported_0.c)
 *     DesktopAlloc_0 @ 0x1C00028C8 (DesktopAlloc_0.c)
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     LockObjectAssignment @ 0x1C0042100 (LockObjectAssignment.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     SharedAlloc @ 0x1C006C120 (SharedAlloc.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006CB80 (-HMGrowHandleTable@@YAHXZ.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned __int8 v4; // al
  size_t v6; // r13
  __int64 v7; // rdi
  int v8; // r15d
  char v10; // si
  __int64 *v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // r10
  bool v14; // cc
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // eax
  _QWORD *v19; // rax
  __int64 v20; // rcx

  v4 = a3;
  v6 = a4;
  v7 = 0LL;
  v8 = 0;
  v10 = *((_BYTE *)&gahti + 16 * a3 + 12);
  if ( (v10 & 3) == 0 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a1 + 376);
  if ( *(_DWORD *)(v7 + 68) >= gUserProcessHandleQuota )
  {
    v20 = 1158LL;
    goto LABEL_48;
  }
  while ( 1 )
  {
    v4 = a3;
LABEL_4:
    if ( v4 != 1 && qword_1C0103528 )
    {
      v11 = &qword_1C0103528;
      goto LABEL_7;
    }
    if ( qword_1C0103520 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v11 = &qword_1C0103520;
LABEL_7:
  if ( (v10 & 0x10) == 0 || !a2 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v19 = (_QWORD *)SharedAlloc((unsigned int)v6);
    }
    else
    {
      if ( !a2 && (v10 & 0x20) != 0 )
        v8 = 1;
      if ( (v10 & 8) == 0 || v8 )
      {
        if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
          v12 = 0LL;
        else
          v12 = (_QWORD *)Win32AllocPoolImpl_0();
        if ( v12 )
        {
          memset(v12, 0, v6);
          goto LABEL_17;
        }
        goto LABEL_47;
      }
      v19 = Win32AllocPoolWithQuotaZInit(v6);
    }
    v12 = v19;
LABEL_17:
    if ( v12 )
    {
      v13 = *v11;
      v14 = (unsigned int)*v11 <= giheLast;
      v15 = qword_1C0102D48;
      v16 = 3 * *v11;
      *v11 = *(_QWORD *)(qword_1C0102D48 + 24 * *v11);
      if ( !v14 )
        giheLast = v13;
      *(_BYTE *)(v15 + 8 * v16 + 16) = a3;
      *(_QWORD *)(v15 + 8 * v16) = v12;
      if ( v8 )
        *(_BYTE *)(v15 + 8 * v16 + 17) |= 0x40u;
      if ( (v10 & 2) != 0 )
      {
        *((_DWORD *)v12 + 4) = 0;
        *(_QWORD *)(v15 + 8 * v16 + 8) = *(_QWORD *)(a1 + 376);
        if ( (v10 & 4) != 0 )
          v12[3] = *(_QWORD *)(a1 + 376);
      }
      else if ( (v10 & 1) != 0 )
      {
        *(_QWORD *)(v15 + 8 * v16 + 8) = a1;
        v12[2] = a1;
      }
      *v12 = (int)v13 | (unsigned __int64)(*(unsigned __int16 *)(v13 * (unsigned int)dword_1C0102D50
                                                               + qword_1C0102D48
                                                               + 18) << 16);
      if ( v7 )
      {
        v17 = ++*(_DWORD *)(v7 + 68);
        if ( v17 > *(_DWORD *)(v7 + 72) )
          *(_DWORD *)(v7 + 72) = v17;
      }
      if ( ++giheCount > (unsigned int)giheCountPeak )
        giheCountPeak = giheCount;
      return *(_QWORD *)(v15 + 8 * v16);
    }
    goto LABEL_47;
  }
  if ( (int)IsDesktopAllocSupported_0() < 0 )
    v12 = 0LL;
  else
    v12 = (_QWORD *)DesktopAlloc_0();
  if ( v12 )
  {
    LockObjectAssignment(v12 + 3, a2);
    v12[4] = v12;
    goto LABEL_17;
  }
LABEL_47:
  v20 = 8LL;
LABEL_48:
  UserSetLastError(v20);
  return 0LL;
}
