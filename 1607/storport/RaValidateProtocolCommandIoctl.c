/*
 * XREFs of RaValidateProtocolCommandIoctl @ 0x1C0034128
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0026308 (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0035610 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C0033690 (EvaluateCurrentState.c)
 */

__int64 __fastcall RaValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  int v13; // ecx
  unsigned int v14; // eax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(_DWORD *)(v2 + 16);
  if ( v5 < 0x54 )
  {
    if ( v5 >= 0x14 )
      v4[4] = 3;
    return (unsigned int)-1073741820;
  }
  if ( *v4 != 1 || v4[1] != 84 || v4[2] != 3 || v4[6] != 64 )
    goto LABEL_40;
  LOBYTE(v6) = EvaluateCurrentState((int **)&g_Feature_2205192504_58229374_FeatureDescriptorDetails);
  if ( v6 && *(unsigned int *)(v2 + 16) < (unsigned __int64)(unsigned int)v4[6] + 80 )
  {
    v3 = -1073741820;
LABEL_41:
    v4[4] = 3;
    return v3;
  }
  v7 = (unsigned int)v4[7];
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned int)v4[11];
    if ( v8 < (unsigned __int64)(unsigned int)v4[6] + 80 || (v8 & 7) != 0 || *(unsigned int *)(v2 + 8) < v8 + v7 )
      goto LABEL_40;
  }
  v9 = (unsigned int)v4[8];
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)v4[12];
    if ( v10 < (unsigned __int64)(unsigned int)v4[6] + 80 || (v10 & 7) != 0 || *(unsigned int *)(v2 + 16) < v10 + v9 )
      goto LABEL_40;
  }
  v11 = (unsigned int)v4[9];
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)v4[13];
    if ( v12 < (unsigned __int64)(unsigned int)v4[6] + 80 || (v12 & 7) != 0 || *(unsigned int *)(v2 + 8) < v12 + v11 )
      goto LABEL_40;
  }
  if ( (_DWORD)v9 && (_DWORD)v7 && (unsigned int)v4[12] < v7 + (unsigned __int64)(unsigned int)v4[11]
    || (_DWORD)v11
    && ((_DWORD)v7 && (unsigned int)v4[13] < v7 + (unsigned __int64)(unsigned int)v4[11]
     || (_DWORD)v9 && (unsigned int)v4[13] < v9 + (unsigned __int64)(unsigned int)v4[12]) )
  {
    goto LABEL_40;
  }
  if ( v4[2] == 3 )
  {
    if ( (v13 = v4[14], (unsigned int)(v13 - 1) > 1)
      || v13 == 1 && (v14 = (unsigned __int8)v4[20], v14 < 0xC0) && (g_InWinPE != 1 || v14 != 128)
      || v13 == 2 && (unsigned __int8)v4[20] < 0x80u )
    {
LABEL_40:
      v3 = -1073741811;
      goto LABEL_41;
    }
  }
  return v3;
}
