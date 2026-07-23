/*
 * XREFs of VfWmiVerifyIrpStackUpward @ 0x1407192D8
 * Callers:
 *     <none>
 * Callees:
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     VfDevObjIsDeviceRemoved @ 0x14070D6F4 (VfDevObjIsDeviceRemoved.c)
 */

char __fastcall VfWmiVerifyIrpStackUpward(const void **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // eax
  const void *v7; // rdi
  const void *v8; // rsi

  LOBYTE(v5) = MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v7 = *a1;
    v8 = *(const void **)(a4 + 40);
    if ( a5 )
    {
      v5 = *(_DWORD *)(a4 + 4);
      if ( v5 >= 0 && ((*(_DWORD *)(a4 + 4) >> 28) & 1) == 0 && *(_QWORD *)(a2 + 8) != *(_QWORD *)(a2 + 40) )
      {
        LOBYTE(v5) = VfDevObjIsDeviceRemoved();
        if ( !(_BYTE)v5 )
        {
          LOBYTE(v5) = VfIoSwitchedOffNoReboot;
          if ( !VfIoSwitchedOffNoReboot )
            LOBYTE(v5) = ViErrorReport10(0x220u, v8, v7, *(const void **)(a2 + 8));
        }
      }
    }
  }
  return v5;
}
