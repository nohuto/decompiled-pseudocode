/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02103F8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00EE380 (NtUserCallNextHookEx.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     xxxCallNextHookEx @ 0x1C00EE654 (xxxCallNextHookEx.c)
 *     RtlInitLargeAnsiString @ 0x1C01239C4 (RtlInitLargeAnsiString.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(unsigned int a1, __int64 a2, struct tagCBT_CREATEWNDW *a3, int a4)
{
  struct tagCBT_CREATEWNDW *v8; // rdx
  _OWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v16; // [rsp+20h] [rbp-A8h]
  __int128 v17; // [rsp+28h] [rbp-A0h] BYREF
  _OWORD v18[8]; // [rsp+40h] [rbp-88h] BYREF

  memset(v18, 0, 0x70uLL);
  v8 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v8 = (struct tagCBT_CREATEWNDW *)W32UserProbeAddress;
  v17 = *(_OWORD *)v8;
  v9 = (_OWORD *)v17;
  if ( (unsigned __int64)v17 >= W32UserProbeAddress )
  {
    *W32UserProbeAddress = 0;
    v9 = (_OWORD *)v17;
  }
  *v9 = *v9;
  v9[1] = v9[1];
  v9[2] = v9[2];
  v9[3] = v9[3];
  v9[4] = v9[4];
  v10 = (_DWORD *)v17;
  v16 = (_DWORD *)v17;
  v18[0] = *(_OWORD *)v17;
  v18[1] = *(_OWORD *)(v17 + 16);
  v18[2] = *(_OWORD *)(v17 + 32);
  v18[3] = *(_OWORD *)(v17 + 48);
  v18[4] = *(_OWORD *)(v17 + 64);
  *(_QWORD *)&v17 = v18;
  v11 = *((_QWORD *)&v18[3] + 1);
  if ( a4 )
  {
    if ( *((_QWORD *)&v18[3] + 1) )
    {
      v11 = *((_QWORD *)&v18[3] + 1);
      v10 = v16;
    }
    RtlInitLargeAnsiString((__int64)&v18[5], v11);
    v12 = *(_QWORD *)&v18[4];
    if ( (*(_QWORD *)&v18[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v18[4] )
      {
        v12 = *(_QWORD *)&v18[4];
        v10 = v16;
      }
      RtlInitLargeAnsiString((__int64)&v18[6], v12);
    }
  }
  else
  {
    if ( *((_QWORD *)&v18[3] + 1) )
    {
      if ( (BYTE8(v18[3]) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = *((_QWORD *)&v18[3] + 1);
      v10 = v16;
    }
    RtlInitLargeUnicodeString((__int64)&v18[5], v11);
    v13 = *(_QWORD *)&v18[4];
    if ( (*(_QWORD *)&v18[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v18[4] )
      {
        if ( (v18[4] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)&v18[4];
        v10 = v16;
      }
      RtlInitLargeUnicodeString((__int64)&v18[6], v13);
    }
  }
  v14 = xxxCallNextHookEx(a1, a2, (__int64)&v17);
  *((_QWORD *)a3 + 1) = *((_QWORD *)&v17 + 1);
  v10[11] = *(_DWORD *)(v17 + 44);
  v10[10] = *(_DWORD *)(v17 + 40);
  v10[9] = *(_DWORD *)(v17 + 36);
  v10[8] = *(_DWORD *)(v17 + 32);
  return v14;
}
