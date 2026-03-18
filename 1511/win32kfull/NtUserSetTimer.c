/*
 * XREFs of NtUserSetTimer @ 0x1C004A550
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AB74 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01C2D74 (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  EnterLeaveCrit *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  char v14; // [rsp+50h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v14 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v14);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
LABEL_3:
      v11 = 0LL;
      goto LABEL_19;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v12 = a5;
  if ( a3 < 0xA )
    a3 = 10;
  if ( a3 > 0x7FFFFFFF )
    a3 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v12 = 0x7FFFFFFF - a3;
  }
  else if ( a5 != -1 && (a3 + a5 < a3 || a3 + a5 > 0x7FFFFFFF) )
  {
    v11 = 0LL;
    UserSetLastError(87LL);
    goto LABEL_19;
  }
  if ( v10 && PsGetCurrentProcessWin32Process(0x7FFFFFFFLL) != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
    goto LABEL_3;
  }
  v11 = InternalSetTimer(v10, a2, a3, a4, v12, 0);
LABEL_19:
  if ( !v14 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  EnterLeaveCrit::~EnterLeaveCrit(v9);
  return v11;
}
