/*
 * XREFs of ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C004FAA8
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C004FC78 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00502A8 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0011DB0 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C004F780 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpPostUpdateUseInfoCalculate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_POST_UPDATE_USE_INFO *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r11d
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // r10d

  *(_OWORD *)a2 = *((_OWORD *)a1 + 40);
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 41);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 42);
  *((_OWORD *)a2 + 3) = *((_OWORD *)a1 + 43);
  *((_OWORD *)a2 + 4) = *((_OWORD *)a1 + 44);
  *((_OWORD *)a2 + 5) = *((_OWORD *)a1 + 45);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = MEMORY[0xFFFFF780000003B0];
  v6 = MEMORY[0xFFFFF78000000008];
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), v4);
  v7 = *((_QWORD *)a1 + 70);
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 568), v4);
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 592), v4);
  v9 = *(_DWORD *)(v8 + 12);
  v10 = -1;
  v11 = (unsigned int)v7 / 0x3E8;
  *((_DWORD *)a2 + 3) += v11;
  *((_QWORD *)a2 + 10) += v11;
  *((_DWORD *)a2 + 17) += HIDWORD(v7) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 4) += v12 / 0x3E8;
  *((_DWORD *)a2 + 5) += v9 / 0x3E8;
  *((_DWORD *)a2 + 9) += ((int)v4 - dword_1C011E618) / 0x3E8u;
  if ( (v6 - qword_1C011E608 - v5) / 0x2710uLL <= 0xFFFFFFFF )
    v10 = (v6 - qword_1C011E608 - v5) / 0x2710uLL;
  *((_DWORD *)a2 + 10) += v10 / 0x3E8;
  *((_DWORD *)a2 + 11) += *((unsigned __int16 *)a1 + 308);
  *((_DWORD *)a2 + 12) += *((unsigned __int16 *)a1 + 310);
  *((_DWORD *)a2 + 13) += *((unsigned __int16 *)a1 + 309);
  *((_DWORD *)a2 + 14) += *((unsigned __int16 *)a1 + 312);
  *((_DWORD *)a2 + 15) += *((_DWORD *)a1 + 159) / 0x3E8u;
  *((_DWORD *)a2 + 16) += *((_DWORD *)a1 + 158);
  *((_QWORD *)a2 + 9) = MEMORY[0xFFFFF78000000014];
}
