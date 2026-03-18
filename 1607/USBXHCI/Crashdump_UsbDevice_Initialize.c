/*
 * XREFs of Crashdump_UsbDevice_Initialize @ 0x1C0038EB0
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x1C0035388 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_UsbDevice_Initialize(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        char a4,
        _OWORD *a5,
        __int64 a6,
        int a7)
{
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx

  *(_BYTE *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)(a1 + 24) = a6;
  *(_DWORD *)(a1 + 404) = a7;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a5;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 104LL);
  *(_OWORD *)(a1 + 80) = *a5;
  *(_OWORD *)(a1 + 96) = a5[1];
  if ( (v10 & 4) != 0 )
  {
    *(_OWORD *)(a1 + 112) = a5[2];
    *(_OWORD *)(a1 + 128) = a5[3];
  }
  if ( a3 )
  {
    *(_BYTE *)(a1 + 401) = a3[16];
    *(_BYTE *)(a1 + 402) = a3[17];
    *(_BYTE *)(a1 + 403) = a3[18];
  }
  else
  {
    *(_DWORD *)(a1 + 400) = 257;
  }
  v11 = *(_QWORD *)a2;
  v12 = a1 + 32;
  v13 = 2048;
  if ( (*(_DWORD *)(v11 + 104) & 4) == 0 )
    v13 = 1024;
  return Crashdump_CommonBufferAcquire(a2, v13, v12);
}
