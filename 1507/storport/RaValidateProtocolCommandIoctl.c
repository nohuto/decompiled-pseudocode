/*
 * XREFs of RaValidateProtocolCommandIoctl @ 0x1C002FD3C
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0020BA8 (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003120C (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C002F194 (EvaluateCurrentState.c)
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
  int v13; // edx

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
    goto LABEL_38;
  LOBYTE(v6) = EvaluateCurrentState((int **)&g_Feature_2406519096_58229373_FeatureDescriptorDetails);
  if ( v6 && *(unsigned int *)(v2 + 16) < (unsigned __int64)(unsigned int)v4[6] + 80 )
  {
    v3 = -1073741820;
LABEL_39:
    v4[4] = 3;
    return v3;
  }
  if ( (v7 = (unsigned int)v4[7], (_DWORD)v7)
    && ((v8 = (unsigned int)v4[11], v8 < (unsigned __int64)(unsigned int)v4[6] + 80)
     || (v8 & 7) != 0
     || *(unsigned int *)(v2 + 8) < v8 + v7)
    || (v9 = (unsigned int)v4[8], (_DWORD)v9)
    && ((v10 = (unsigned int)v4[12], v10 < (unsigned __int64)(unsigned int)v4[6] + 80)
     || (v10 & 7) != 0
     || *(unsigned int *)(v2 + 16) < v10 + v9)
    || (v11 = (unsigned int)v4[9], (_DWORD)v11)
    && ((v12 = (unsigned int)v4[13], v12 < (unsigned __int64)(unsigned int)v4[6] + 80)
     || (v12 & 7) != 0
     || *(unsigned int *)(v2 + 8) < v12 + v11)
    || (_DWORD)v9 && (_DWORD)v7 && (unsigned int)v4[12] < v7 + (unsigned __int64)(unsigned int)v4[11]
    || (_DWORD)v11
    && ((_DWORD)v7 && (unsigned int)v4[13] < v7 + (unsigned __int64)(unsigned int)v4[11]
     || (_DWORD)v9 && (unsigned int)v4[13] < v9 + (unsigned __int64)(unsigned int)v4[12])
    || v4[2] == 3
    && ((v13 = v4[14], (unsigned int)(v13 - 1) > 1)
     || v13 == 1 && (unsigned __int8)v4[20] < 0xC0u
     || v13 == 2 && (unsigned __int8)v4[20] < 0x80u) )
  {
LABEL_38:
    v3 = -1073741811;
    goto LABEL_39;
  }
  return v3;
}
