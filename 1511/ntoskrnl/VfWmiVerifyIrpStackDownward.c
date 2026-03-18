/*
 * XREFs of VfWmiVerifyIrpStackDownward @ 0x1406CA850
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     VfGetPristineDriverInit @ 0x1406BF854 (VfGetPristineDriverInit.c)
 */

__int64 (__fastcall *__fastcall VfWmiVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7))(__int64 a1, __int64 a2)
{
  const void *v8; // rbx
  __int64 v9; // rcx
  __int64 (__fastcall *result)(__int64, __int64); // rax
  PDRIVER_INITIALIZE PristineDriverInit; // rax

  v8 = *(const void **)a1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 56LL) == 3 )
    ViErrorReport1(0x211u, a7, *(const void **)a1);
  v9 = *(_QWORD *)(a2 + 8);
  result = IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, __int64))(v9 + 296) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v9);
    ViErrorReport1(0x21Fu, PristineDriverInit, v8);
    result = (__int64 (__fastcall *)(__int64, __int64))a6;
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  return result;
}
