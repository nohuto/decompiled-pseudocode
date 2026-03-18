/*
 * XREFs of PnpQueryID @ 0x140488E8C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PnpIrpQueryID @ 0x140488F88 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x140489004 (PnpFixupID.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     PnpLogEvent @ 0x14062DA98 (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140642EC8 (PnpSetInvalidIDEvent.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  int v7; // edi
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
  v7 = a2;
  ID = PnpIrpQueryID(*(_QWORD *)(a1 + 32), a2, a3);
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !v7 || v7 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9LL, (unsigned int)ID);
      v14 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v14 + 396) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags(v14, 0x200000);
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !v7 && ID != -1073741670 )
    {
      v15 = *(_QWORD *)(a1 + 16) + 56LL;
      v16 = 5242958;
      v17 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v15, &v16, (unsigned int)ID, 0LL, 0);
    }
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
      *a4 = 0;
    }
    return (unsigned int)ID;
  }
  if ( !v7 )
  {
    v9 = 1;
LABEL_12:
    v11 = 0;
    v10 = 200;
    goto LABEL_6;
  }
  if ( v7 > 0 )
  {
    if ( v7 <= 2 )
    {
      v9 = -1;
      v10 = 1024;
      v11 = 1;
LABEL_6:
      *a4 = PnpFixupID((unsigned int)*a3, v10, v11, v9, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_7;
    }
    if ( v7 == 3 )
    {
      v9 = 0;
      goto LABEL_12;
    }
  }
  *a4 = 0;
LABEL_7:
  v12 = 2 * *a4 == 0;
  *a4 *= 2;
  if ( v12 )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}
