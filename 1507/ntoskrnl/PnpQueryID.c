/*
 * XREFs of PnpQueryID @ 0x1404D6380
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1404D628C (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x1404D6478 (PnpFixupID.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14068E7C8 (PnpSetInvalidIDEvent.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, int a2, ULONG_PTR *a3, _DWORD *a4)
{
  int ID; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  bool v12; // zf
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-20h]

  *a4 = 0;
  ID = PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), a2, a3);
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !a2 || a2 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9LL, (unsigned int)ID);
      v14 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v14 + 396) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags(v14, 0x200000LL);
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !a2 && ID != -1073741670 )
    {
      v15 = *(_QWORD *)(a1 + 16) + 56LL;
      v16 = 5242958;
      v17 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v15, &v16, (unsigned int)ID, 0LL, 0);
    }
    if ( *a3 )
    {
      ExFreePoolWithTag((PVOID)*a3, 0);
      *a3 = 0LL;
      *a4 = 0;
    }
    return (unsigned int)ID;
  }
  if ( !a2 )
  {
    v9 = 1;
LABEL_7:
    v11 = 0;
    v10 = 200;
    goto LABEL_8;
  }
  if ( a2 > 0 )
  {
    if ( a2 <= 2 )
    {
      v9 = -1;
      v10 = 1024;
      v11 = 1;
LABEL_8:
      *a4 = PnpFixupID(*a3, v10, v11, v9, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_9;
    }
    if ( a2 == 3 )
    {
      v9 = 0;
      goto LABEL_7;
    }
  }
  *a4 = 0;
LABEL_9:
  v12 = 2 * *a4 == 0;
  *a4 *= 2;
  if ( v12 )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}
