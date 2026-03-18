/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C00084B0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rbx
  __int64 result; // rax
  _DWORD *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // rax
  unsigned int v18; // edx
  bool v19; // cc
  unsigned int v20; // r8d
  _QWORD *v21; // r9
  __int64 v22; // rax
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    *(_BYTE *)(v5 + 4186) = 1;
    return result;
  }
  v7 = (_DWORD *)(a2 + 60);
  if ( v4 == 40 )
  {
    v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a2 + 7);
    v7 = (_DWORD *)(a2 + 16);
  }
  v9 = *(_QWORD *)(a1 + 8 * v8 + 1168);
  LODWORD(v23) = *(_DWORD *)(v5 + 4136);
  v10 = *(_DWORD *)(v9 + 52);
  HIDWORD(v23) = *(_DWORD *)(v5 + 4140);
  v11 = (unsigned __int16)*(_DWORD *)(v5 + 4144) + 1;
  v12 = (v10 + *v7 - 1) / v10;
  v23 += v11;
  v13 = v12 - v11;
  *(_QWORD *)(v5 + 4136) = v23;
  *(_WORD *)(v5 + 4144) = v13 - 1;
  v14 = v10 * v11;
  v15 = *(_QWORD *)(v5 + 4120);
  v16 = (v14 + (unsigned __int64)(v15 & 0xFFF)) >> 12;
  v17 = ((_DWORD)v14 + (_DWORD)v15) & 0xFFF;
  v18 = ((((_DWORD)v14 + (_DWORD)v15) & 0xFFF) + v10 * v13 + 4095) >> 12;
  if ( (_DWORD)v16 )
  {
    *(_QWORD *)(v5 + 4120) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v16 - 1)) + v17;
    if ( v18 == 1 )
      goto LABEL_12;
    if ( v18 == 2 )
    {
      *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v16);
      goto LABEL_25;
    }
    v20 = 0;
    v21 = (_QWORD *)v5;
    do
    {
      v22 = v20 + (unsigned int)v16;
      ++v20;
      *v21++ = *(_QWORD *)(v5 + 8 * v22);
    }
    while ( v20 < v18 - 1 );
    goto LABEL_22;
  }
  *(_QWORD *)(v5 + 4120) = v17 + (v15 & 0xFFFFFFFFFFFFF000uLL);
  if ( v18 != 1 )
  {
    v19 = v18 <= 2;
    if ( v18 != 2 )
      goto LABEL_23;
    *(_QWORD *)(v5 + 4128) = *(_QWORD *)v5;
LABEL_22:
    v19 = v18 <= 2;
LABEL_23:
    if ( !v19 )
      *(_QWORD *)(v5 + 4128) = StorPortGetPhysicalAddress(a1, 0LL, v5, &v23);
    goto LABEL_25;
  }
LABEL_12:
  *(_QWORD *)(v5 + 4128) = 0LL;
LABEL_25:
  *(_BYTE *)(a2 + 3) = 0;
  *(_WORD *)(v5 + 4166) = 256;
  *(_BYTE *)(v5 + 4168) = 1;
  *(_QWORD *)(v5 + 4216) = 0LL;
  return ProcessCommand(a1, a2);
}
