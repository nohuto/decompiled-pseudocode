/*
 * XREFs of ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C003820C
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0036B28 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00060B4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0006260 (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  VIDMM_PROCESS_ADAPTER_INFO *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  `vector constructor iterator'(
    (char *)this + 56,
    240LL,
    1,
    (void (__fastcall *)(char *))VIDMM_PROCESS_BUDGET_STATE::VIDMM_PROCESS_BUDGET_STATE);
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 80) = 54;
  *((_DWORD *)this + 82) = 0;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 384));
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  result = this;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return result;
}
