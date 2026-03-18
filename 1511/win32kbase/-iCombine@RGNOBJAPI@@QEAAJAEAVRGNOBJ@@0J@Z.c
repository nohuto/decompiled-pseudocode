/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00A8B90
 * Callers:
 *     <none>
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  int v4; // eax
  _BYTE *SystemArgument2; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v9; // r14
  unsigned int v10; // r15d
  __int64 result; // rax

  v4 = *((_DWORD *)this + 2);
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v7 = *(_QWORD *)this;
  v8 = 3LL * (unsigned __int16)v4;
  v9 = *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v4 + 14);
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v4 + 14) = 0;
  v10 = RGNOBJ::iCombine(this, a2, a3, a4);
  if ( *(_QWORD *)this != v7 )
    HmgReplace(*((_QWORD *)this + 1), *(_QWORD *)this);
  result = v10;
  SystemArgument2[8 * v8 + 14] = v9;
  return result;
}
