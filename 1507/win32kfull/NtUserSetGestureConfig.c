/*
 * XREFs of NtUserSetGestureConfig @ 0x1C01280C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetGestureConfigSettings @ 0x1C0128280 (SetGestureConfigSettings.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // r15
  __int64 v8; // rsi
  unsigned int v9; // ebx
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // ecx
  _BYTE v18[16]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-30h] BYREF

  v6 = a3;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    v19[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      if ( *(char *)(v8 + 44) >= 0
        && *(char *)(v8 + 43) >= 0
        && *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) )
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
          Win32FreePool(v10);
          goto LABEL_17;
        }
        v17 = 8;
      }
      else
      {
        v17 = 1400;
      }
    }
    else
    {
      v17 = 87;
    }
    UserSetLastError(v17);
LABEL_17:
    ThreadUnlock1(v13, v12);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v15, v14);
  return v9;
}
