/*
 * XREFs of MiInitializeSpecialPool @ 0x140579AAC
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     InitializeListHeadPte @ 0x140132184 (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x1407CBDF8 (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSpecialPool(char a1)
{
  unsigned __int64 v1; // rbx
  KSPIN_LOCK *v2; // r9
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // r9

  v1 = 0xFFFF800000000000uLL;
  if ( (a1 & 0x20) != 0 )
  {
    v2 = (KSPIN_LOCK *)qword_140350170;
    v1 = 0xFFFFF90000000000uLL;
LABEL_3:
    InitializeListHeadPte((unsigned __int64)(v2 + 1), ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    result = InitializeListHeadPte(v3 + 32, v4);
    *v6 = 0LL;
    return result;
  }
  result = MiInitializeDynamicRegion(7LL, 0xFFFFCF8000000000uLL, 0x8000000000LL);
  if ( (_DWORD)result )
  {
    dword_14034E71C = 0x4000;
    v2 = &qword_14034FBC0;
    goto LABEL_3;
  }
  return result;
}
