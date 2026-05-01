/*
 * XREFs of RmpSystemReferenceHostWithPsm @ 0x1800183AC
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+48h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]
  __int64 *v17; // [rsp+80h] [rbp-28h]
  int v18; // [rsp+88h] [rbp-20h]
  int v19; // [rsp+8Ch] [rbp-1Ch]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
  {
    v9 = *(_QWORD *)(v6 + 24);
    v16 = 0;
    v19 = 0;
    v11 = v9;
    v14 = &v11;
    v17 = &v12;
    v15 = v5 + 7;
    v12 = a1;
    v18 = v5 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v5 + 7), &unk_18004310B, v7, v8, 4u, &pData);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, __int64))(v4 + 224))(
           a1 + 520,
           *(unsigned int *)(a1 + 588),
           a1 + 56,
           *(unsigned int *)(a1 + 592),
           *(_QWORD *)(a1 + 24),
           a2);
}
