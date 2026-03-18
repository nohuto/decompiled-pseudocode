/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1401379D8
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 DPITransformationMonitor; // [rsp+28h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+70h] [rbp+8h]

  v23 = 0LL;
  v6 = 3LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 112LL) )
  {
    v7 = *((_QWORD *)PtiCurrent((__int64)a1) + 100);
    v9 = PtiCurrent(v8);
    v10 = *((_QWORD *)a4 + 5);
    v11 = *(_QWORD *)((char *)v9 + 788);
    LODWORD(v9) = *((_DWORD *)v9 + 199);
    v25 = v11;
    v26 = (int)v9;
    *((_QWORD *)PtiCurrent(v12) + 100) = v10;
    v13 = *((_QWORD *)a1 + 5);
    v14 = *((_QWORD *)a4 + 5);
    v23 = v14;
    if ( (*(_DWORD *)(v13 + 288) & 0xF) != 2 )
    {
      DPITransformationMonitor = GetDPITransformationMonitor(v14, (__int64)a1);
      PhysicalToLogicalDPIPoint(&v23, &v23, 0LL, &DPITransformationMonitor);
    }
    v15 = PtiCurrent(v14);
    v16 = (unsigned int)v23;
    *((_DWORD *)v15 + 197) = v23;
    v17 = PtiCurrent(v16);
    *((_DWORD *)v17 + 198) = HIDWORD(v23);
    v18 = xxxSendMessage(a1, 0x21u);
    *((_QWORD *)PtiCurrent(v19) + 100) = v7;
    v21 = PtiCurrent(v20);
    *(_QWORD *)((char *)v21 + 788) = v25;
    *((_DWORD *)v21 + 199) = v26;
    if ( v18 != 3 && v18 != 4 )
      return 1LL;
  }
  return v6;
}
