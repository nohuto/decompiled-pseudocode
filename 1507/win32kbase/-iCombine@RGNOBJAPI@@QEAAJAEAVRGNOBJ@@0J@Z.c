/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00A3FE0
 * Callers:
 *     <none>
 * Callees:
 *     HmgReplace @ 0x1C000EBA0 (HmgReplace.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v9; // r14
  unsigned int v10; // r15d
  __int64 result; // rax

  v4 = *((_DWORD *)this + 10);
  v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v7 = *(_QWORD *)this;
  v8 = 3LL * (unsigned __int16)v4;
  v9 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v4 + 14);
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v4 + 14) = 0;
  v10 = RGNOBJ::iCombine(this, a2, a3, a4);
  if ( *(_QWORD *)this != v7 )
    HmgReplace(*((_QWORD *)this + 5), *(_QWORD *)this);
  result = v10;
  *(_BYTE *)(v6 + 8 * v8 + 14) = v9;
  return result;
}
