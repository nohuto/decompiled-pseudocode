/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C021AB40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _OWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = EnterSharedCrit(0LL, 1LL);
  v5 = 0;
  if ( a1 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 392);
    if ( !v8 )
    {
LABEL_18:
      UserSetLastError(6);
      goto LABEL_19;
    }
    v6 = *(_QWORD *)(v4 + 392);
    do
    {
      if ( *(_QWORD *)(v6 + 40) == a1 )
      {
        if ( *(int *)(v6 + 32) >= 0 )
          goto LABEL_10;
        v7 = v6;
      }
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 != v8 );
    v6 = v7;
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 392);
  }
LABEL_10:
  if ( !v6 )
    goto LABEL_18;
  v9 = W32UserProbeAddress;
  v10 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v10 = (_DWORD *)W32UserProbeAddress;
  if ( *v10 == 32 )
  {
    *(_QWORD *)&v12[0] = 32LL;
    *((_QWORD *)&v12[0] + 1) = *(_QWORD *)(v6 + 40);
    LODWORD(v12[1]) = *(_DWORD *)(v6 + 112);
    DWORD1(v12[1]) = *(unsigned __int16 *)(v6 + 72);
    *((_QWORD *)&v12[1] + 1) = *(_QWORD *)(v6 + 64);
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v12[0];
    a2[1] = v12[1];
    v5 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v9, v6);
  return v5;
}
