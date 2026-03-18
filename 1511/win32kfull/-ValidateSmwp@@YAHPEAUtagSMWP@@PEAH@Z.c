/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0051A2C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C005594C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  int *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rbp

  *a2 = 1;
  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), a2);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_QWORD *)(v4 + 88);
  while ( 1 )
  {
    if ( --v6 < 0 )
      return 1LL;
    if ( !(unsigned int)ValidateWindowPos((struct tagCVR *)v5, 0LL) )
    {
      *(_QWORD *)v5 = 0LL;
      goto LABEL_8;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v5
                               + *((_QWORD *)&gSharedInfo + 1))
                   + 88LL) != v7 )
      break;
    if ( (*(_DWORD *)(v5 + 32) & 0x2000) != 0 )
      *v3 = 0;
LABEL_8:
    v5 += 168LL;
  }
  UserSetLastError(1441);
  return 0LL;
}
