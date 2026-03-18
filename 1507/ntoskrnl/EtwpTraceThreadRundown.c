/*
 * XREFs of EtwpTraceThreadRundown @ 0x14000BE64
 * Callers:
 *     EtwpThreadRundownApc @ 0x14025FEB4 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x14041CAF0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x14000BBEC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // r15
  unsigned int v5; // r9d
  __int16 v6; // r11
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // r14
  int v11; // ecx
  __int64 v12; // rax
  char v14; // cl
  int v15; // eax
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
  char v26; // [rsp+85h] [rbp-43h]
  char v27; // [rsp+86h] [rbp-42h]
  char v28; // [rsp+87h] [rbp-41h]
  __int64 v29; // [rsp+90h] [rbp-38h]
  _QWORD v30[2]; // [rsp+98h] [rbp-30h] BYREF

  v29 = a1;
  v3 = *(_DWORD *)(a2 + 28);
  v4 = *(_BYTE *)(a2 + 57);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 1283;
  if ( !*(_BYTE *)(a2 + 56) )
    v6 = 1284;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v16[0] = *(_DWORD *)(a1 + 1576);
  v16[1] = *(_DWORD *)(a1 + 1584);
  v17 = *(_QWORD *)(a1 + 56);
  v18 = *(_QWORD *)(a1 + 48);
  v21 = *(_QWORD *)(a1 + 576);
  v22 = *(_QWORD *)(a1 + 1664);
  v7 = *(_QWORD *)(a1 + 240);
  v19 = 0LL;
  v20 = 0LL;
  v23 = v7;
  v24 = 0;
  v25 = *(_BYTE *)(a1 + 563);
  v8 = *(_DWORD *)(a1 + 1724);
  v9 = (v8 >> 12) & 7;
  v10 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(v10 + 772) & 0x100000) != 0 )
  {
    LOBYTE(v15) = 2;
    if ( v9 < 2 )
      v15 = (v8 >> 12) & 7;
    LOBYTE(v9) = v15;
  }
  v26 = v9;
  v11 = (v8 >> 9) & 7;
  if ( (*(_DWORD *)(v10 + 772) & 0x100000) != 0 )
    v11 = 0;
  if ( v11 < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1788) )
    LOBYTE(v11) = 2;
  v27 = v11;
  v28 = 0;
  if ( (*(_BYTE *)(a1 + 1732) & 8) != 0 )
  {
    v14 = v28;
    if ( *(_QWORD *)(a1 + 1528) != a1 + 1528 )
      v14 = 1;
    v28 = v14;
  }
  if ( v7 && v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1064LL) )
    {
      v24 = *(_DWORD *)(v7 + 12128);
      v19 = *(unsigned int *)(v7 + 8196);
      v12 = *(unsigned int *)(v7 + 8200);
    }
    else
    {
      v24 = *(_DWORD *)(v7 + 5920);
      v19 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 16);
    }
    v20 = v12;
  }
  v30[0] = v16;
  v30[1] = 72LL;
  return EtwpLogSystemEventUnsafe((__int64)v30, (_DWORD *)a1, v3, 1u, v6, v5);
}
