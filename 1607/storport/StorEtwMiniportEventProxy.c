/*
 * XREFs of StorEtwMiniportEventProxy @ 0x1C002D2A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C00199C4 (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     StorEtwMiniportEvent @ 0x1C003B004 (StorEtwMiniportEvent.c)
 */

__int64 __fastcall StorEtwMiniportEventProxy(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rax
  __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // r14d
  __int64 *v12; // r8
  int v13; // r15d
  __int64 v14; // r12
  unsigned int v15; // edx
  __int64 v16; // r10
  __int64 v17; // rax
  int v18; // eax
  _BYTE v21[64]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v22[8]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = *(__int64 **)(a1 - 16);
  v5 = 0LL;
  v6 = *v3;
  if ( !*v3 )
    return 3238002694LL;
  v7 = *a3;
  v8 = *((_DWORD *)a3 + 2);
  v9 = a3[2];
  v10 = a3[3];
  v11 = *((_DWORD *)a3 + 8);
  v12 = a3 + 6;
  v13 = *((_DWORD *)v12 - 2);
  v14 = *v12;
  if ( a2 == 58 )
  {
    v15 = 2;
  }
  else
  {
    v15 = 8;
    if ( a2 == 59 )
      v15 = 4;
  }
  v16 = v15;
  do
  {
    v17 = v12[1];
    v12 += 2;
    v22[v5++] = v17;
    *(_QWORD *)&v21[v5 * 8 - 8] = *v12;
    --v16;
  }
  while ( v16 );
  v18 = StorEtwMiniportEvent(v6, v7, v8, v9, v10, v11, v13, v14, v15, (__int64)v22, (__int64)v21);
  return RaidNtStatusToStorStatus(v18);
}
