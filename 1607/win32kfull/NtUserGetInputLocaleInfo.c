/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C01207F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _OWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = EnterSharedCrit(0LL, 1LL);
  v5 = 0;
  if ( a1 )
  {
    v6 = 0LL;
    v7 = *(_QWORD *)(v4 + 392);
    if ( !v7 )
    {
LABEL_19:
      UserSetLastError(6LL);
      goto LABEL_14;
    }
    v8 = *(_QWORD *)(v4 + 392);
    do
    {
      if ( *(_QWORD *)(v8 + 40) == a1 )
      {
        if ( *(int *)(v8 + 32) >= 0 )
          goto LABEL_6;
        v6 = v8;
      }
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v8 != v7 );
    v8 = v6;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 392);
  }
LABEL_6:
  if ( !v8 )
    goto LABEL_19;
  v9 = W32UserProbeAddress;
  v10 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v10 = (_DWORD *)W32UserProbeAddress;
  if ( *v10 == 32 )
  {
    *(_QWORD *)&v12[0] = 32LL;
    *((_QWORD *)&v12[0] + 1) = *(_QWORD *)(v8 + 40);
    LODWORD(v12[1]) = *(_DWORD *)(v8 + 112);
    DWORD1(v12[1]) = *(unsigned __int16 *)(v8 + 72);
    *((_QWORD *)&v12[1] + 1) = *(_QWORD *)(v8 + 64);
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v12[0];
    a2[1] = v12[1];
    v5 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
