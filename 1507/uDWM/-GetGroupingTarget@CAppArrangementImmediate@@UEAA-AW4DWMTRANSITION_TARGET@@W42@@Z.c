/*
 * XREFs of ?GetGroupingTarget@CAppArrangementImmediate@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x1800909E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementImmediate::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edx
  int v4; // r8d
  int v5; // r9d

  v2 = &unk_1800AACC4;
  v3 = a2 & 0xFFF;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(v2 - 1);
    if ( (v5 & 0xFFF) == v3 || (*v2 & 0xFFF) == v3 )
      break;
    ++v4;
    v2 += 2;
    if ( (unsigned __int64)v4 >= 3 )
      return v3;
  }
  return v5 & 0xFFF;
}
