/*
 * XREFs of ScsiReportLunsCommand @ 0x1C000BDB4
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  _BYTE *v5; // r9
  _DWORD *v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  unsigned int *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v10);
  *(_BYTE *)(v4 + 3) = 1;
  v5 = (_BYTE *)SrbDataBuffer;
  v6 = v10;
  v7 = 8 * *(_DWORD *)(v3 + 148);
  if ( *v10 >= (unsigned __int64)v7 + 8 )
  {
    v5[3] = v7;
    v8 = 0LL;
    *v5 = HIBYTE(v7);
    v5[1] = BYTE2(v7);
    for ( v5[2] = BYTE1(v7); (unsigned int)v8 < *(_DWORD *)(v3 + 148); v8 = (unsigned int)(v8 + 1) )
    {
      *(_DWORD *)&v5[8 * v8 + 10] = 0;
      *(_WORD *)&v5[8 * v8 + 14] = 0;
      v5[8 * v8 + 8] = 0;
      v5[8 * v8 + 9] = v8;
    }
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 18;
    if ( *v6 >= 4u )
    {
      v5[3] = v7;
      *v5 = HIBYTE(v7);
      v5[1] = BYTE2(v7);
      v5[2] = BYTE1(v7);
    }
  }
  return 0LL;
}
