/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0042C40
 * Callers:
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 * Callees:
 *     HmgReplace @ 0x1C000EBA0 (HmgReplace.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  int v2; // eax
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // ebp
  __int64 result; // rax

  v2 = *((_DWORD *)this + 10);
  v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v5 = *(_QWORD *)this;
  v6 = 3LL * (unsigned __int16)v2;
  v7 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v2 + 14);
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v2 + 14) = 0;
  v8 = RGNOBJ::bCopy(this, a2);
  if ( v8 && *(_QWORD *)this != v5 )
    HmgReplace(*((_QWORD *)this + 5), *(_QWORD *)this);
  result = v8;
  *(_BYTE *)(v4 + 8 * v6 + 14) = v7;
  return result;
}
