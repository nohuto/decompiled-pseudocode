/*
 * XREFs of EtwpTraceThreadRundown @ 0x1400732C4
 * Callers:
 *     EtwpThreadRundownApc @ 0x140228E90 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x140459730 (EtwpThreadEnumCallback.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v3; // r14
  int v4; // ebx
  __int16 v5; // di
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  char v15; // cl
  _DWORD v16[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  __int64 v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+78h] [rbp-50h]
  int v24; // [rsp+80h] [rbp-48h]
  char v25; // [rsp+84h] [rbp-44h]
  char PagePriorityThread; // [rsp+85h] [rbp-43h]
  char IoPriorityThread; // [rsp+86h] [rbp-42h]
  char v28; // [rsp+87h] [rbp-41h]
  __int64 v29; // [rsp+90h] [rbp-38h]
  _QWORD v30[2]; // [rsp+98h] [rbp-30h] BYREF

  v29 = a1;
  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_BYTE *)(a2 + 97);
  v4 = *(_DWORD *)(a2 + 32);
  v5 = 1283;
  if ( !*(_BYTE *)(a2 + 96) )
    v5 = 1284;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v4 &= 0xFFFFE7FF;
  v16[0] = *(_DWORD *)(a1 + 1584);
  v16[1] = *(_DWORD *)(a1 + 1592);
  v17 = *(_QWORD *)(a1 + 56);
  v18 = *(_QWORD *)(a1 + 48);
  v21 = *(_QWORD *)(a1 + 576);
  v22 = *(_QWORD *)(a1 + 1672);
  v6 = *(_QWORD *)(a1 + 240);
  v19 = 0LL;
  v20 = 0LL;
  v23 = v6;
  v24 = 0;
  v25 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v9, v7, v8);
  v28 = v10;
  if ( (*(_BYTE *)(v11 + 1736) & 8) != 0 )
  {
    v15 = v28;
    if ( *(_QWORD *)(v11 + 1536) != v11 + 1536 )
      v15 = 1;
    v28 = v15;
  }
  if ( v12 && v3 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 544) + 1064LL) == v10 )
    {
      v24 = *(_DWORD *)(v12 + 5920);
      v19 = *(_QWORD *)(v12 + 8);
      v13 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v24 = *(_DWORD *)(v12 + 12128);
      v19 = *(unsigned int *)(v12 + 8196);
      v13 = *(unsigned int *)(v12 + 8200);
    }
    v20 = v13;
  }
  v30[0] = v16;
  v30[1] = 72LL;
  return EtwpLogSystemEventUnsafe((unsigned int)v30, v11, v2, 1, v5, v4);
}
