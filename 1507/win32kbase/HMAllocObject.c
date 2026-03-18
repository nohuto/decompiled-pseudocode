/*
 * XREFs of HMAllocObject @ 0x1C004FB70
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AAB8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     IsDesktopAllocSupported_0 @ 0x1C00028A0 (IsDesktopAllocSupported_0.c)
 *     DesktopAlloc_0 @ 0x1C00028A8 (DesktopAlloc_0.c)
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0012D1C (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x1C0018960 (SharedAlloc.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     LockObjectAssignment @ 0x1C0050110 (LockObjectAssignment.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v6; // r12d
  char v9; // si
  __int64 *v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r9
  bool v15; // cc
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v19; // rax

  v5 = 0LL;
  v6 = 0;
  v9 = *((_BYTE *)&gahti + 16 * a3 + 12);
  if ( (v9 & 3) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 384);
    if ( *(_DWORD *)(v5 + 68) >= gUserProcessHandleQuota )
    {
      UserSetLastError(1158LL, a2);
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( a3 != 1 && qword_1C0100040 )
    {
      v10 = &qword_1C0100040;
      goto LABEL_6;
    }
    if ( qword_1C0100038 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v10 = &qword_1C0100038;
LABEL_6:
  if ( (v9 & 0x10) != 0 && a2 )
  {
    if ( (int)IsDesktopAllocSupported_0() < 0 )
      goto LABEL_45;
    v19 = DesktopAlloc_0();
    v13 = (_QWORD *)v19;
    if ( !v19 )
      goto LABEL_45;
    LockObjectAssignment(v19 + 24, a2);
    v13[4] = v13;
  }
  else if ( (v9 & 0x40) != 0 )
  {
    v13 = SharedAlloc(a4);
  }
  else
  {
    if ( !a2 && (v9 & 0x20) != 0 )
      v6 = 1;
    if ( (v9 & 8) == 0 || v6 )
    {
      if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
      {
        v13 = 0LL;
      }
      else
      {
        v12 = (_QWORD *)Win32AllocPoolImpl_0();
        v13 = v12;
        if ( v12 )
          memset(v12, 0, a4);
      }
    }
    else
    {
      v13 = Win32AllocPoolWithQuotaZInit(a4);
    }
  }
  if ( !v13 )
  {
LABEL_45:
    UserSetLastError(8LL, v11);
    return 0LL;
  }
  v14 = *v10;
  v15 = (unsigned int)*v10 <= giheLast;
  v16 = qword_1C01003E8 + 24 * *v10;
  *v10 = *(_QWORD *)v16;
  if ( !v15 )
    giheLast = v14;
  *(_BYTE *)(v16 + 16) = a3;
  *(_QWORD *)v16 = v13;
  if ( v6 )
    *(_BYTE *)(v16 + 17) |= 0x40u;
  if ( (v9 & 2) != 0 )
  {
    *((_DWORD *)v13 + 4) = 0;
    *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 + 384);
    if ( (v9 & 4) != 0 )
      v13[3] = *(_QWORD *)(a1 + 384);
  }
  else if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)(v16 + 8) = a1;
    v13[2] = a1;
  }
  *v13 = (int)v14 | (unsigned __int64)(*(unsigned __int16 *)(v14 * (unsigned int)dword_1C01003F0 + qword_1C01003E8 + 18) << 16);
  if ( v5 )
  {
    v17 = ++*(_DWORD *)(v5 + 68);
    if ( v17 > *(_DWORD *)(v5 + 72) )
      *(_DWORD *)(v5 + 72) = v17;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  return *(_QWORD *)v16;
}
