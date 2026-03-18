/*
 * XREFs of TraceDxgkContext @ 0x1C001CBD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqqqqqqppp @ 0x1C001CAA4 (Template_pqqqqqqqqppp.c)
 */

NTSTATUS __fastcall TraceDxgkContext(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  NTSTATUS result; // eax
  const EVENT_DESCRIPTOR *v13; // rdx
  int v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-18h]

  result = a8 != 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
        return result;
      v17 = a11;
      v16 = a10;
      v15 = a9;
      v14 = (a6 != 0) | (2 * ((a7 != 0) | (2 * result)));
      v13 = (const EVENT_DESCRIPTOR *)&EventDestroyContext;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
        return result;
      v17 = a11;
      v16 = a10;
      v15 = a9;
      v14 = (a6 != 0) | (2 * ((a7 != 0) | (2 * result)));
      v13 = (const EVENT_DESCRIPTOR *)&EventReportContext;
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
      return result;
    v17 = a11;
    v16 = a10;
    v15 = a9;
    v14 = (a6 != 0) | (2 * ((a7 != 0) | (2 * result)));
    v13 = (const EVENT_DESCRIPTOR *)&EventCreateContext;
  }
  return Template_pqqqqqqqqppp((__int64)a5, v13, a3, a2, a3, a4, *a5, a5[1], a5[2], a5[3], a5[4], v14, v15, v16, v17);
}
