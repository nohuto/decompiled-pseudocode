/*
 * XREFs of RaUnitQueryDeviceTextIrp @ 0x1C0051378
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C000C6A8 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C000C6D0 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C000C774 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C005381C (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryDeviceTextIrp(__int64 a1, IRP *a2)
{
  unsigned int Length; // ebx
  wchar_t *Pool; // rax
  int v6; // edi
  wchar_t *v7; // rsi
  unsigned int v8; // r8d
  IRP *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *DeviceType; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[24]; // [rsp+40h] [rbp-38h] BYREF

  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x200uLL, 0x54516152u, *(_QWORD *)(a1 + 8));
  v6 = 0;
  v7 = Pool;
  if ( Pool )
  {
    if ( Length )
    {
      if ( Length == 1 )
      {
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"Bus Number %d, Target Id %d, LUN %d",
          *(unsigned __int8 *)(a1 + 88),
          *(unsigned __int8 *)(a1 + 89),
          *(unsigned __int8 *)(a1 + 90));
      }
      else
      {
        ExFreePoolWithTag(Pool, 0);
        v7 = 0LL;
        v6 = -1073741637;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1536) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x100uLL, L"VM passthrough LUN device");
    }
    else
    {
      StorGetIdentityVendorId((_QWORD *)(a1 + 96), (__int64)v14);
      StorGetIdentityProductId((_QWORD *)(a1 + 96), (__int64)v15);
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F, v11, v12);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 0x10) != 0 )
      {
        if ( *(_QWORD *)(a1 + 136) )
          RtlStringCchPrintfW(v7, 0x100uLL, L"%hs");
        else
          RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs", v14, v15);
      }
      else
      {
        RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs SCSI %hs Device", v14, v15, *DeviceType);
      }
    }
    a2->IoStatus.Information = (unsigned __int64)v7;
    v8 = v6;
    v9 = a2;
  }
  else
  {
    v9 = a2;
    if ( Length <= 1 )
      v8 = -1073741801;
    else
      v8 = -1073741637;
  }
  return RaidCompleteRequestEx(v9, 0, v8);
}
