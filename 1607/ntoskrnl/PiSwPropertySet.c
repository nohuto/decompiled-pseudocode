/*
 * XREFs of PiSwPropertySet @ 0x140510214
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
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
  v8 = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle, 0LL, 0);
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
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v8;
}
