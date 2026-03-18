/*
 * XREFs of HMAllocObject @ 0x1C0038CC0
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005E32C (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     IsDesktopAllocSupported_0 @ 0x1C00028D0 (IsDesktopAllocSupported_0.c)
 *     DesktopAlloc_0 @ 0x1C00028D8 (DesktopAlloc_0.c)
 *     LockObjectAssignment @ 0x1C0015600 (LockObjectAssignment.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0053DE0 (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x1C00548D0 (SharedAlloc.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, void *a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned __int8 v4; // al
  size_t v6; // r13
  __int64 v7; // rdi
  int v8; // r15d
  char v10; // si
  __int64 *v11; // r12
  void *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r10
  bool v15; // cc
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned int v18; // eax
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
    goto LABEL_45;
  }
  while ( 1 )
  {
    v4 = a3;
LABEL_4:
    if ( v4 != 1 && qword_1C011A940 )
    {
      v11 = &qword_1C011A940;
      goto LABEL_7;
    }
    if ( qword_1C011A938 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v11 = &qword_1C011A938;
LABEL_7:
  if ( (v10 & 0x10) == 0 || !a2 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v12 = (void *)SharedAlloc((unsigned int)v6);
    }
    else
    {
      if ( !a2 && (v10 & 0x20) != 0 )
        v8 = 1;
      if ( (v10 & 8) == 0 || v8 )
        v12 = Win32AllocPoolZInit(v6);
      else
        v12 = (void *)Win32AllocPoolWithQuotaZInit(v6);
    }
    v13 = (__int64)v12;
LABEL_15:
    if ( v13 )
    {
      v14 = *v11;
      v15 = (unsigned int)*v11 <= giheLast;
      v16 = qword_1C011A128;
      v17 = 3 * *v11;
      *v11 = *(_QWORD *)(qword_1C011A128 + 24 * *v11);
      if ( !v15 )
        giheLast = v14;
      *(_BYTE *)(v16 + 8 * v17 + 16) = a3;
      *(_QWORD *)(v16 + 8 * v17) = v13;
      if ( v8 )
        *(_BYTE *)(v16 + 8 * v17 + 17) |= 0x40u;
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v16 + 8 * v17 + 8) = *(_QWORD *)(a1 + 376);
        if ( (v10 & 4) != 0 )
          *(_QWORD *)(v13 + 24) = *(_QWORD *)(a1 + 376);
      }
      else if ( (v10 & 1) != 0 )
      {
        *(_QWORD *)(v16 + 8 * v17 + 8) = a1;
        *(_QWORD *)(v13 + 16) = a1;
      }
      *(_QWORD *)v13 = (int)v14 | (unsigned __int64)(*(unsigned __int16 *)(v14 * (unsigned int)dword_1C011A130
                                                                         + qword_1C011A128
                                                                         + 18) << 16);
      if ( v7 )
      {
        v18 = ++*(_DWORD *)(v7 + 68);
        if ( v18 > *(_DWORD *)(v7 + 72) )
          *(_DWORD *)(v7 + 72) = v18;
      }
      if ( ++giheCount > (unsigned int)giheCountPeak )
        giheCountPeak = giheCount;
      return *(_QWORD *)(v16 + 8 * v17);
    }
    goto LABEL_44;
  }
  if ( (int)IsDesktopAllocSupported_0() < 0 )
    v13 = 0LL;
  else
    v13 = DesktopAlloc_0();
  if ( v13 )
  {
    LockObjectAssignment((void **)(v13 + 24), a2);
    *(_QWORD *)(v13 + 32) = v13;
    goto LABEL_15;
  }
LABEL_44:
  v20 = 8LL;
LABEL_45:
  UserSetLastError(v20);
  return 0LL;
}
