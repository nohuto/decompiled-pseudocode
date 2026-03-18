/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C009D040
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C01239C4 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdx
  __int128 v12; // [rsp+70h] [rbp-48h]
  __int128 v13; // [rsp+80h] [rbp-38h]
  _BYTE v14[16]; // [rsp+90h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+A0h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( a4 )
  {
    v8 = a4;
    if ( a4 >= W32UserProbeAddress )
      v8 = W32UserProbeAddress;
    v12 = *(_OWORD *)(v8 + 48);
    v13 = *(_OWORD *)(v8 + 64);
    v9 = *(_QWORD *)(v8 + 56);
    if ( a7 )
    {
      RtlInitLargeAnsiString(v14);
      if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(v15);
    }
    else
    {
      if ( *((_QWORD *)&v12 + 1) )
      {
        if ( (BYTE8(v12) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = *(_QWORD *)(v8 + 56);
      }
      RtlInitLargeUnicodeString(v14, v9);
      v10 = v13;
      if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v13 )
        {
          if ( (v13 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v13;
        }
        RtlInitLargeUnicodeString(v15, v10);
      }
    }
  }
  else if ( a2 == 129 )
  {
    return v7;
  }
  return _guard_dispatch_icall_fptr();
}
