/*
 * XREFs of NtUserSetGestureConfig @ 0x1C012A220
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     SetGestureConfigSettings @ 0x1C012A53C (SetGestureConfigSettings.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // r15
  __int64 v8; // rsi
  int v9; // ebx
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rcx
  _BYTE v20[16]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-30h] BYREF

  v6 = a3;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      if ( *(char *)(v8 + 44) >= 0
        && *(char *)(v8 + 43) >= 0
        && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL) )
      {
        v10 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v10 )
        {
          v11 = 12 * v6;
          if ( 12 * v6 )
          {
            if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x1555555555555555LL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v11 + a4 > W32UserProbeAddress || v11 + a4 < a4 )
              *W32UserProbeAddress = 0;
          }
          memmove(v10, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8);
          Win32FreePool(v10, v12, v13);
          goto LABEL_17;
        }
        v19 = 8LL;
      }
      else
      {
        v19 = 1400LL;
      }
    }
    else
    {
      v19 = 87LL;
    }
    UserSetLastError(v19);
LABEL_17:
    ThreadUnlock1(v15, v14);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v9;
}
