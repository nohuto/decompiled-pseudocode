/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x140224440
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(unsigned int a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v8[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  __int64 v11; // [rsp+88h] [rbp+18h] BYREF

  v3 = a1;
  v10 = 0LL;
  v11 = 0LL;
  v7[1] = a2;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    LODWORD(v7[0]) = 2 * v5;
    HIDWORD(v7[0]) = (2 * v5 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v7[0] = 0LL;
  }
  UpdateInputSettingWnfState(a1);
  v9 = &v11;
  v8[0] = 0;
  v8[1] = 100;
  return xxxBroadcastMessage((__int64)v8, 0x1Au, v3, (__int64)v7, a3 != 0 ? 6 : 1, (union tagBROADCASTMSG *)v8, 1);
}
