/*
 * XREFs of VfPowerVerifyIrpStackDownward @ 0x140719054
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     VfGetPristineDriverInit @ 0x14070B8DC (VfGetPristineDriverInit.c)
 */

__int64 __fastcall VfPowerVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  const void *v7; // rsi
  int v10; // ebx
  BOOL v11; // r14d
  __int64 v12; // rcx
  __int64 result; // rax
  PDRIVER_INITIALIZE PristineDriverInit; // rax

  v7 = *(const void **)a1;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  v11 = v10 != *(_DWORD *)(a5 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 56LL) == 3 )
    ViErrorReport1(0x211u, a7, *(const void **)a1);
  v12 = *(_QWORD *)(a2 + 8);
  result = (__int64)IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v12 + 288) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v12);
    ViErrorReport1(0x21Fu, PristineDriverInit, v7);
    result = a6;
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  if ( a3 && v10 < 0 )
  {
    if ( v10 == -1073741637 )
    {
      if ( v11 )
        return ViErrorReport1(0x21Au, a7, v7);
    }
    else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
    {
      result = ViErrorReport1(0x219u, a7, v7);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
