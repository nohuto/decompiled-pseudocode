/*
 * XREFs of PopBcdReadElement @ 0x14053D498
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdReadElement(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  PVOID PoolWithTag; // rdi
  __int64 v9; // r8
  int ElementDataWithFlags; // ebx
  unsigned int NumberOfBytes[6]; // [rsp+30h] [rbp-18h] BYREF

  NumberOfBytes[0] = 0;
  v6 = a2;
  if ( (unsigned int)BcdGetElementDataWithFlags(a1, a2, a3, 0LL, NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x64634250u);
    if ( PoolWithTag )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(a1, v6, v9, PoolWithTag, NumberOfBytes);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        ElementDataWithFlags = 0;
        *a4 = NumberOfBytes[0];
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementDataWithFlags;
}
