/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C000A3C4
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C000A7CC (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _DWORD *v3; // r9
  unsigned int *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v12; // r11d
  int v13; // eax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_DWORD **)(a2 + 64);
    v4 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v3 = *(_DWORD **)(a2 + 24);
    v4 = (unsigned int *)(a2 + 16);
  }
  if ( v3[2] != 3 )
    goto LABEL_45;
  v5 = *v4;
  if ( (unsigned int)v5 < 0x54 )
  {
    if ( (unsigned int)v5 < 0x14 )
    {
LABEL_45:
      v2 = -1056964602;
      *(_BYTE *)(a2 + 3) = 6;
      return v2;
    }
LABEL_44:
    v3[4] = 3;
    goto LABEL_45;
  }
  if ( *v3 != 1 )
    goto LABEL_44;
  if ( v3[1] != 84 )
    goto LABEL_44;
  if ( v3[6] != 64 )
    goto LABEL_44;
  v6 = (unsigned int)v3[7];
  if ( (_DWORD)v6 )
  {
    v7 = (unsigned int)v3[11];
    if ( v7 < 0x90 || (v7 & 7) != 0 || v5 < v7 + v6 )
      goto LABEL_44;
  }
  v8 = (unsigned int)v3[8];
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)v3[12];
    if ( v9 < 0x90 || (v9 & 7) != 0 || v5 < v9 + v8 )
      goto LABEL_44;
  }
  v10 = (unsigned int)v3[9];
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)v3[13];
    if ( v11 < 0x90 || (v11 & 7) != 0 || v5 < v11 + v10 )
      goto LABEL_44;
  }
  if ( (_DWORD)v8 && (_DWORD)v6 && (unsigned int)v3[12] < v6 + (unsigned __int64)(unsigned int)v3[11]
    || (_DWORD)v10
    && ((_DWORD)v6 && (unsigned int)v3[13] < v6 + (unsigned __int64)(unsigned int)v3[11]
     || (_DWORD)v8 && (unsigned int)v3[13] < v8 + (unsigned __int64)(unsigned int)v3[12]) )
  {
    goto LABEL_44;
  }
  v12 = v3[14];
  if ( (unsigned int)(v12 - 1) > 1 || v12 == 1 && (unsigned __int8)v3[20] < 0xC0u )
    goto LABEL_44;
  if ( v12 == 2 && (unsigned __int8)v3[20] < 0x80u )
    goto LABEL_44;
  v13 = v3[20] & 3;
  if ( v13 )
  {
    if ( v13 != 1 )
      goto LABEL_39;
    if ( !(_DWORD)v8 )
      goto LABEL_44;
  }
  else if ( (_DWORD)v8 )
  {
    goto LABEL_44;
  }
  if ( (_DWORD)v10 )
    goto LABEL_44;
LABEL_39:
  if ( v13 == 2 && ((_DWORD)v8 || !(_DWORD)v10) || v12 == 2 && (*(_QWORD *)(a1 + 120) & 0x2000000000LL) == 0 )
    goto LABEL_44;
  return v2;
}
