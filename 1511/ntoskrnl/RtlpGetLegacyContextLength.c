/*
 * XREFs of RtlpGetLegacyContextLength @ 0x14002B3BC
 * Callers:
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     PspWow64InitThread @ 0x1404A46DC (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x1404A492C (PspWow64SetupCpuArea.c)
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1404A56CC (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLegacyContextLength(int a1, int *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 4LL;
    v3 = 716;
  }
  else
  {
    if ( (a1 & 0x100000) != 0 )
    {
      v3 = 1232;
LABEL_4:
      result = 16LL;
      goto LABEL_5;
    }
    if ( (a1 & 0x200000) != 0 )
    {
      result = 8LL;
      v3 = 416;
    }
    else if ( (a1 & 0x400000) != 0 )
    {
      v3 = 912;
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( a2 )
    *a2 = v3;
  if ( a3 )
    *a3 = result;
  return result;
}
