/*
 * XREFs of KdpSearchMemory @ 0x14072B9A4
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x140223948 (MmDbgCopyMemory.c)
 *     KdpQuickMoveMemory @ 0x14072D7A0 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  unsigned int v9; // ebx
  char *i; // rdi
  unsigned int v11; // ecx
  __int64 v12; // r15
  _BYTE *v13; // r14
  unsigned int v14; // r12d
  char *v15; // rsi
  char v17[4]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+34h] [rbp-35h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h]
  __int64 v20; // [rsp+40h] [rbp-29h]
  int v21; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+50h] [rbp-19h]
  unsigned __int64 v23; // [rsp+58h] [rbp-11h]
  _DWORD v24[4]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v25[4]; // [rsp+70h] [rbp+7h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = v4 + *(_QWORD *)(a1 + 24);
  v20 = a1;
  v19 = v2;
  v23 = v7;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v6 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v6));
  v24[0] = 0;
  v25[0] = v5;
  v8 = 4LL;
  v25[1] = v5 << 8;
  v25[2] = v5 << 16;
  v25[3] = v5 << 24;
  if ( v6 < 5 )
    v8 = v6;
  KdpQuickMoveMemory(v24, v2, v8);
  v9 = v4 & 3;
  v24[1] = v24[0] << 8;
  v24[2] = v24[0] << 16;
  v24[3] = v24[0] << 24;
  for ( i = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL); ; i += 4 )
  {
    if ( (unsigned __int64)i >= v7 )
      goto LABEL_24;
    if ( (int)MmDbgCopyMemory(i, &v18, 4u, 4u, 4u) >= 0 && v9 < 4 )
      break;
LABEL_20:
    v9 = 0;
  }
  v11 = v6 - 4;
  v12 = v9;
  while ( (v18 & v25[v12]) != v24[v12] )
  {
LABEL_18:
    ++v9;
    ++v12;
    if ( v9 >= 4 )
    {
      v7 = v23;
      goto LABEL_20;
    }
  }
  if ( 4 - v9 < v6 )
  {
    v13 = (_BYTE *)(v2 - v9 + 4);
    v14 = v11 + v9;
    if ( v11 + v9 )
    {
      v15 = &i[v9 - v19];
      do
      {
        if ( (int)MmDbgCopyMemory(&v13[(_QWORD)v15], v17, 1u, 1u, 4u) < 0 )
          break;
        if ( v17[0] != *v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      v3 = v20;
      if ( v14 )
      {
        v2 = v19;
        v11 = v6 - 4;
        goto LABEL_18;
      }
    }
  }
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = &i[v9];
LABEL_24:
  v21 = 3670072;
  v22 = v3;
  return KdSendPacket(2LL, &v21, 0LL, &KdpContext);
}
