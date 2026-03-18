/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C0128488
 * Callers:
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _QWORD *v12; // rcx
  _OWORD v14[5]; // [rsp+38h] [rbp-50h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF

  memset(v14, 0, 0x30uLL);
  LODWORD(v14[0]) = a1;
  *((_QWORD *)&v14[0] + 1) = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v14[1] = *(_OWORD *)a3;
  *(_QWORD *)&v14[2] = a4;
  *((_QWORD *)&v14[2] + 1) = a5;
  UserSessionSwitchLeaveCrit(v10, v9);
  EtwTraceBeginCallback(41LL);
  v11 = KeUserModeCallback(41LL, v14, 48LL, &a5, &v15);
  EtwTraceEndCallback(41LL);
  EnterCrit(1LL);
  if ( v11 < 0 || v15 != 24 )
    return 0LL;
  v12 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v12;
}
