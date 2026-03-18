/*
 * XREFs of QueryInertia @ 0x1C0239B40
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C0075580 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01E4C8C (DCEHitTestWindow.c)
 */

void *__fastcall QueryInertia(unsigned __int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int *v5; // rcx
  int v6; // eax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (dword_1C032B998 & 1) != 0
    && (!a2 || a2 == dword_1C032B928)
    && (v2 = ValidateHwnd(qword_1C032B988), (v3 = v2) != 0)
    && *(char *)(v2 + 44) >= 0
    && *(char *)(v2 + 43) >= 0
    && ((dword_1C032B998 & 4) == 0
     || (v9 = a1, (unsigned int)DCEHitTestWindow(
                                  (int *)&xmmword_1C032B938,
                                  (__int64)&xmmword_1C032B948,
                                  (int *)&v9,
                                  0LL)))
    && ((unsigned int)IsCompositionInputWindow((struct tagWND *)v3)
     || ((v4 = *(_QWORD *)(v3 + 272), v5 = (int *)(v3 + 112), v9 = a1, !v4)
       ? (v6 = DCEPtInRect(v5, a1))
       : (v6 = DCEHitTestWindow(v5, v4, (int *)&v9, 0LL)),
         v6)) )
  {
    return &gInertiaInfo;
  }
  else
  {
    return 0LL;
  }
}
