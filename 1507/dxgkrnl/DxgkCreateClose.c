/*
 * XREFs of DxgkCreateClose @ 0x1C00AFB20
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DxgkCreateClose(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 1);
  v4 = 0;
  if ( a2->RequestorMode )
    v4 = -1073741790;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v5, &EventProfilerExit, v6, 1);
  return v4;
}
