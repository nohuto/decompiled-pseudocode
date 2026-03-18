/*
 * XREFs of MiCfgMarkValidEntries @ 0x1403CAC70
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiPopulateCfgBitMap @ 0x1403CAE30 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1403F62DC (MiSelectCfgBitMap.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  _DWORD *v7; // r12
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // r9
  int v17; // r15d
  unsigned int *v18; // rax
  unsigned int *v19; // rdi
  unsigned __int64 v20; // r9
  int v21; // ebx
  _QWORD *v22; // rdx
  unsigned int v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]
  _DWORD *v25; // [rsp+40h] [rbp-28h]

  v7 = a6;
  *a6 = 0;
  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0xFFF) != 0 )
    return 3221225485LL;
  v11 = 1;
  if ( a5 > 1 )
  {
    v22 = (_QWORD *)(a4 + 16);
    while ( *(_QWORD *)(a4 + 16LL * (v11 - 1)) <= *v22 )
    {
      ++v11;
      v22 += 2;
      if ( v11 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( *(_QWORD *)(a4 + 16LL * (a5 - 1)) >= a3 )
    return 3221225485LL;
  v12 = 0;
  if ( a5 )
  {
    v13 = a4;
    while ( (*(_BYTE *)v13 & 0xF) == 0 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( (v14 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        break;
      if ( (v14 & 1) != 0 && (a7 & 1) != 0 )
        return 3221225506LL;
      ++v12;
      v13 += 16LL;
      if ( v12 >= a5 )
        goto LABEL_11;
    }
    return 3221225485LL;
  }
LABEL_11:
  if ( !MiIsProcessCfgEnabled() )
    return 3221225541LL;
  v17 = MiSelectCfgBitMap(v16, a2, 0LL, v16);
  v18 = MiObtainReferencedVad(a2, &a6);
  v19 = v18;
  if ( !v18 )
    return (unsigned int)a6;
  v20 = a3 + a2 - 1;
  if ( v20 > (((v18[7] | ((unsigned __int64)*((unsigned __int8 *)v18 + 33) << 32)) << 12) | 0xFFF) )
  {
    v21 = -1073741811;
  }
  else
  {
    v23 = a5;
    v24 = a4;
    v25 = v7;
    v21 = MiPopulateCfgBitMap(v17, (unsigned int)&v23, a2, (v20 + 4095) & 0xFFFFF000, 1);
    if ( v21 >= 0 )
      v21 = 0;
  }
  MiUnlockAndDereferenceVad(v19);
  return (unsigned int)v21;
}
