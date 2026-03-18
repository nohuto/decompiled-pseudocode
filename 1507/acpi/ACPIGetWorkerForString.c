/*
 * XREFs of ACPIGetWorkerForString @ 0x1C00038E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003B58 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C001D0E0 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001D13C (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToInstanceID @ 0x1C001D420 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C001D47C (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C001D4D8 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001D568 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001D6DC (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToHardwareID @ 0x1C003BA78 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C003BAD4 (ACPIGetConvertToSerialIDWide.c)
 *     ACPIGetConvertToString @ 0x1C003BB94 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToStringWide @ 0x1C003BBF4 (ACPIGetConvertToStringWide.c)
 */

void __fastcall ACPIGetWorkerForString(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r8
  bool v8; // bp
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edi
  void (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v13; // al
  _QWORD **v14; // r9
  void **v15; // r8
  __int64 v16; // [rsp+28h] [rbp-20h]

  v5 = a4[7];
  v8 = a2 >= 0;
  if ( v5 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 || *(_QWORD *)(a3 + 32) && *(_DWORD *)(a3 + 24) )
    {
      v9 = *(_DWORD *)a4;
      v16 = a4[8];
      if ( (v9 & 0x10) != 0 )
      {
        if ( (v9 & 0x20) != 0 )
        {
          v10 = ACPIGetConvertToDeviceIDWide(a4[3], a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x40) != 0 )
        {
          v10 = ACPIGetConvertToHardwareIDWide(a4[3], a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x80u) != 0 )
        {
          v10 = ACPIGetConvertToInstanceIDWide(a4[3], a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x200) != 0 )
        {
          v10 = ACPIGetConvertToPnpIDWide(a4[3], a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x100) != 0 )
        {
          v10 = ACPIGetConvertToCompatibleIDWide(a4[3], a2, a3, v9, v5, v16);
        }
        else if ( (v9 & 0x2000) != 0 )
        {
          v10 = ACPIGetConvertToSerialIDWide(a1, a2, a3, v9, v5, v16);
        }
        else
        {
          v10 = ACPIGetConvertToStringWide(a1, a2, a3, v9, v5, v16);
        }
      }
      else if ( (v9 & 0x20) != 0 )
      {
        v10 = ACPIGetConvertToDeviceID(a4[3], a2, a3, v9, v5, v16);
      }
      else if ( (v9 & 0x40) != 0 )
      {
        v10 = ACPIGetConvertToHardwareID(a4[3], a2, a3, v9, v5, v16);
      }
      else if ( (v9 & 0x80u) != 0 )
      {
        v10 = ACPIGetConvertToInstanceID(a4[3], a2, a3, v9, v5, v16);
      }
      else if ( (v9 & 0x200) != 0 )
      {
        v10 = ACPIGetConvertToPnpID(a4[3], a2, a3, v9, v5, v16);
      }
      else if ( (v9 & 0x100) != 0 )
      {
        v10 = ACPIGetConvertToCompatibleID(a4[3], a2, a3, v9, v5, v16);
      }
      else
      {
        v10 = ACPIGetConvertToString(a1, a2, a3, v9, v5, v16);
      }
      v11 = v10;
    }
    else
    {
      v11 = -1072431089;
    }
  }
  else
  {
    v11 = -1073741670;
  }
  *((_DWORD *)a4 + 18) = v11;
  if ( v8 )
  {
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    FreeData(a3);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v12 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v12 )
      v12(a1, v11, 0LL, a4[6]);
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v14 = (_QWORD **)a4[1];
    v15 = (void **)a4[2];
    if ( v14[1] != a4 + 1 || *v15 != a4 + 1 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    KeReleaseSpinLock(&AcpiGetLock, v13);
    ExFreePoolWithTag(a4, 0);
  }
}
