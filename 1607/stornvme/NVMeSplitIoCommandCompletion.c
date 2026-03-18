/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C0002350
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
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
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rax
  bool v21; // cc
  __int64 PhysicalAddress; // rax
  char v23; // al
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    HIDWORD(v24) = 0;
    if ( v4 == 40 )
      v7 = (_DWORD *)(a2 + 60);
    else
      v7 = (_DWORD *)(a2 + 16);
    if ( v4 == 40 )
      v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v8 = *(unsigned __int8 *)(a2 + 7);
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1184);
    LODWORD(v24) = *(_DWORD *)(v5 + 4136);
    v10 = *(_DWORD *)(v9 + 52);
    HIDWORD(v24) = *(_DWORD *)(v5 + 4140);
    v11 = (unsigned __int16)*(_DWORD *)(v5 + 4144) + 1;
    v12 = (v10 + *v7 - 1) / v10 - v11;
    v24 += v11;
    v13 = v24;
    *(_DWORD *)(v5 + 4140) = HIDWORD(v24);
    LOWORD(v9) = v12 - 1;
    v14 = v10 * v12;
    *(_DWORD *)(v5 + 4136) = v13;
    *(_WORD *)(v5 + 4144) = v9;
    v15 = *(_QWORD *)(v5 + 4120);
    v16 = (v10 * v11 + (unsigned __int64)(v15 & 0xFFF)) >> 12;
    v17 = ((_WORD)v10 * (_WORD)v11 + (_WORD)v15) & 0xFFF;
    v18 = ((((_WORD)v10 * (_WORD)v11 + (_WORD)v15) & 0xFFFu) + (_DWORD)v14 + 4095) >> 12;
    if ( (_DWORD)v16 )
    {
      *(_QWORD *)(v5 + 4120) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v16 - 1)) + v17;
      if ( (_DWORD)v18 != 1 )
      {
        if ( (_DWORD)v18 == 2 )
        {
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v16);
          goto LABEL_20;
        }
        v19 = 0;
        v14 = v5;
        do
        {
          v20 = v19 + (unsigned int)v16;
          ++v19;
          *(_QWORD *)v14 = *(_QWORD *)(v5 + 8 * v20);
          v14 += 8LL;
        }
        while ( v19 < (int)v18 - 1 );
        v21 = (unsigned int)v18 <= 2;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 4120) = v17 + (v15 & 0xFFFFFFFFFFFFF000uLL);
      if ( (_DWORD)v18 != 1 )
      {
        v21 = (unsigned int)v18 <= 2;
        if ( (_DWORD)v18 == 2 )
        {
          PhysicalAddress = *(_QWORD *)v5;
          goto LABEL_19;
        }
LABEL_17:
        if ( v21 )
        {
LABEL_20:
          *(_BYTE *)(a2 + 3) = 0;
          v23 = *(_BYTE *)(v5 + 4245) & 0xFE;
          *(_QWORD *)(v5 + 4216) = 0LL;
          *(_BYTE *)(v5 + 4245) = v23 | 6;
          return ProcessCommand(a1, a2, v18, v14);
        }
        PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v5, &v24);
LABEL_19:
        *(_QWORD *)(v5 + 4128) = PhysicalAddress;
        goto LABEL_20;
      }
    }
    *(_QWORD *)(v5 + 4128) = 0LL;
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 4245) |= 8u;
  return result;
}
