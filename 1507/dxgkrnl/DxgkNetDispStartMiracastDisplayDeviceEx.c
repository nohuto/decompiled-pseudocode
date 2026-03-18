/*
 * XREFs of DxgkNetDispStartMiracastDisplayDeviceEx @ 0x1C012A7C0
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C012A660 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDeviceEx(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rax
  char v13; // [rsp+20h] [rbp-268h] BYREF
  __int128 v14; // [rsp+28h] [rbp-260h]
  _QWORD v15[70]; // [rsp+40h] [rbp-248h] BYREF

  v4 = (_OWORD *)a1;
  v14 = 0uLL;
  memset(v15, 0, 552);
  if ( (_BYTE)a2 == 1 )
  {
    if ( a1 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    v5 = v15;
    v6 = 4LL;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      v5[4] = v4[4];
      v5[5] = v4[5];
      v5[6] = v4[6];
      v5 += 8;
      *(v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    *v5 = *v4;
    v5[1] = v4[1];
    *((_QWORD *)v5 + 4) = *((_QWORD *)v4 + 4);
  }
  else
  {
    if ( a1 <= MmUserProbeAddress )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v7 + 24) = 29603LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v5 = v15;
    v6 = 4LL;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      v5[4] = v4[4];
      v5[5] = v4[5];
      v5[6] = v4[6];
      v5 += 8;
      *(v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    *v5 = *v4;
    v5[1] = v4[1];
    *((_QWORD *)v5 + 4) = *((_QWORD *)v4 + 4);
  }
  if ( LODWORD(v15[0]) != 552 )
    goto LABEL_13;
  Current = DXGPROCESS::GetCurrent((__int64)v5);
  if ( !Current
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId(v5, v6, a3, a4))
    && (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v8 = -2147483643;
    v9 = WdLogNewEntry5_WdWarning(v5, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = -2147483643LL;
    goto LABEL_23;
  }
  v11 = v15[67] - v14;
  if ( v15[67] == (_QWORD)v14 )
    v11 = v15[68] - *((_QWORD *)&v14 + 1);
  if ( !v11 )
  {
LABEL_13:
    v8 = -2147483640;
    v9 = WdLogNewEntry5_WdWarning(v5, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = -2147483640LL;
LABEL_23:
    WdLogEvent5_WdWarning(v9);
    return v8;
  }
  return (unsigned int)DxgkMiracastStartMiracastSession((unsigned __int64)v15, 1, (struct _LIST_ENTRY *)&v13);
}
