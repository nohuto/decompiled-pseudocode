/*
 * XREFs of Isoch_Stage_DetermineSize @ 0x1C0028C18
 * Callers:
 *     Isoch_PrepareStage @ 0x1C000C2C0 (Isoch_PrepareStage.c)
 * Callees:
 *     Isoch_GetPacketLength @ 0x1C0001B20 (Isoch_GetPacketLength.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // r10d
  __int64 v12; // r10
  unsigned int v13; // r11d
  unsigned int i; // esi
  int v15; // r14d
  __int64 v16; // r15
  int v17; // r11d
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *(_DWORD *)(a2 + 64) - *(_DWORD *)(a2 + 76) - *(_DWORD *)(a2 + 72);
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 80LL);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v9 = *(_QWORD *)(a2 + 32);
  LODWORD(v18[0]) = 1;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)(v8 + 8) + 136LL))(
    v8,
    *(_QWORD *)(a3 + 64),
    0LL,
    v5,
    (*(_BYTE *)(v9 + 32) & 1) == 0,
    v18);
  result = *(unsigned int *)(a1 + 8);
  if ( HIDWORD(v18[0]) > (unsigned int)result )
  {
    result = (unsigned int)(((_DWORD)result << 12) - 4096);
    if ( (unsigned int)result < v7 )
      v7 = result;
  }
  if ( v5 > v7 )
  {
    v12 = *(unsigned int *)(a1 + 308);
    v5 = 0;
    v13 = *(_DWORD *)(a3 + 40);
    for ( i = v13 / (unsigned int)v12; ; ++i )
    {
      v15 = 0;
      if ( (_DWORD)v12 )
      {
        v16 = v12;
        do
        {
          v15 += Isoch_GetPacketLength(a2, v13);
          v13 = v17 + 1;
          --v16;
        }
        while ( v16 );
      }
      result = v15 + v5;
      if ( (unsigned int)result > v7 )
        break;
      v5 += v15;
    }
    v11 = i * v12;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 80);
  }
  *(_DWORD *)(a3 + 52) = v5;
  *(_DWORD *)(a3 + 44) = v11 - 1;
  return result;
}
