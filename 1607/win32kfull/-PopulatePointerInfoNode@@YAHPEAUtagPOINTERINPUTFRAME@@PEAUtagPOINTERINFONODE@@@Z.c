/*
 * XREFs of ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     GetInputDelegate @ 0x1C005804C (GetInputDelegate.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetButtonChange@@YA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01C0D5C (-GetButtonChange@@YA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01E7E3C (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F4190 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 */

__int64 __fastcall PopulatePointerInfoNode(struct tagPOINTERINPUTFRAME *a1, struct tagPOINTERINFONODE *a2)
{
  unsigned __int16 updated; // ax
  struct tagWND *v6; // rdi
  unsigned __int8 v7; // si
  __int64 v8; // rax
  int v9; // r11d
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  __int64 v13; // r8
  const struct tagINPUT_TRANSFORM *v14; // r9
  struct HWND__ v15[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  struct tagWND *v17; // [rsp+90h] [rbp+18h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  *((_DWORD *)a2 + 2) = -1;
  if ( !*((_DWORD *)a2 + 17) )
  {
    *((_DWORD *)a2 + 15) = 0;
    return 0LL;
  }
  updated = PointerList::UpdateActivePointer(
              (struct tagPOINTERINFONODE *)((char *)a2 + 48),
              *((const struct tagPOINTEREVENTINT **)a2 + 3),
              v15,
              &v17,
              &v16,
              (unsigned __int16 *)&v18,
              *(unsigned int **)&v15[0].unused);
  *((_DWORD *)a2 + 15) = updated;
  if ( !updated )
    return 0LL;
  v6 = *(struct tagWND **)&v15[0].unused;
  if ( !*(_QWORD *)&v15[0].unused )
    return 0LL;
  v7 = v16;
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (4 * (((unsigned __int8)v16 >> 4) & 1))) & 4;
  v8 = 0LL;
  if ( (*(_DWORD *)a2 & 4) == 0 )
    v8 = *(_QWORD *)v6;
  *((_QWORD *)a2 + 3) = v8;
  *((_DWORD *)a2 + 8) = 0;
  if ( (unsigned int)IsCompositionInputWindow(v6) )
  {
    *((_DWORD *)a2 + 1) |= 0x80u;
    *(_DWORD *)a2 = v9 | 0x400;
  }
  if ( (v7 & 0x80u) != 0 && gptiManipulationThread )
  {
    v10 = v18;
    *((_DWORD *)a2 + 1) |= 0x100u;
    *((_DWORD *)a2 + 53) = v10;
  }
  if ( v6 == GetPTPShellListener() )
  {
    *(_DWORD *)a2 |= 0x500u;
    *((_DWORD *)a2 + 8) = 1;
  }
  if ( (v7 & 0x20) != 0 )
  {
    *(_DWORD *)a2 |= 0x500u;
    *((_DWORD *)a2 + 8) = 1;
    if ( (v7 & 0x40) != 0 )
      *(_DWORD *)a2 |= 0x800u;
  }
  *((_QWORD *)a2 + 10) = *(_QWORD *)v6;
  *((_DWORD *)a2 + 16) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 31) = 1;
  if ( (v7 & 1) != 0 )
    *((_DWORD *)a2 + 17) |= 1u;
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (((v7 >> 1) & 1) << 15)) & 0x8000;
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (((v7 >> 2) & 1) << 16)) & 0x10000;
  *((_DWORD *)a2 + 17) &= 0x7FE1F7u;
  if ( *((_DWORD *)a2 + 14) == 2 )
  {
LABEL_23:
    *((_DWORD *)a2 + 38) = 0;
    *((_DWORD *)a2 + 39) &= 7u;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a2 + 14) != 3 )
  {
    if ( *((_DWORD *)a2 + 14) != 5 )
      goto LABEL_24;
    goto LABEL_23;
  }
  *((_DWORD *)a2 + 38) &= 7u;
  *((_DWORD *)a2 + 39) &= 0xFu;
LABEL_24:
  v11 = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 36) = GetButtonChange((int)v17, v11 & 0x1F0);
  if ( (v11 & 1) != 0 || (v11 & 0x20000) == 0 || (v12 = 1, (v11 & 2) == 0) )
    v12 = 0;
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ v12) & 1;
  if ( (_DWORD)v17 != (v11 & 0x1F0) )
    *(_DWORD *)a2 &= ~1u;
  if ( GetInputDelegate((__int64)v6, 4096) && (*((_DWORD *)a2 + 1) & 0x100) == 0 )
    *(_DWORD *)a2 |= 0x100000u;
  *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (((v7 >> 3) & 1) << 14)) & 0x4000;
  if ( !(unsigned int)IsManipulationThreadNode(a2) )
  {
    if ( (unsigned int)InputTransform::OnInput(v6, *((struct tagWND **)a2 + 17), v13, v14) )
      *((_DWORD *)a2 + 17) |= 0x400000u;
  }
  return 1LL;
}
