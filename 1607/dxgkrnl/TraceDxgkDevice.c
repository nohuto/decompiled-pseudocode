/*
 * XREFs of TraceDxgkDevice @ 0x1C00228D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqpttq @ 0x1C00224CC (Template_ppqpttq.c)
 */

NTSTATUS __fastcall TraceDxgkDevice(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8)
{
  NTSTATUS result; // eax
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+48h] [rbp-10h]

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v10 = a7;
      v14 = a8;
      v13 = a7;
      v12 = a6;
      v11 = (const EVENT_DESCRIPTOR *)&EventDestroyDevice;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v10 = a7;
      v14 = a8;
      v13 = a7;
      v12 = a6;
      v11 = (const EVENT_DESCRIPTOR *)&EventReportDevice;
    }
    return Template_ppqpttq(v10, v11, a3, a3, a2, a4, a5, v12, v13, v14);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    return Template_ppqpttq(a7, &EventCreateDevice, a3, a3, a2, a4, a5, a6, a7, a8);
  }
  return result;
}
