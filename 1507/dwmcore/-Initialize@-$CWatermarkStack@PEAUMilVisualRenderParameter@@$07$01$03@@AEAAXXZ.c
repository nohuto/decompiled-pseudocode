/*
 * XREFs of ?Initialize@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@AEAAXXZ @ 0x180099C58
 * Callers:
 *     ??0?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAA@XZ @ 0x18005FCF0 (--0-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Initialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
