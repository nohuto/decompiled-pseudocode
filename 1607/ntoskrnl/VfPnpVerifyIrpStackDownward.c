/*
 * XREFs of VfPnpVerifyIrpStackDownward @ 0x1407188EC
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     VfGetPristineDriverInit @ 0x14070B8DC (VfGetPristineDriverInit.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x14070E250 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackDownward(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 result; // rax
  const void *v11; // rsi
  __int64 v12; // r13
  int v13; // edi
  BOOL v14; // r15d
  __int64 v15; // rcx
  PDRIVER_INITIALIZE PristineDriverInit; // rax
  __int64 v17; // r8
  int IsDeviceObjectMarked; // eax
  int v19; // r9d
  int v20; // r10d

  result = IovUtilIsWdmStack(a2);
  if ( (_DWORD)result )
  {
    v11 = (const void *)*a1;
    v12 = a1[30];
    v13 = *(_DWORD *)(*a1 + 48LL);
    v14 = v13 != *(_DWORD *)(a5 + 96);
    if ( *(_DWORD *)(v12 + 56) == 3 )
      ViErrorReport1(0x211u, a7, v11);
    v15 = a2[1];
    result = (__int64)IopInvalidDeviceRequest;
    if ( *(__int64 (__fastcall **)(__int64, IRP *))(v15 + 328) == IopInvalidDeviceRequest )
    {
      *(_DWORD *)(a5 + 4) |= 0x1000000u;
      PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v15);
      ViErrorReport1(0x21Fu, PristineDriverInit, v11);
      result = a6;
      *(_DWORD *)(a6 + 4) |= 0x80000000;
    }
    if ( a3 )
    {
      if ( v13 < 0 )
      {
        if ( v13 == -1073741637 )
        {
          if ( v14 && (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
          {
            result = ViErrorReport1(0x216u, a7, v11);
            *(_DWORD *)(a5 + 4) |= 0x2000000u;
          }
        }
        else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
        {
          result = ViErrorReport1(0x215u, a7, v11);
          *(_DWORD *)(a5 + 4) |= 0x2000000u;
        }
      }
      if ( *(_QWORD *)(v12 + 48) )
      {
        result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(v12 + 48), 2);
        if ( (_DWORD)result )
        {
          IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v17, 3);
          return ViPnpVerifyMinorWasProcessedProperly(
                   (_DWORD)v11,
                   v20,
                   IsDeviceObjectMarked == 0 ? 4 : 0,
                   v19,
                   (__int64)a7,
                   1);
        }
      }
    }
  }
  return result;
}
