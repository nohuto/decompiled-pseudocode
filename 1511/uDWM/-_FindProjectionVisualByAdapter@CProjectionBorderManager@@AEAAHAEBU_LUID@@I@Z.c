/*
 * XREFs of ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x18007C36C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByAdapter(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // r11

  v3 = *((_DWORD *)this + 8);
  v4 = -1;
  v5 = 0LL;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 1);
    while ( *(_DWORD *)(v6 + 48 * v5 + 24) != a2->LowPart
         || *(_DWORD *)(v6 + 48 * v5 + 28) != a2->HighPart
         || *(_DWORD *)(v6 + 48 * v5 + 32) != a3 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        return v4;
    }
    return (unsigned int)v5;
  }
  return v4;
}
