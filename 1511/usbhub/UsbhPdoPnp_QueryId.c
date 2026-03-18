/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C000D390
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BF70 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rbx
  NTSTATUS Status; // r12d
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int Length; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r9
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  Status = a2->IoStatus.Status;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  KeWaitForSingleObject((PVOID)(v7 + 2544), Executive, 0, 0, 0LL);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    v15 = v7 + 2088;
  }
  else if ( Length )
  {
    v13 = Length - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 2 )
        {
          if ( *(_BYTE *)(v7 + 2708) )
          {
            Status = RtlStringFromGUID((const GUID *const)(v7 + 2692), &GuidString);
            if ( Status >= 0 )
            {
              Status = 0;
              a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
            }
          }
        }
LABEL_28:
        if ( CurrentStackLocation->Parameters.Read.Length )
          goto LABEL_18;
        goto LABEL_38;
      }
      if ( *(_QWORD *)(v7 + 2128) )
      {
        v15 = v7 + 2120;
        if ( (*(_DWORD *)(v7 + 1412) & 0x200000) != 0 )
          v4 = 12LL;
      }
      else
      {
        v15 = v7 + 2136;
      }
    }
    else
    {
      v15 = v7 + 2104;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v21 = PdoExt(a1);
      v22 = (_QWORD *)UsbhIncHubBusy(*(_QWORD *)(v7 + 1176), v21 + 944, a1, 1346728819, 1);
      KeWaitForSingleObject((PVOID)(v7 + 2864), Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1, v23, v24, v25);
      KeSetEvent((PRKEVENT)(v7 + 2864), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*(_QWORD *)(v7 + 1176), v26, v22, v27);
    }
    v15 = v7 + 2072;
  }
  if ( !v15 )
    goto LABEL_28;
  v16 = *(unsigned int *)(v15 + 4);
  if ( !(_DWORD)v16 || !*(_QWORD *)(v15 + 8) )
    goto LABEL_28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + v16, 0x42554855u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_38:
    Status = -1073741670;
    goto LABEL_18;
  }
  memset(PoolWithTag, 0, v4 + *(unsigned int *)(v15 + 4));
  if ( v4 )
  {
    *(_QWORD *)v18 = *(_QWORD *)L"MSFT30";
    v18[2] = *(_DWORD *)L"30";
  }
  memmove(&v18[(unsigned __int64)v4 / 4], *(const void **)(v15 + 8), *(unsigned int *)(v15 + 4));
  Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v18;
LABEL_18:
  v19 = *(_QWORD *)(a1 + 64);
  if ( !v19 )
    UsbhTrapFatal_Dbg(a1, 0LL, v10, v11);
  if ( *(_DWORD *)v19 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v10, v11);
  KeReleaseSemaphore((PRKSEMAPHORE)(v19 + 2544), 16, 1, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
      Status);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
