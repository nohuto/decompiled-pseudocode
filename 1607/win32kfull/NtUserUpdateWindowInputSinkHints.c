/*
 * XREFs of NtUserUpdateWindowInputSinkHints @ 0x1C00099E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0009A94 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserUpdateWindowInputSinkHints(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // edi
  unsigned int i; // esi
  unsigned __int64 v7; // rcx

  v4 = 0LL;
  v5 = 0;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
  {
    for ( i = 0; i < a2; ++i )
    {
      v7 = a1 + 16LL * i;
      if ( v7 + 16 < v7 || v7 + 16 > W32UserProbeAddress )
        v7 = W32UserProbeAddress;
      UpdateWindowInputSinkHint(*(HWND *)v7, *(_QWORD *)(v7 + 8) != 0);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  LOBYTE(v4) = v5 >= 0;
  return v4;
}
