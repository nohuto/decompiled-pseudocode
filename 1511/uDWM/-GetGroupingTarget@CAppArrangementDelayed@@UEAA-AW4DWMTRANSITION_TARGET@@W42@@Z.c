/*
 * XREFs of ?GetGroupingTarget@CAppArrangementDelayed@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x180003E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementDelayed::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edx
  int v4; // r8d
  int v5; // r9d

  v2 = &unk_1800A5D5C;
  v3 = a2 & 0xFFF;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(v2 - 1);
    if ( (v5 & 0xFFF) == v3 || (*v2 & 0xFFF) == v3 )
      break;
    ++v4;
    v2 += 2;
    if ( v4 )
      return v3;
  }
  return v5 & 0xFFF;
}
