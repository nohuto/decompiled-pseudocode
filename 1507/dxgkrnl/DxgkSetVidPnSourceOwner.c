/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C00BE4D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2027);
  v5 = SetVidPnSourceOwnerInternal(a1, (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS)1);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2027);
  return v5;
}
