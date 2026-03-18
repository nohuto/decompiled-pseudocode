/*
 * XREFs of NVMeValidateProtocolCommandRequest @ 0x1C000A9E8
 * Callers:
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 */

__int64 __fastcall NVMeValidateProtocolCommandRequest(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rax
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned int v6; // ebp
  _DWORD *v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // r8d
  unsigned int v16; // eax
  int v17; // eax
  unsigned int *v19; // [rsp+50h] [rbp+18h] BYREF

  v19 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v19);
  v6 = v4 + 3;
  v7 = SrbDataBuffer;
  if ( SrbDataBuffer[2] != v4 + 3 )
    goto LABEL_44;
  v8 = *v19;
  if ( (unsigned int)v8 < 0x54 )
  {
    if ( (unsigned int)v8 < 0x14 )
    {
LABEL_44:
      v4 = -1056964602;
      *(_BYTE *)(v5 + 3) = 6;
      return v4;
    }
LABEL_43:
    v7[4] = v6;
    goto LABEL_44;
  }
  if ( *SrbDataBuffer != 1 )
    goto LABEL_43;
  if ( SrbDataBuffer[1] != 84 )
    goto LABEL_43;
  if ( SrbDataBuffer[6] != 64 )
    goto LABEL_43;
  v9 = (unsigned int)SrbDataBuffer[7];
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)SrbDataBuffer[11];
    if ( v10 < 0x90 || (v10 & 7) != 0 || v8 < v10 + v9 )
      goto LABEL_43;
  }
  v11 = (unsigned int)v7[8];
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)v7[12];
    if ( v12 < 0x90 || (v12 & 7) != 0 || v8 < v12 + v11 )
      goto LABEL_43;
  }
  v13 = (unsigned int)v7[9];
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)v7[13];
    if ( v14 < 0x90 || (v14 & 7) != 0 || v8 < v14 + v13 )
      goto LABEL_43;
  }
  if ( (_DWORD)v11 && (_DWORD)v9 && (unsigned int)v7[12] < v9 + (unsigned __int64)(unsigned int)v7[11]
    || (_DWORD)v13
    && ((_DWORD)v9 && (unsigned int)v7[13] < v9 + (unsigned __int64)(unsigned int)v7[11]
     || (_DWORD)v11 && (unsigned int)v7[13] < v11 + (unsigned __int64)(unsigned int)v7[12]) )
  {
    goto LABEL_43;
  }
  v15 = v7[14];
  if ( (unsigned int)(v15 - 1) > 1 )
    goto LABEL_43;
  if ( v15 == 1 )
  {
    v16 = (unsigned __int8)v7[20];
    if ( v16 < 0xC0 && (v16 != 128 || (*(_DWORD *)(a1 + 20) & 0x80) == 0) )
      goto LABEL_43;
  }
  if ( v15 == 2 && (unsigned __int8)v7[20] < 0x80u )
    goto LABEL_43;
  v17 = v6 & v7[20];
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_38;
    if ( !(_DWORD)v11 )
      goto LABEL_43;
  }
  else if ( (_DWORD)v11 )
  {
    goto LABEL_43;
  }
  if ( (_DWORD)v13 )
    goto LABEL_43;
LABEL_38:
  if ( v17 == 2 && ((_DWORD)v11 || !(_DWORD)v13) || v15 == 2 && (*(_QWORD *)(a1 + 128) & 0x2000000000LL) == 0 )
    goto LABEL_43;
  return v4;
}
