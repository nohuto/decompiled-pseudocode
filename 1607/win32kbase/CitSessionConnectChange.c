/*
 * XREFs of CitSessionConnectChange @ 0x1C004EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0010FFC (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C004F75C (-UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7CC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(char a1, char a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  unsigned __int64 v5; // rdi
  char v6; // cl
  unsigned __int8 IsUserDesktopActive; // al
  struct _CIT_IMPACT_CONTEXT *v8; // rcx
  struct tagPROCESSINFO *v9; // r8
  __int16 v10; // dx

  v2 = qword_1C011E5D0;
  if ( !qword_1C011E5D0 || ((*((_BYTE *)qword_1C011E5D0 + 432) & 8) != 0) == a1 )
    return;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    ++*((_WORD *)qword_1C011E5D0 + 217);
    CitpStatIncrement((unsigned __int16 *)v2 + 97, 1);
    if ( !a2 )
    {
      CitpStatIncrement((unsigned __int16 *)v2 + 98, v10);
      goto LABEL_5;
    }
LABEL_11:
    v6 = 0;
    goto LABEL_6;
  }
  CitpStatIncrement((unsigned __int16 *)qword_1C011E5D0 + 105, 1);
  CitpSetForegroundProcess(v2, v5, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
    goto LABEL_11;
LABEL_5:
  v6 = 1;
LABEL_6:
  *((_BYTE *)v2 + 432) = *((_BYTE *)v2 + 432) & 0xD7 | (8 * (a1 & 1 | (4 * (v6 & 1))));
  IsUserDesktopActive = CitpIsUserDesktopActive(v2);
  CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive((struct _CIT_IMPACT_CONTEXT *)((char *)v2 + 592), IsUserDesktopActive, v5);
  if ( a1 && CitpAllowForegroundProcess(v2) )
  {
    v9 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 56);
    if ( v9 )
      CitpSetForegroundProcess(v8, v5, v9, 0LL, 0LL, 0LL);
  }
}
