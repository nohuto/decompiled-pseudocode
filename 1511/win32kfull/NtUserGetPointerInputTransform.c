/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C021B560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetPointerTransformInternal @ 0x1C01E1478 (GetPointerTransformInternal.c)
 *     GetMiPInputTransform @ 0x1C01E246C (GetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int MiPInputTransform; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = a2;
  v6 = EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( a1
    && !HIWORD(a1)
    && (v8 = (unsigned int)(v4 - 1), (unsigned int)v8 <= 0x63)
    && a3
    && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
      MiPInputTransform = GetMiPInputTransform(v6, (unsigned __int64 *)a3);
    else
      MiPInputTransform = GetPointerTransformInternal(v6, a1, v4, (unsigned __int64 *)a3);
    v7 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v7;
}
