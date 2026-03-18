/*
 * XREFs of EditionxxxComputeInputSinkInfo @ 0x1401F83B0
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

int __fastcall EditionxxxComputeInputSinkInfo(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[112]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[112]; // [rsp+110h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (unsigned __int8)IsInputThread(v4, v3, v5) )
  {
    memset_0(&v19, 0, 0x50uLL);
    memset_0(v27, 0, sizeof(v27));
    LODWORD(v19) = *(_DWORD *)(UserSessionState + 19012);
    *(_QWORD *)((char *)&v20 + 4) = *(_QWORD *)(UserSessionState + 19004);
    *(_QWORD *)((char *)&v23 + 4) = 0xFFFFFFFE00000000uLL;
    *(_QWORD *)&v22 = 0LL;
    DWORD2(v22) = 0;
    LODWORD(v23) = 0;
    HIDWORD(v23) = 0;
    DCompHitTest(v26, &v19, v27);
  }
  if ( !*(_DWORD *)(UserSessionState + 19016) )
  {
    memset_0(&v19, 0, 0x70uLL);
    v8 = v20;
    *(_OWORD *)(UserSessionState + 19000) = v19;
    v9 = v21;
    *(_OWORD *)(UserSessionState + 19016) = v8;
    v10 = v22;
    *(_OWORD *)(UserSessionState + 19032) = v9;
    v11 = v23;
    *(_OWORD *)(UserSessionState + 19048) = v10;
    v12 = v24;
    *(_OWORD *)(UserSessionState + 19064) = v11;
    v13 = v25;
    *(_OWORD *)(UserSessionState + 19080) = v12;
    *(_OWORD *)(UserSessionState + 19096) = v13;
  }
  v14 = W32GetUserSessionState(v7, v6);
  if ( *(_BYTE *)(v14 + 18836) )
  {
    v17 = W32GetUserSessionState(v16, v15);
    LODWORD(v14) = KeSetEvent(*(PRKEVENT *)(v17 + 18848), 1, 0);
  }
  return v14;
}
