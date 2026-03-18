/*
 * XREFs of _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x1400F86EC
 * Callers:
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310 (_anonymous_namespace_--xxxSwitchCursors.c)
 * Callees:
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 */

__int64 __fastcall anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 Image; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct _UNICODE_STRING v9; // [rsp+40h] [rbp-18h] BYREF

  v2 = (unsigned int *)&unk_140360C00;
  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  v3 = 4LL;
  v5 = -(__int64)(*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2056LL) != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  do
  {
    v9.Buffer = (PWSTR)*(unsigned __int16 *)((char *)v2 + v5 + 8);
    *(_DWORD *)&v9.Length = 0;
    Image = xxxClientLoadImage((char **)&v9, v4, 2u, 0, 0, 64);
    if ( Image )
      zzzInternalSetSystemCursor(Image, *v2, &v9, 5u);
    v2 += 3;
    --v3;
  }
  while ( v3 );
  result = W32GetUserSessionState(v7, v4);
  *(_DWORD *)(*(_QWORD *)(result + 36344) + 88LL) = 1;
  return result;
}
