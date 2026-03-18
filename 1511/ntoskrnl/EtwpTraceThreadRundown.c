/*
 * XREFs of EtwpTraceThreadRundown @ 0x14011FAD4
 * Callers:
 *     EtwpThreadRundownApc @ 0x140210AF4 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140210B28 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x140500D30 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v3; // r14
  int v4; // ebx
  __int16 v5; // di
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  char v13; // cl
  _DWORD v14[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  __int64 v17; // [rsp+58h] [rbp-70h]
  __int64 v18; // [rsp+60h] [rbp-68h]
  __int64 v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+80h] [rbp-48h]
  char v23; // [rsp+84h] [rbp-44h]
  char PagePriorityThread; // [rsp+85h] [rbp-43h]
  char IoPriorityThread; // [rsp+86h] [rbp-42h]
  char v26; // [rsp+87h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-38h]
  _QWORD v28[2]; // [rsp+98h] [rbp-30h] BYREF

  v27 = a1;
  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_BYTE *)(a2 + 57);
  v4 = *(_DWORD *)(a2 + 32);
  v5 = 1283;
  if ( !*(_BYTE *)(a2 + 56) )
    v5 = 1284;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v4 &= 0xFFFFE7FF;
  v14[0] = *(_DWORD *)(a1 + 1576);
  v14[1] = *(_DWORD *)(a1 + 1584);
  v15 = *(_QWORD *)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 576);
  v20 = *(_QWORD *)(a1 + 1664);
  v6 = *(_QWORD *)(a1 + 240);
  v17 = 0LL;
  v18 = 0LL;
  v21 = v6;
  v22 = 0;
  v23 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v26 = v8;
  if ( (*(_BYTE *)(v9 + 1732) & 8) != 0 )
  {
    v13 = v26;
    if ( *(_QWORD *)(v9 + 1528) != v9 + 1528 )
      v13 = 1;
    v26 = v13;
  }
  if ( v10 && v3 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 544) + 1064LL) == v8 )
    {
      v22 = *(_DWORD *)(v10 + 5920);
      v17 = *(_QWORD *)(v10 + 8);
      v11 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v22 = *(_DWORD *)(v10 + 12128);
      v17 = *(unsigned int *)(v10 + 8196);
      v11 = *(unsigned int *)(v10 + 8200);
    }
    v18 = v11;
  }
  v28[0] = v14;
  v28[1] = 72LL;
  return EtwpLogSystemEventUnsafe((unsigned int)v28, v9, v2, 1, v5, v4);
}
