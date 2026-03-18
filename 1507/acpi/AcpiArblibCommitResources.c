/*
 * XREFs of AcpiArblibCommitResources @ 0x1C0078E2C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00686B0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiArblibCommitResources(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  int v5; // r14d
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rbp
  int v8; // eax
  unsigned __int8 *v9; // rax
  NTSTATUS v10; // esi
  struct _RTL_RANGE_LIST RangeList; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  ULONGLONG Start; // [rsp+98h] [rbp+10h] BYREF

  v3 = *(int *)(a1 + 168);
  if ( *(_BYTE *)(a1 + 129) )
  {
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 176));
    *(_BYTE *)(a1 + 131) = 0;
    *(_BYTE *)(a1 + 129) = 0;
  }
  v5 = 0;
  RtlInitializeRangeList(&RangeList);
  if ( a2 )
  {
    v6 = (unsigned __int8 *)(a2 + 20);
    v7 = a2 + 20 + 20LL * *(unsigned int *)(a2 + 16);
    while ( (unsigned __int64)v6 < v7 )
    {
      v8 = *v6;
      if ( v8 == (_DWORD)v3 || (_BYTE)v8 == 7 && v3 == 3 )
      {
        v9 = v6 + 20;
        if ( (unsigned __int64)(v6 + 20) < v7 )
        {
          while ( *v9 == 0x81 )
          {
            if ( *((_WORD *)v9 + 1) == 1 )
            {
              v10 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 272))(v6, &Start, &v13);
              if ( v10 < 0 )
                goto LABEL_22;
              if ( v13 )
              {
                v10 = RtlAddRange(&RangeList, Start, Start + v13 - 1, 0, 3u, 0LL, 0LL);
                if ( v10 < 0 )
                  goto LABEL_22;
                ++v5;
              }
              break;
            }
            v9 += 20;
            if ( (unsigned __int64)v9 >= v7 )
              break;
          }
        }
      }
      v6 += 20;
    }
  }
  v10 = RtlInvertRangeList(*(PRTL_RANGE_LIST *)(a1 + 176), &RangeList);
  if ( v10 >= 0 )
  {
    *(_BYTE *)(a1 + 129) = 1;
    if ( !v5 )
      *(_BYTE *)(a1 + 131) = 1;
  }
LABEL_22:
  RtlFreeRangeList(&RangeList);
  return (unsigned int)v10;
}
