/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02179EC
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0068CE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 *     RtlInitLargeAnsiString @ 0x1C004FCE4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, struct tagCBT_CREATEWNDW *a3, int a4)
{
  struct tagCBT_CREATEWNDW *v7; // rdx
  _OWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 v15; // [rsp+28h] [rbp-A0h]
  _OWORD v16[8]; // [rsp+40h] [rbp-88h] BYREF

  memset(v16, 0, 0x70uLL);
  v7 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v7 = (struct tagCBT_CREATEWNDW *)W32UserProbeAddress;
  v15 = *(_OWORD *)v7;
  v8 = *(_OWORD **)v7;
  if ( *(_QWORD *)v7 >= W32UserProbeAddress )
  {
    *W32UserProbeAddress = 0;
    v8 = (_OWORD *)v15;
  }
  *v8 = *v8;
  v8[1] = v8[1];
  v8[2] = v8[2];
  v8[3] = v8[3];
  v8[4] = v8[4];
  v9 = v15;
  v16[0] = *(_OWORD *)v15;
  v16[1] = *(_OWORD *)(v15 + 16);
  v16[2] = *(_OWORD *)(v15 + 32);
  v16[3] = *(_OWORD *)(v15 + 48);
  v16[4] = *(_OWORD *)(v15 + 64);
  v10 = *((_QWORD *)&v16[3] + 1);
  if ( a4 )
  {
    if ( *((_QWORD *)&v16[3] + 1) )
    {
      v10 = *((_QWORD *)&v16[3] + 1);
      v9 = v15;
    }
    RtlInitLargeAnsiString((__int64)&v16[5], v10);
    v11 = *(_QWORD *)&v16[4];
    if ( (*(_QWORD *)&v16[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v16[4] )
      {
        v11 = *(_QWORD *)&v16[4];
        v9 = v15;
      }
      RtlInitLargeAnsiString((__int64)&v16[6], v11);
    }
  }
  else
  {
    if ( *((_QWORD *)&v16[3] + 1) )
    {
      if ( (BYTE8(v16[3]) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = *((_QWORD *)&v16[3] + 1);
      v9 = v15;
    }
    RtlInitLargeUnicodeString((__int64)&v16[5], v10);
    v12 = *(_QWORD *)&v16[4];
    if ( (*(_QWORD *)&v16[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v16[4] )
      {
        if ( (v16[4] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = *(_QWORD *)&v16[4];
        v9 = v15;
      }
      RtlInitLargeUnicodeString((__int64)&v16[6], v12);
    }
  }
  v13 = xxxCallNextHookEx(a1);
  *((_QWORD *)a3 + 1) = *((_QWORD *)&v15 + 1);
  *(_OWORD *)(v9 + 32) = v16[2];
  return v13;
}
