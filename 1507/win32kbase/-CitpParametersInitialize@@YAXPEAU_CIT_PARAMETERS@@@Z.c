/*
 * XREFs of ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C007A774
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall CitpParametersInitialize(struct _CIT_PARAMETERS *a1)
{
  UCHAR v2; // dl

  memset(a1, 0, 0x58uLL);
  *((_DWORD *)a1 + 1) = 64;
  *((_QWORD *)a1 + 1) = 144000000000LL;
  *((_DWORD *)a1 + 11) = 128;
  *((_QWORD *)a1 + 2) = 864000000000LL;
  *((_QWORD *)a1 + 3) = 6048000000000LL;
  *((_QWORD *)a1 + 4) = 36000000000LL;
  *((_DWORD *)a1 + 10) = 3600000;
  *((_DWORD *)a1 + 15) = 3600000;
  *((_QWORD *)a1 + 8) = L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:";
  *((_DWORD *)a1 + 12) = 3024000;
  *((_DWORD *)a1 + 13) = 4096;
  *((_DWORD *)a1 + 14) = 60000;
  *(_WORD *)((char *)a1 + 75) = 1;
  CitpParametersCompute(a1, v2);
}
