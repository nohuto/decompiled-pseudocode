/*
 * XREFs of PiSwPropertySet @ 0x140487AA0
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576830 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1404FC340 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle, 0LL, 0);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          v8 = PiPnpRtlSetObjectProperty(
                 *(_QWORD *)&PiPnpRtlCtx,
                 a1,
                 a2,
                 Handle,
                 *(v10 - 2),
                 v10 - 5,
                 *((_DWORD *)v10 - 2),
                 *v10,
                 *((_DWORD *)v10 - 1),
                 0);
          if ( v8 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          if ( v8 < 0 )
            break;
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v8;
}
