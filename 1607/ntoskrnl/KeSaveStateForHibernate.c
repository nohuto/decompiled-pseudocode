/*
 * XREFs of KeSaveStateForHibernate @ 0x14015E960
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140167180 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 */

__int64 __fastcall KeSaveStateForHibernate(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RtlCaptureContext((PCONTEXT)(a1 + 224));
  *(_QWORD *)(a1 + 288) = 43LL;
  *(_QWORD *)(a1 + 286) = 83LL;
  *(_QWORD *)(a1 + 168) = __readmsr(0xC0000101);
  *(_QWORD *)(a1 + 176) = __readmsr(0xC0000102);
  *(_QWORD *)(a1 + 184) = __readmsr(0xC0000081);
  *(_QWORD *)(a1 + 192) = __readmsr(0xC0000082);
  *(_QWORD *)(a1 + 200) = __readmsr(0xC0000083);
  *(_QWORD *)(a1 + 208) = __readmsr(0xC0000084);
  *(_QWORD *)(a1 + 472) = retaddr;
  *(_QWORD *)(a1 + 376) = &v4;
  result = KiSaveProcessorControlState(a1, 0);
  *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  _fxsave((void *)(a1 + 480));
  return result;
}
