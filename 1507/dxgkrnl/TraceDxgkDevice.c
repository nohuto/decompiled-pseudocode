/*
 * XREFs of TraceDxgkDevice @ 0x1C001D8C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqptt @ 0x1C001D4CC (Template_ppqptt.c)
 */

NTSTATUS __fastcall TraceDxgkDevice(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        return Template_ppqptt(a6, &EventDestroyDevice, a3, a3, a2, a4, a5, a6, a7);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      return Template_ppqptt(a6, &EventReportDevice, a3, a3, a2, a4, a5, a6, a7);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    return Template_ppqptt(a6, &EventCreateDevice, a3, a3, a2, a4, a5, a6, a7);
  }
  return result;
}
