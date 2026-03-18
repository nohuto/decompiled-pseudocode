/*
 * XREFs of InvokeGetCVTEntry @ 0x1C0111BF0
 * Callers:
 *     itrp_MIRP @ 0x1C00CC800 (itrp_MIRP.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 */

__int64 __fastcall InvokeGetCVTEntry(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int CVTScale; // eax

  v4 = (int)a2;
  v5 = (unsigned int)(a1 - 2);
  if ( !(_DWORD)v5 )
    return *(unsigned int *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4LL * (int)a2);
  if ( (_DWORD)v5 == 1 )
  {
    CVTScale = itrp_GetCVTScale(v5, a2, a3, a4);
    return FixMul(*(_DWORD *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4 * v4), CVTScale);
  }
  else
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 0LL;
  }
}
