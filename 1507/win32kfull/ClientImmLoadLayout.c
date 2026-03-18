/*
 * XREFs of ClientImmLoadLayout @ 0x1C013C710
 * Callers:
 *     xxxImmLoadLayout @ 0x1C013C690 (xxxImmLoadLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rdi
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD *v10; // rax
  _BYTE v12[368]; // [rsp+48h] [rbp-170h] BYREF
  int v13; // [rsp+1C0h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+1D0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+1D8h] [rbp+20h] BYREF

  v2 = a2;
  v15 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(91LL);
  v3 = KeUserModeCallback(91LL, &v15, 8LL, &v14, &v13);
  EtwTraceEndCallback(91LL);
  EnterCrit(1LL);
  if ( v3 < 0 || v13 != 24 )
    return 0LL;
  v4 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v4 = (__int64 *)W32UserProbeAddress;
  v5 = *v4;
  if ( *v4 )
  {
    v6 = *(_OWORD **)(v14 + 16);
    if ( v6 + 22 < v6 || (unsigned __int64)(v6 + 22) > W32UserProbeAddress )
      v6 = (_OWORD *)W32UserProbeAddress;
    v7 = v12;
    v8 = 2LL;
    v9 = 2LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v10 = v12;
    do
    {
      *v2 = *v10;
      v2[1] = v10[1];
      v2[2] = v10[2];
      v2[3] = v10[3];
      v2[4] = v10[4];
      v2[5] = v10[5];
      v2[6] = v10[6];
      v2 += 8;
      *(v2 - 1) = v10[7];
      v10 += 8;
      --v8;
    }
    while ( v8 );
    *v2 = *v10;
    v2[1] = v10[1];
    v2[2] = v10[2];
    v2[3] = v10[3];
    v2[4] = v10[4];
    v2[5] = v10[5];
  }
  return (unsigned int)v5;
}
