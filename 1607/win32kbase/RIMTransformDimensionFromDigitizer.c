/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1C00D3E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000EBE4 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000EC04 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00D40F4 (RIMTransformPointerDevicePointToPhysical.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 380) == 1 && *(_QWORD *)(a1 + 544) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v8,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 416) + 96LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 732LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 4) ^= *(_DWORD *)a2;
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
      }
      else
      {
        *a3 ^= a3[1];
        a3[1] ^= *a3;
        *a3 ^= a3[1];
      }
    }
    if ( a2 )
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 544), *(_QWORD *)a2, a3);
    RIMTransformPhysicalPointToScreen(*(_QWORD *)(a1 + 544), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
  }
}
