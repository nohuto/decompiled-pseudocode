/*
 * XREFs of PlugPlayGetDeviceProperty @ 0x14050C894
 * Callers:
 *     PiPnpRtlGetDeviceNtPropertyRoutine @ 0x14050C85C (PiPnpRtlGetDeviceNtPropertyRoutine.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x14015C650 (ZwPlugPlayControl.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PlugPlayGetDeviceProperty(__int128 *a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, int a6)
{
  int v6; // ebx
  __int128 v11; // xmm0
  NTSTATUS v12; // eax
  unsigned int v13; // ebp
  int v14; // ecx
  _OWORD Buffer[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  if ( !a1 || !a5 || a6 )
    return 3221225485LL;
  memset(Buffer, 0, 0x28uLL);
  v11 = *a1;
  LODWORD(Buffer[1]) = a2;
  *((_QWORD *)&Buffer[1] + 1) = a3;
  LODWORD(Buffer[2]) = a4;
  Buffer[0] = v11;
  v12 = ZwPlugPlayControl(PlugPlayControlProperty, Buffer, 0x28u);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( v12 == -1073741789 )
      v6 = Buffer[2];
    *a5 = v6;
  }
  else
  {
    v14 = Buffer[2];
    if ( a4 > LODWORD(Buffer[2]) )
    {
      memset((void *)(a3 + LODWORD(Buffer[2])), 0, a4 - LODWORD(Buffer[2]));
      v14 = Buffer[2];
    }
    *a5 = v14;
  }
  return v13;
}
