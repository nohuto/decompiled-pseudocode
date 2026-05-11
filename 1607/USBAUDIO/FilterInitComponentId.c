/*
 * XREFs of FilterInitComponentId @ 0x1C0014C04
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0014E64 (FilterCreateFilterFactory.c)
 * Callees:
 *     RegistryInitProductNameKey @ 0x1C001AF98 (RegistryInitProductNameKey.c)
 */

__int64 __fastcall FilterInitComponentId(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(v2 + 40);
  *(_DWORD *)(a2 + 6) = 799491643;
  *(_DWORD *)a2 = v4 + 1310518482;
  *(_WORD *)(a2 + 4) = 5753;
  *(_DWORD *)(a2 + 10) = -932921435;
  *(_WORD *)(a2 + 14) = -17810;
  v5 = *(unsigned __int16 *)(v2 + 44);
  *(_DWORD *)(a2 + 20) = 1178321507;
  *(_DWORD *)(a2 + 16) = v5 - 1412670882;
  *(_DWORD *)(a2 + 24) = -1079693401;
  *(_DWORD *)(a2 + 28) = -1167144860;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)*(_QWORD *)(v2 + 56);
  if ( *(_QWORD *)(v2 + 24) )
  {
    *(_DWORD *)(a2 + 48) = *(unsigned __int16 *)(v2 + 40) - 61386680;
    *(_WORD *)(a2 + 52) = *(_WORD *)(v2 + 44) + 11784;
    *(_WORD *)(a2 + 54) = *(_WORD *)(v2 + 36) + 17979;
    *(_DWORD *)(a2 + 56) = -1079693401;
    *(_DWORD *)(a2 + 60) = -1167144860;
    if ( (int)RegistryInitProductNameKey(a2 + 48, *(_QWORD *)(v2 + 24), *(unsigned int *)(v2 + 32)) < 0 )
      *(GUID *)(a2 + 48) = GUID_NULL;
  }
  else
  {
    *(GUID *)(a2 + 48) = GUID_NULL;
  }
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(v2 + 48) >> 8;
  result = 0LL;
  *(_DWORD *)(a2 + 68) = (unsigned __int8)*(_DWORD *)(v2 + 48);
  return result;
}
