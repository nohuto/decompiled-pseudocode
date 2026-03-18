/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C0052A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeAnsiString @ 0x1C004FCE4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int128 v14; // [rsp+70h] [rbp-48h]
  __int128 v15; // [rsp+80h] [rbp-38h]
  _BYTE v16[16]; // [rsp+90h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+A0h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( a4 )
  {
    v8 = a4;
    if ( a4 >= W32UserProbeAddress )
      v8 = W32UserProbeAddress;
    v14 = *(_OWORD *)(v8 + 48);
    v15 = *(_OWORD *)(v8 + 64);
    v9 = *(_QWORD *)(v8 + 56);
    if ( a7 )
    {
      if ( *((_QWORD *)&v14 + 1) )
        v9 = *(_QWORD *)(v8 + 56);
      RtlInitLargeAnsiString((__int64)v16, v9);
      v12 = v15;
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v15 )
          v12 = v15;
        RtlInitLargeAnsiString((__int64)v17, v12);
      }
    }
    else
    {
      if ( *((_QWORD *)&v14 + 1) )
      {
        if ( (BYTE8(v14) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = *(_QWORD *)(v8 + 56);
      }
      RtlInitLargeUnicodeString(v16, v9, v8);
      v11 = v15;
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v15 )
        {
          if ( (v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = v15;
        }
        RtlInitLargeUnicodeString(v17, v11, v10);
      }
    }
  }
  else if ( a2 == 129 )
  {
    return v7;
  }
  return _guard_dispatch_icall_fptr();
}
